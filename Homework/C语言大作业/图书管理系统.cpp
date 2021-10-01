#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

   void page_title(char menu_item[100])
   {
   	printf("\t\t*******************************SUSTlibrary*************\n\n--%s--\n\n",menu_item);
   }
   void return_confirm()
   {
   	 printf("\nPress any key to return....\n");
   	 getch();
   	 system("cls");
   }
   struct book
   {
   	int id;
   	char name[31];
   	char author[27];
   	char publish[31];
   	int store;
   	int total;
   	int usr[10];
   	int days[10];
   }books[500];
   bool same_id[1000000];
   int file_write(void)
   {
	FILE * fp;
	if ((fp = fopen("data.txt", "wb")) == NULL)
	{
		return -1;
	}
	fwrite(&books, sizeof(struct book), 100, fp);
	fclose(fp);
	return 1;
}
int file_read(void)
{
	FILE *fp;
	memset(same_id, false, sizeof(same_id));
	fp = fopen("data.txt", "rb");
	fread(&books, sizeof(struct book), 100, fp);
	fclose(fp);
	int i;
	for (i = 0; i < 100; ++i)
	{
		if (books[i].id != 0)
		{
			same_id[books[i].id] = 1;
		}
	}
	return 0;
}
   void book_add()
   {
   	int i;
   	re: system("cls");
   	char a[]={"Registration book"};
   	page_title(a);
	for(i=0;i<100;i++)  if(books[i].id==0)
	   break;
	printf("The rerial number:");
	scanf("%d",&books[i].id);
	if (same_id[books[i].id])
	{
		printf("The sequence number already exists：\n");
		printf("1	Reenter the sequence number\n");
		printf("2	Back to main menu\n");
		switch(getch())
		{
			case '1': goto re;break;
			case '2': return ;
			default: return ;
		}
	}
    printf("Title:");
	scanf("%s",&books[i].name);
	printf("Author:");
	scanf("%s",&books[i].author);
	printf("Press:");
	scanf("%s",&books[i].publish);
	printf("The number of:");
	scanf("%d",&books[i].total);
	books[i].store=books[i].total;
	same_id[books[i].id] = 1;
	return_confirm();
   }
   int book_show()
   {
   	int i,flag=0;
   	system("cls");
   	for(i=0;i<100;i++)
    {
   		if(strlen(books[i].name)!=0)
   		{
   			printf("The sequence number:%d\t",books[i].id);
   			printf("Title:%s\t",books[i].name);
   			printf("Author:%s\t",books[i].author);
   			printf("Press:%s\t",books[i].publish);
   			printf("Number of remaining:%d\t",books[i].store);
   			printf("The total number of:%d\n",books[i].total);
   			flag=1;
		   }
	   }
	   if(flag==0)
	      printf("\nNo record was found.\n");
	    return i;
   }
   int book_search()
   {
   	int n,i,flag=0;
   	char nam[30];
   	system("cls");
   	printf("Enter the title:");
   	scanf("%s",&nam);
   	for(i=0;i<100;i++)
   	{
   		if(strcmp(books[i].name,nam)==0)
   		{
   			printf("The sequence number:%d\t",books[i].id);
			printf("Title:%s\t",books[i].name);
			printf("Author:%s\t",books[i].author);
			printf("Press:%s\t",books[i].publish);
			printf("Number of remaining:%d\t",books[i].store);
			printf("The total number of:%d\n",books[i].total);
			n=i;
			flag=1;
			break;
		   }
	   }
	   if(flag==0)
	   {
	   	printf("\nNo record was found.\n");
	   	return -1;
	   }
	   return n;
   }
   int book_edit()
   {
   	int i,id_change;
   	system("cls");
	char b[]={"Modify book informaytion"};
   	page_title(b);
	printf("Enter the book number you want to modify:");
	scanf("%d",&id_change);
	for(i=0;i<100;i++)
	{
		if(books[i].id==id_change)
		{
			printf("Modify title:");
			scanf("%s",books[i].name);
			printf("Modify author:");
			scanf("%s",books[i].author);
			printf("Modify press:");
			scanf("%s",books[i].publish);
			printf("Modify the total number:");
			scanf("%d",&books[i].total);
			printf("Successful modification of book information.\n");
			books[i].store=books[i].total;
			return i;
		}
	 }
	 printf("\nNo record was found.\n");
	 return -1;
   }
   int book_del()
   {
   	int i,num,j;
   	system("cls");
   	char c[]={"delete books"};
   	page_title(c);
	printf("输入所要删除的书的编号:");
	scanf("%d",&num);
	for(i=0;i<100;i++)
	{
		if(books[i].id==num)
		{
			for(j=i;j<100;j++)
		{
			books[j].id=books[j+1].id;
			strcpy(books[j].name,books[j+1].name);
			strcpy(books[j].publish,books[j+1].publish);

		}
			printf("该书已删除.\n");
			return i;

		}
	 }
	 printf("没有找到相关记录.\n");
	 return -1;
   }
   void book_out()
   {
   	int n,s,i,d;
   	system("cls");
   	char g[]={"借阅图书"};
   	page_title(g);
	n=book_search();
	if(n!=-1 && books[n].store>0)
	{
		printf("输入借书证序号:");
		scanf("%d",&s);
		printf("输入可借天数:");
		scanf("%d",&d);
		for(i=0;i<10;i++)
		   if(books[n].usr[i]==0)
		   {
		   	books[n].usr[i]=0;
		   	books[n].days[i]=0;
		   	break;
		   }
		books[n].store--;
	 }
	 else if(n!=-1 && books[n].store==0)
	    printf("此书已经全部借出.\n");
	else
	     ;
	return_confirm();
   }
   void book_in(void)
   {
   	int n,s,i;
   	char f[]={"归还图书"};
   	page_title(f);
   	n=book_search();
   	if(n!=-1 && books[n].store<books[n].total)
   	{
   		printf("借阅者图书证列表:\n");
   		for(i=0;i<10;i++) if(books[n].usr[i]!=0)
   		  printf("[%d]-%d天\n",books[n].usr[i],books[n].days[i]);
   		printf("输入借书证序号:");
   		scanf("%d",&s);
   		for(i=0;i<10;i++)
   		{
   			if(books[n].usr[i]==s)
			{
			books[n].usr[i]=0;
			books[n].days[i]=0;
			break;

				}
		   }
		   books[n].store++;
	   }
	   if(n!=-1 && books[n].store==books[n].total)
	     printf("全部归还.\n");
	   else if(n!=-1 && books[n].store<books[n].total)
	     printf("归还成功.\n");
	   else
	      ;
	    return_confirm;
   }
main()
{
    file_read();
	char d[]={"\t\tthe operating menu\t\t"};
	menu:page_title(d);
	printf("select operations with numeric keys\n\n");
	printf("\t\t1 registration book\t\t2 according to the book\n");
	printf("\t\t3 query book information\t\t4 modify book information\n");
	printf("\t\t5 delete books\t\t6 borrow books\n");
	printf("\t\t7 trturn books\t\t8 log out\n");
	printf("please press numeric keys:\n");
	switch(getch())
	 {
	    case '1':book_add();break;
		case '2':book_show();break;
		case '3':book_search();break;
		case '4':book_edit();break;
		case '5':book_del();break;
		case '6':book_out();break;
		case '7':book_in();break;
		case '8':exit(0);break;
		default :system("cls");break;
	}
	file_write();
	goto menu;


 }

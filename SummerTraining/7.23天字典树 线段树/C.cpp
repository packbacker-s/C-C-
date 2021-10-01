//你们考了多少分
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
#define maxn 200 + 5
typedef struct tree
{ //结构体，l,r存左右端点，num存分数
    int r;
    int l;
    int num;
};
int num[maxn];
tree t[maxn];
inline void pu(int k)
{ //没搞明白
    t[k].num = max(t[k << 1].num, t[k << 1 | 1].num);
    return;
}
void build(int now, int l, int r)
{ //建树过程
    t[now].l = l;
    t[now].r = r;
    if (l == r)
    {
        t[now].num = num[l];
        return;
    } //真正存分数的只有叶子节点，其他节点只是表示区间，方便查找
    int mid = (l + r) >> 1;
    build(now << 1, l, mid); //开始建左右孩子节点
    build(now << 1 | 1, mid + 1, r);
    pu(now); //没搞明白
}

int query_poin(int k, int l, int r)
{ //查询函数，区间内的最大值
    int res = 0;
    if (l <= t[k].l && r >= t[k].r)
        return t[k].num; //刚好在区间内，输出数据，有点没明白
    int mid = (t[k].r + t[k].l) >> 1;
    if (l <= mid)
        res = max(res, query_poin(k << 1, l, r)); //有点迷
    if (r > mid)
        res = max(res, query_poin(k << 1 | 1, l, r));
    return res;
}
void update(int now, int x, int y)
{
    if(t[now].l==t[now].r){
        t[now].num=y;
        return ;
    }
    int mid=(t[now].l+t[now].r)>>1;
    if(x<=mid)update(now<<1,x,y);
    else update(now<<1|1,x,y);
    pu(now);
}
int main()
{
    int n, m;
    while (scanf("%d%d", &n, &m) != EOF)
    {
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &num[i]);
        }
        build(1, 1, n);
        while (m--)
        {
            char c;
            int i, j;
            cin >> c;
            scanf("%d%d", &i, &j);
            if (c == 'Q')
            {
                printf("%d\n", query_poin(1, i, j));
            }
            if (c == 'U')
            {
                update(1, i, j);
            }
        }
    }
    return 0;
}

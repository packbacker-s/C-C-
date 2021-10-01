List MakeEmpty() {
	List list = (List) malloc(sizeof(struct LNode));
	if(!list) exit(-1);
	list -> Last = -1;
	return list;
}
Position Find( List L, ElementType X ) {
	int tp = L -> Last;
	while(tp > -1) {
		if(L -> Data[tp] == X) {
			break;
		}
		tp--;
	}
	 return tp;
}
bool Insert( List L, ElementType X, Position P ){
	if(L ->Last == MAXSIZE - 1){
		printf("FULL");
		return false;
	}
	if(P<0||(P>(L->Last +1))){
		printf("ILLEGAL POSITION");
		return false;
	}
		int j = L->Last + 1;
		for(;j>P;j--)
			L->Data[j] = L ->Data[j-1];
		L ->Data[j] = X;
		L ->Last = L->Last + 1;
	return true;
}
bool Delete( List L, Position P ) {
	if(P<0||P>L->Last) {
		printf("POSITION %d EMPTY", P);
		return false;
	}
	int j = P;
	for(; j < L -> Last; j++) {
		L -> Data[j] = L -> Data[j+1];
	}
	L ->Last = L ->Last - 1;
	return true;
}

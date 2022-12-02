#include "list.h"

void CreatList (List *pl)
{
    pl->size=0;
}
void ListEmpty (List * pl){
return !pl->size;
}
void ListSize  (List * pl){
return pl->size;
}
void ListFull (List *pl){
    return pl->size==MaxList;
}
void DestroyList (List * pl){
pl->size = 0;
}
// 0<= p<=  size
void InsertList (int p, ListEntry e, List *pl){
int i ;
for(i=pl->size ; i>=p; i--)
    pl->entry[i+1]=pl->entry[i];
pl->entry[p]=e;
pl->size++ ;
}
// 0<=p<=size-1  and list not empty
void DelateList (int p , ListEntry *pe, List *pl){
int i ;
*pe=pl->entry[p];

for(i=p+1;i<pl->size;i++)
    pl->entry[i-1]=pl->entry[i];
     pl->size--;

}
// to get copy from elment
void TraverseList (List *pl,void (*Visit)(ListEntry))
{
    int i ;
    for(int i=0 ; i<pl->size ;i++){
        (*Visit)(pl->entry[i]);
    }
}

void RetrieveList (int p , ListEntry *pe , List *pl){
*pe=pl->entry[p];
}

void ReplaseList (int p , ListEntry e, List * pl){
pl->entry[p]=e;
}

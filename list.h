
#include"../Global_File/global.h"

typedef struct list {
ListEntry entry[MaxList];
int size ;
}List;

void CreatList (List *);
void ListEmpty (List *);
void ListSize  (List *);
void ListFull (List *);
void DestroyList (List *);
void InsertList (int , ListEntry , List *);
void DelateList (int , ListEntry *, List *);
void TraverseList (List *,void (*Visit)(ListEntry));
void RetrieveList (int , ListEntry * , List *);
void ReplaseList (int , ListEntry , List *);

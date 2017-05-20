typedef struct TList
{
  float val;
  struct TList *next;
  struct TList *prior;
}TList;

void init(TList **L);
void print(TList *L);
void pushBack(TList **L, float e);
void pushFront(TList **L,float e);
int length(TList *L);
float getElement(TList *L, int i);
int removeFront (TList **L);
int removeBack (TList **L);
int removeElement(TList **L, int i);
int insertElement(TList **L, int i, float e);
void clear (TList **L);
int greaterThanE( TList *L, float e);
int lessThanE( TList *L, float e);
float sumList (TList *L);
float averageList (TList *L);

typedef struct TList
{
  float val;
  struct TList *next;
  struct TList *prior;
}TList;

void init(TList **L);
void print(TList *L);
void pushBack(TList **L, float e);

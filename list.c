#include "list.h"
#include <stdio.h>
#include <stdlib.h>

/*
  Date: 15/05/2017

  Erle robotics - Challenge

  /////////////////////////////////////////////////////

  In this program I will be writting the code to work
  with a double-linked list of floats.

  I will define some basic functions,
  and others to change and work with the list.
*/


//This function initializes the list L
void init (TList **L)
{
    *L=NULL;
}

//This function shows the content of the list L
void print (TList *L)
{
  TList* it = L;

  printf("[");
  while (it!=NULL)
  {
    printf("%.0f, ", it->val );
    it=it->next;
  }
  printf("]\n");
}

//This function adds the element e at the end of the list
void pushBack (TList **L, float e)
{

  if (*L==NULL)
  {
    *L = (TList*)malloc(sizeof(TList));
    (*L)->val=e;
    (*L)->next=NULL;
    (*L)->prior=NULL;
  }
  else
  {
    TList* it=*L;

    while (it->next != NULL)
    {
      it = it->next;
    }

    TList *new = malloc(sizeof(TList));
    new->val=e;
    new->next=NULL;
    new->prior=it;
    it->next=new;
  }
}

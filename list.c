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


//This function adds the element e at the beginning of the list
void pushFront (TList **L, float e)
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

  	TList *new =malloc(sizeof(TList));
  	new->next = *L;
  	(*L)->prior = new;
  	new->prior = NULL;
  	new->val = e;
  	*L = new;

  }

}


//This functions returns the length of the list
int length(TList *L)
{
  TList* it=L;

  int con=0; //This counter will give us the number of floats

  if(it==NULL)
  {
    ;
  }
  else
  {
    con++;
    while (it->next!=NULL)
    {
      it=it->next;
      con++;
    }
  }

  return con;
}



//This functions returns the element i of the list
float getElement (TList *L, int i)
{
  TList *it, *wanted;
  it=L;

  float element;

  for(int j=0; j<(i);j++) it=it ->next;
  {
    wanted=it;
  }

  element=wanted->val;

  return element ;
}



//This functions removes the first element of the list (1 sucess, 0 otherwise)
int removeFront(TList **L)
{
  TList *notwanted;

  notwanted=*L;

  int end;

  if(*L==NULL)
  {
    end=0;
  }
  else
  {
    *L=(*L)->next;
    free(notwanted);
    (*L)->prior=NULL;
    end=1;
  }

  return end;

}


//This function removes the last element of the list (1 sucess, 0 otherwise)
int removeBack(TList **L)
{
  TList *it, *notwanted;
  it=*L;
  notwanted=*L;

  int end;

  if(it==NULL)
  {
    end=0;
  }
  else if (it!=NULL)
  {
    while (notwanted->next!=NULL)
    {
      notwanted=notwanted->next;
    }
    it=notwanted->prior; //It se queda en el anterior al que quiero Borrar
    it->next=NULL;

    free(notwanted);

    end=1;

  }

  return end;
}
























////////////////////////////////////////////////////////////////

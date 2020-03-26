#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "LL.h"



void spliceinto(LL_t * L, int x, int i)  // Question a.
{ 
  node_t * ele = (node_t *) malloc(sizeof(node_t));
  ele->data = x;
  
  if(L->head == NULL)
  {
    L->head = ele;
    ele->next = NULL;
    L->tail = ele;
  }

  if(i<=0)
  {
    ele->next = L->head;
    L->head = ele;
    return;
  }

  node_t * curr = (node_t *)malloc(sizeof(node_t));
  node_t * prev = (node_t *)malloc(sizeof(node_t));
  node_t * len = (node_t *)malloc(sizeof(node_t));
  int num = 0;
  len = L->head;
  while(len != NULL)
  {
    len = len->next;
    num++;
  }

  if(i>=num)
  {
    L->tail->next = ele;
    ele->next = NULL;
  }
  
  else
  {
    prev = L->head;
    curr = L->head->next;
    int n = 1;
    while(n != i)
    {
      prev = prev->next;
      curr = curr->next;
      n++;
    }
    prev->next = ele;
    ele->next = curr;
  }
}


void reverse(LL_t * L) // Question b.
{
  node_t * curr = (node_t *)malloc(sizeof(node_t));
  if(L->head == NULL)
  {
    return; 
  }
  if(L->tail == L->head)
  {
    return;
  }
  else
  {
    curr = L->head;
    L->head = L->head->next;
    curr->next = NULL;
    reverse(L);
    L->tail = L->tail->next = curr;
  }
}


unsigned int removeNumber(LL_t * L, int target)  // Question c.
{
  if(L->head == NULL)
  {
    return 1;
  }
  if(L->tail == L->head)
  {
    if(L->head->data == target)
    {
      L->head = NULL;
      L->tail = NULL;
      return 0;
    }
    else
    {
      return 1;
    }
  }

  node_t * curr = (node_t *)malloc(sizeof(node_t));
  node_t * prev = (node_t *)malloc(sizeof(node_t));
  int num = 0;
  curr = L->head->next;
  prev = L->head;
  while(curr!=NULL)
  {
    if(prev->data == target)
    {
      L->head = L->head->next;
      num = 1;
    }
    if(curr->data == target)
    {
      curr = curr->next;
      prev->next = curr;
      num = 1;
    }
    else
    {
      curr = curr->next;
      prev = prev->next;
    }
  }

  if(num != 0)
  {
    return 0;
  }
  if(num == 0) 
  {
    return 1;
  }
}


unsigned int numberOfEvens (LL_t * L)  // Question d.
{
  if(L->head == NULL)
  {
    return 0;
  }
  int num = 0;
  node_t * curr = (node_t *)malloc(sizeof(node_t));
  curr = L->head;
  while(curr != NULL)
  {
    if(curr->data%2 == 0)
    {
      num++;
    }
    curr = curr->next;
  }
  return num;
}



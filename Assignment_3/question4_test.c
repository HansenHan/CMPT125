#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "LL.h"
#include "LL-node.h"

unsigned int removeNumber(LL_t * L, int target) {
    //write your code here
if(L->head==NULL){return 1;}
else if(L->tail==L->head){if(L->head->data==target){L->head=NULL;L->tail=NULL; return 0;}else{return 1;}}
int time=0;
node_t * curr=malloc(sizeof(node_t));
node_t * prev=malloc(sizeof(node_t));
curr=L->head->next;
prev=L->head;

while(curr!=NULL){
if(curr->data==target){
curr=curr->next;
prev->next=curr;
time++;
}
else{
curr=curr->next;
prev=prev->next;
}
}

if(time>0){return 0;}
else{return 1;}
}




unsigned int numberOfEvens (LL_t * L) {
    //write your code here
int time = 0;
node_t * curr=malloc(sizeof(node_t));
curr=L->head->next;
while(curr!=NULL){

if(curr->data%2==0){
time++;
}
curr=curr->next;
}
return time;
}



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
/*

node_t * new = malloc(sizeof(node_t));
new->data = x;

if(L->head==NULL){
L->head->next->data = new->data;
L->head->next=new;
L->tail=L->head->next;
}

if(i<=0){
new->next=L->head;
L->head=new;
return;
}

node_t * curr=malloc(sizeof(node_t));
node_t * prev=malloc(sizeof(node_t));
int time=0;
curr=L->head->next;
prev=L->head;
while(curr!=NULL){
if(time!=i){
curr=curr->next;
prev=prev->next;
time++;
}
else{
prev->next=new;
new->next=curr;
return ;
}
}
prev->next=new;
new->next=curr;
}

*/

void reverse(LL_t * L) {
node_t * curr=malloc(sizeof(node_t));
    if (L->head != L->tail) {
    curr = L->head;
    L->head = L->head->next;
    curr->next = NULL;
    reverse(L);
    L->tail = L->tail->next = curr;
    }
}



int main(){
LL_t * arr=LLcreate();
LLappend(arr, 10);
LLappend(arr, 11);
LLappend(arr, 12);
LLappend(arr, 13);
LLappend(arr, 14);
LLappend(arr, 15);
LLappend(arr, 16);
LLappend(arr, 17);
LLappend(arr, 18);
LLappend(arr, 19);
LLappend(arr, 20);
reverse(arr);
node_t * test = malloc(sizeof(node_t));
test=arr->head;
while(test!=NULL){
printf("%i ",test->data);
test=test->next;
}
}
/*
node_t * curr = arr->head;
printf("%i\n",arr->head->data);
for(int i=0;i<10;i++){
curr=curr->next;
//curr->data=i;
printf("%i\n",curr->data);

// LLappendNode(arr,curr);
}


int x=55;
int i=8;



node_t * test = malloc(sizeof(node_t));
test=arr->head;
while(test!=NULL){
printf("%i ",test->data);
test=test->next;
}
}
*/

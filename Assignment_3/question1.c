#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {
  int * data;
  int len=sizeof(data);
}queue_t;


void print(Q){
  for(int i=0; i<N; i++)
  {
    printf("%d",Q[i]);
  }
}

int enqueue(Q,X){
  if(queue_t->len >= N){
    return -1;
  }
  else{
    Q[len]=X;
  }
}


int main(){
  int Q[10];
  for(int i=0; i<5; i++){
    Q[i]=i;
  }
  queue_t * queue = Q;
  print(Q);
return 0;
}

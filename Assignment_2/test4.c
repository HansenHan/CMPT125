#include <stdio.h>

void func(int R[], int N)
{
  
  if(N>1)
  {
    for(int num=2; num<=N; num++)
    {
      for(int k=0; k<(num-1); k++)
      {
        int tmp=R[2*num-2-k];
        R[2*num-2-k]=R[2*num-3-k];
        R[2*num-3-k]=tmp; 
      }
    }
  }

}

int main()
{
  int R[6]={1,10,1,10,1,10};
  func(R,3);
  for(int l=0; l<6; l++)
  {
    printf("%d ",R[l]);
  }
  printf("\n");
return 0;
}

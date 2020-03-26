#include <stdio.h>
#include <stdlib.h>

void test_up(int a, int b) // test up
{
  if((a-1>=0) && (R[a-1][b]==0) && (R[a][b]==1)) // (a-1>=0) means not on the up edge; (R[a-1][b]==0) means the upper number is not tested before; (R[a][b]==1) means this number pass the test by true
    {                                            
      if(abs(A[a-1][b]-A[a][b])<=2)              // the differ is no more than 2
      {
        R[a-1][b]=1;                             // change the number on the result array 
        test_up(a-1,b);
        test_left(a-1,b);
        test_right(a-1,b);
      }
      else
      {
        R[a-1][b]=2;
      } 
    }
}

void test_down(int a, int b) // test down
{
  if((a+1<=n) && (R[a+1][b]==0) && (R[a][b]==1))
    {
      if(abs(A[a+1][b]-A[a][b])<=2)
      {
        R[a+1][b]=1;
        test_down(a+1,b);
        test_left(a+1,b);
        test_right(a+1,b);
      } 
      else
      {
        R[a+1][b]=2;
      } 
    }
}

void test_left(int a, int b) // test left
{
  if((b-1>=0) && (R[a][b-1]==0) && (R[a][b]==1))
    {
      if(abs(A[a][b-1]-A[a][b])<=2)
      {
        R[a][b-1]=1;
        test_up(a,b-1);
        test_down(a,b-1);
        test_left(a,b-1);
      } 
      else
      {
        R[a][b-1]=2;
      } 
    }
}

void test_right(int a, int b) // test right
{
  if((b+1>=0) && (R[a][b+1]==0) && (R[a][b]==1))
    {
      if(abs(A[a][b+1]-A[a][b])<=2)
      {
        R[a][b+1]=1;
        test_up(a,b+1);
        test_down(a,b+1);
        test_right(a,b+1);
      }
      else
      {
        R[a][b+1]=2;
      } 
    }
}

void test_func(int a, int b) // total test function
{
  if(a-1>=0)
  {
    test_up(a,b);
  }
  if(a+1<=n)
  {
    test_down(a,b);
  }
  if(b-1>=0)
  {
    test_left(a,b);
  }
  if(b+1<=n)
  {
    test_right(a,b);
  }
}

int main()
{
  int number;
  int n=10;
  int R[10][10]={0};

  int A[10][10]={{50,51,54,58,60,60,60,63,68,71},
                 {48,52,51,59,60,60,63,63,69,70},
                 {44,48,52,55,58,61,64,64,66,69},
                 {44,46,53,52,57,60,60,61,65,68},
                 {42,45,50,54,59,61,63,63,66,70},
                 {38,42,46,56,56,63,64,61,64,62},
                 {36,40,44,50,58,60,66,65,62,61},
                 {36,39,42,49,56,62,67,66,65,60},
                 {30,36,40,47,50,64,64,63,62,60},
                 {32,34,38,45,51,53,58,58,57,57}
                };

  number=A[r][c];
  int a=r;
  int b=c;
  R[a][b]=1

  // start search
  test_func(a,b)

  for(int d=0; d<n; d++) // print R[][]
  {
    for(int b=0; b<n; b++)
    {
      if(R[d][b]==1)
      {
        printf("1 ");
      }
      else
      {
        printf("0 ");
      }
    }
    printf("\n");
  }

return 0;
}

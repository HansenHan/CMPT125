#include <stdio.h>
#include <stdlib.h>

int up(int number)
{
      if(abs(int A[i+1][j]-number)<=2)
      {
        int num;
        int j;
        int i;
        int arr[num]=i+1;
        int brr[num]=j;
        num++;
        number=A[i+1][j];
        up(number);
      }
      if(abs(A[i][j+1]-number)<=2)
      {
        arr[num]=i;
        brr[num]=j+1;
        num++;
        number=A[i][j+1];
        left(number);
      }
      if(abs(A[i][j-1]-number)<=2)
      {
        arr[num]=i;
        brr[num]=j-1;
        num++;
        number=A[i][j-1];
        right(number);
      }
      if((abs(A[i+1][j]-A[i][j])>2) && (abs(A[i][j+1]-A[i][j])<=2) && (abs(A[i][j-1]-A[i][j])<=2))
      {
        return 0;
      }
}

int down(int number)
{
      if(abs(int A[i-1][j]-number)<=2)
      {
        int num;
        int j;
        int i;
        int arr[num]=i-1;
        int brr[num]=j;
        num++;
        number=A[i-1][j];
        down(number);
      }
      if(abs(A[i][j+1]-number)<=2)
      {
        arr[num]=i;
        brr[num]=j+1;
        num++;
        number=A[i][j+1];
        left(number);
      }
      if(abs(A[i][j-1]-number)<=2)
      {
        arr[num]=i;
        brr[num]=j-1;
        num++;
        number=A[i][j-1];
        right(number);
      }
      if((abs(A[i-1][j]-A[i][j])<=2) && (abs(A[i][j+1]-A[i][j])<=2) && (abs(A[i][j-1]-A[i][j])<=2))
      {
        return 0;
      }
}

int left(int number)
{
      if(abs(int A[i+1][j]-number)<=2)
      {
        int num;
        int j;
        int i;
        int arr[num]=i+1;
        int brr[num]=j;
        num++;
        number=A[i+1][j];
        up(number);
      }
      if(abs(A[i-1][j]-number)<=2)
      {
        arr[num]=i-1;
        brr[num]=j;
        num++;
        number=A[i-1][j];
        down(number);
      }
      if(abs(A[i][j+1]-number)<=2)
      {
        arr[num]=i;
        brr[num]=j+1;
        num++;
        number=A[i][j+1];
        left(number);
      }
      if((abs(A[i+1][j]-A[i][j])>2) && (abs(A[i-1][j]-A[i][j])<=2) && (abs(A[i][j+1]-A[i][j])<=2))
      {
        return 0;
      }
}

int right(int number)
{
      if(abs(int A[i+1][j]-number)<=2)
      {
        int num;
        int j;
        int i;
        int arr[num]=i+1;
        int brr[num]=j;
        num++;
        number=A[i+1][j];
        up(number);
      }
      if(abs(A[i-1][j]-number)<=2)
      {
        arr[num]=i-1;
        brr[num]=j;
        num++;
        number=A[i-1][j];
        down(number);
      }
      if(abs(A[i][j-1]-number)<=2)
      {
        arr[num]=i;
        brr[num]=j-1;
        num++;
        number=A[i][j-1];
        right(number);
      }
      if((abs(A[i+1][j]-A[i][j])>2) && (abs(A[i-1][j]-A[i][j])<=2) && (abs(A[i][j-1]-A[i][j])<=2))
      {
        return 0;
      }
}


int func(int number)
{
      if(abs(int A[i+1][j]-number)<=2)
      {
        int num;
        int j;
        int i;
        int arr[num]=i+1;
        int brr[num]=j;
        num++;
        number=A[i+1][j];
        up(number);
      }
      if(abs(A[i-1][j]-number)<=2)
      {
        arr[num]=i-1;
        brr[num]=j;
        num++;
        number=A[i-1][j];
        down(number);
      }
      if(abs(A[i][j+1]-number)<=2)
      {
        arr[num]=i;
        brr[num]=j+1;
        num++;
        number=A[i][j+1];
        left(number);
      }
      if(abs(A[i][j-1]-number)<=2)
      {
        arr[num]=i;
        brr[num]=j-1;
        num++;
        number=A[i][j-1];
        right(number);
      }
      if((abs(A[i+1][j]-A[i][j])>2) && (abs(A[i-1][j]-A[i][j])<=2) && (abs(A[i][j+1]-A[i][j])<=2) && (abs(A[i][j-1]-A[i][j])<=2))
      {
        return 0;
      }
}

int main()
{
  int number;
  int n=0;
  int arr[100]={0};
  int brr[100]={0};
  int result[10][10]={0};
  int num=0;

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

  for(int i=0; i<n; i++)  // for row
  {
    for(int j=0; j<n; j++) // for col
    {
      
      number = A[i][j];  // start
      arr[num]=i;
      brr[num]=j;
      num++;
      func(number);
    }
  }

  for(int q=0; q<num; q++)
  {
    result[arr[q]][brr[q]]=1;
  }

  for(int d=0; d<n; d++)
  {
    for(int b=0; b<n; b++)
    {
      printf("%d ", result[d][b]);
    }
    printf("\n");
  }
  

}

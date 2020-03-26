#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int A[], int n)
{
  // Precondition: The array of integers must be filled with values and
  // the number of values in the array must be n.
  // Postcondition: The Bubble Sort is used to sort the list of integers
  // into increasing order.
  for (int i = 0; i < n-1; i++)
  {
    for (int j = 0; j < n-i-1; j++) 
    {
      if (A[j] > A[j+1])
      {
        int tmp=A[j];  // swap two elements
        A[j]=A[j+1];
        A[j+1]=tmp;
      }
    }
  }
}

void insertion_sort(int A[], int n)
{
  // Precondition: The array of integers must be filled with values and
  // the number of values in the array must be n.
  // Postcondition: The Insertion Sort is used to sort the list of integers
  // into increasing order.
  for(int i=1; i<n; i++)
  {
    int num=A[i];
    int j=i-1;
    while(j>=0 && A[j]>num)  // find element position
    {
      A[j+1]=A[j];
      j--;
    }
    A[j+1]=num;
  }
}

void random_array(int *a, int n)
{
  srand(time(NULL));
  for(int i=0; i<n; i++)
  {
    a[i]=rand();
  }
}

void sorted_array(int *a, int n)
{
  srand(time(NULL));
  for(int i=0; i<n; i++)
  {
    a[i]=rand();
  }
  bubble_sort(a,n);  // sort the array 
}

void reverse_array(int *a, int n)
{
  srand(time(NULL));
  for(int i=0; i<n; i++)
  {
    a[i]=rand();
  }
  bubble_sort(a,n);  // sort the array
  for(int k=0; k<=(n/2-1); k++)  // reverse the array
  {
    int tmp=a[k];
    a[k]=a[n-1-k];
    a[n-1-k]=tmp;
  }
}

int main()
{
  clock_t start, end;
  double cpu_time_used;
  
  int A2[20000];
  int A4[40000];
  int A10[100000];

///////////// Insertion Sort /////////////
//sorted_array
  sorted_array(A2,20000);
  sorted_array(A4,40000);
  sorted_array(A10,100000);
  
  start=clock();
  insertion_sort(A2,20000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Insertion Sort, sorted array\n");
  printf("Array size: 20000 time: %f seconds\n", cpu_time_used);
  
  start=clock();
  insertion_sort(A4,40000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Array size: 40000 time: %f seconds\n", cpu_time_used);

  start=clock();
  insertion_sort(A10,100000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Array size: 100000 time: %f seconds\n", cpu_time_used);

//reverse_array
  reverse_array(A2,20000);
  reverse_array(A4,40000);
  reverse_array(A10,100000);
  
  start=clock();
  insertion_sort(A2,20000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Insertion Sort, reverse array\n");
  printf("Array size: 20000 time: %f seconds\n", cpu_time_used);
  
  start=clock();
  insertion_sort(A4,40000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Array size: 40000 time: %f seconds\n", cpu_time_used);

  start=clock();
  insertion_sort(A10,100000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Array size: 100000 time: %f seconds\n", cpu_time_used);


//random_array1
  random_array(A2,20000);
  random_array(A4,40000);
  random_array(A10,100000);
  
  start=clock();
  insertion_sort(A2,20000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Insertion Sort, random array1\n");
  printf("Array size: 20000 time: %f seconds\n", cpu_time_used);
  
  start=clock();
  insertion_sort(A4,40000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Array size: 40000 time: %f seconds\n", cpu_time_used);

  start=clock();
  insertion_sort(A10,100000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Array size: 100000 time: %f seconds\n", cpu_time_used);

//random_array2
  random_array(A2,20000);
  random_array(A4,40000);
  random_array(A10,100000);
  
  start=clock();
  insertion_sort(A2,20000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Insertion Sort, random array2\n");
  printf("Array size: 20000 time: %f seconds\n", cpu_time_used);
  
  start=clock();
  insertion_sort(A4,40000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Array size: 40000 time: %f seconds\n", cpu_time_used);

  start=clock();
  insertion_sort(A10,100000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Array size: 100000 time: %f seconds\n", cpu_time_used);

//random_array3
  random_array(A2,20000);
  random_array(A4,40000);
  random_array(A10,100000);
  
  start=clock();
  insertion_sort(A2,20000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Insertion Sort, random array3\n");
  printf("Array size: 20000 time: %f seconds\n", cpu_time_used);
  
  start=clock();
  insertion_sort(A4,40000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Array size: 40000 time: %f seconds\n", cpu_time_used);

  start=clock();
  insertion_sort(A10,100000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Array size: 100000 time: %f seconds\n", cpu_time_used);

///////////// Bubble Sort /////////////
//sorted_array
  sorted_array(A2,20000);
  sorted_array(A4,40000);
  sorted_array(A10,100000);
  
  start=clock();
  bubble_sort(A2,20000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Bubble Sort, sorted array\n");
  printf("Array size: 20000 time: %f seconds\n", cpu_time_used);
  
  start=clock();
  bubble_sort(A4,40000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Array size: 40000 time: %f seconds\n", cpu_time_used);

  start=clock();
  bubble_sort(A10,100000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Array size: 100000 time: %f seconds\n", cpu_time_used);

//reverse_array
  reverse_array(A2,20000);
  reverse_array(A4,40000);
  reverse_array(A10,100000);
  
  start=clock();
  bubble_sort(A2,20000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Bubble Sort, reverse array\n");
  printf("Array size: 20000 time: %f seconds\n", cpu_time_used);
  
  start=clock();
  bubble_sort(A4,40000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Array size: 40000 time: %f seconds\n", cpu_time_used);

  start=clock();
  bubble_sort(A10,100000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Array size: 100000 time: %f seconds\n", cpu_time_used);

//random_array1
  random_array(A2,20000);
  random_array(A4,40000);
  random_array(A10,100000);
  
  start=clock();
  bubble_sort(A2,20000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Bubble Sort, random array1\n");
  printf("Array size: 20000 time: %f seconds\n", cpu_time_used);
  
  start=clock();
  bubble_sort(A4,40000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Array size: 40000 time: %f seconds\n", cpu_time_used);

  start=clock();
  bubble_sort(A10,100000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Array size: 100000 time: %f seconds\n", cpu_time_used);

//random_array2
  random_array(A2,20000);
  random_array(A4,40000);
  random_array(A10,100000);
  
  start=clock();
  bubble_sort(A2,20000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Bubble Sort, random array2\n");
  printf("Array size: 20000 time: %f seconds\n", cpu_time_used);
  
  start=clock();
  bubble_sort(A4,40000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Array size: 40000 time: %f seconds\n", cpu_time_used);

  start=clock();
  bubble_sort(A10,100000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Array size: 100000 time: %f seconds\n", cpu_time_used);

//random_array3
  random_array(A2,20000);
  random_array(A4,40000);
  random_array(A10,100000);
  
  start=clock();
  bubble_sort(A2,20000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Bubble Sort, random array3\n");
  printf("Array size: 20000 time: %f seconds\n", cpu_time_used);
  
  start=clock();
  bubble_sort(A4,40000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Array size: 40000 time: %f seconds\n", cpu_time_used);

  start=clock();
  bubble_sort(A10,100000);
  end=clock();
  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("Array size: 100000 time: %f seconds\n", cpu_time_used);


return 0;
}









Answer:
a) Insertion sort performs better for all sorted, reverse sorted and random array.
b) For insertion sort, the function class to sort sorted array is O(N); the function class to sort reverse array is O(N^2); the function class to sort random array is O(N^2).For the Bubble sort, the fuction class to sort sorted array is O(N^2); the function class to sort reverse array is O(N^2); the function class to sort random array is O(N^2).



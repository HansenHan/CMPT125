#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int partition(int arr[], int first, int last) { 
    int mid = first; 
    int pivot = arr[first]; 
    for (int sweep = first+1; sweep <= last; sweep++) { 
        // Assertion:  . . . 
        if (arr[sweep] < pivot) { 
            int tmp = arr[sweep]; 
            arr[sweep] = arr[mid+1]; 
            arr[mid+1] = tmp; 
            mid++; 
        } 
    } 
    // Post: for index<=mid, arr[index]<arr[first]; for index>mid, arr[index]>arr[first]
    arr[first] = arr[mid]; 
    arr[mid] = pivot; 
    return mid; 
} 

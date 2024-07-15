#include<stdio.h>

void merge(int arr[],int begin,int mid,int end);
void mergeSort(int arr[],int begin,int end);




int main()
{

    int arr[] = {1,2,3,2,4,2,5,2,6};
    int b = 0,e=9;

    mergeSort(arr,b,e);
    int i = 0;
    for (i = 0; i < e; i++)
    {
        printf("%d ",arr[i]);
    }
    

    return 0;
}


void merge(int arr[], int begin, int mid, int end) {
    int leftSize = mid - begin + 1;   // Size of left subarray
    int rightSize = end - mid;        // Size of right subarray

    // Create temporary arrays
    int left[leftSize];
    int right[rightSize];

    // Copy data to temporary arrays left[] and right[]
    for (int i = 0; i < leftSize; i++) {
        left[i] = arr[begin + i];
    }
    for (int j = 0; j < rightSize; j++) {
        right[j] = arr[mid + 1 + j];
    }

    // Merge the temporary arrays back into arr[begin...end]
    int i = 0;     // Initial index for left subarray
    int j = 0;     // Initial index for right subarray
    int k = begin; // Initial index for merged subarray

    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of left[], if any
    while (i < leftSize) {
        arr[k] = left[i];
        i++;
        k++;
    }

    // Copy the remaining elements of right[], if any
    while (j < rightSize) {
        arr[k] = right[j];
        j++;
        k++;
    }
}


void mergeSort(int arr[], int begin, int end) {
    if (begin < end) {
        int mid = begin + (end - begin) / 2;
        //printf("Current Mid is = %d\n", arr[mid]);
        mergeSort(arr, begin, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr,begin,mid,end);
       
    }
}
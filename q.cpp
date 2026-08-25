#include <iostream>
using namespace std;

int partition(int arr[], int start , int end ){
    int pivot = arr[start];
    int count = 0;
    for( int i = start+1; i<=end; i++){
        if(arr[i]<= pivot){
            count++;
        }
    }
    // place pivot at it's place
    
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    //left and right wala part smbhal lete h 
    int i = start, j = end;

    while(i < pivotIndex && j > pivotIndex) {

        while(arr[i] <= pivot) 
        {
            i++;
        }

        while(arr[j] > pivot) {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }

    }
     return pivotIndex;

}



void quicksort(int arr[], int start , int end ){
    // we will use the base case 
    if(start>= end){
        return;

    } 
    // partition case 
    int p= partition(arr , start , end);

    // left and right case partition 

    quicksort(arr, start, p-1);   // L

    quicksort(arr, p+1, end);     // R 
}

int main() {

    int arr[10]= {2,5,7,4,9,3,5,8,9,12};
    int n = 10;
    quicksort(arr, 0 , n-1);
    for(int i =0; i<n; i++){
     cout<<arr[i]<<"" ;

    }
    cout<<endl;

    return 0;
}
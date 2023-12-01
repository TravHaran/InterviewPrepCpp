#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(int array[], int size){
    for(int i = size - 1; i > 0; i--){
        for(int j = 0; j < i; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void selectionSort(int array[], int size){
    int minIndex;
    for(int i = 0; i < size; i++){
        minIndex = i;
        for(int j = i+1; j < size; j++){
            if(array[minIndex] > array[j])
                minIndex = j;
        }
        if(minIndex!=i){
            int temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
    }
}

void insertionSort(int array[], int size) {
    for(int i = 1; i < size; i++){
        int temp = array[i];
        int j = i - 1;
        while(j > -1 && temp < array[j]){
            array[j+1] = array[j];
            array[j] = temp;
            j--;
        }
    }
}

int main(){
    int arr[] = {6, 4, 2, 5, 1, 3};
    int size = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, size);
    
    for(auto val : arr){
        cout<<val<<" ";
    }

    cout<<endl;

    int arr2[] = {4, 2, 6, 5, 1, 3};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    selectionSort(arr2, size2);

    for(auto val : arr2){
        cout<<val<<" ";
    }

    cout<<endl;

    int arr3[] = {4, 2, 6, 5, 1, 3};
    int size3 = sizeof(arr3)/sizeof(arr3[0]);

    insertionSort(arr3, size3);

    for(auto val : arr3){
        cout<<val<<" ";
    }






}
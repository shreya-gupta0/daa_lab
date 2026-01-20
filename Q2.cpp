#include <iostream>
using namespace std;


void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;  
    int n2 = right - mid;     
    
    
    int L[n1], R[n2];
    
    
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    
    
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    
    while (i < n1) {
        arr[k] = L[i];
        i++; k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++; k++;
    }
}


void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        
        
        mergeSort(arr, left, mid);
        
        mergeSort(arr, mid + 1, right);
        
        merge(arr, left, mid, right);
    }
}

int main() {
    
    int arr1[] = {12, 11, 13, 5, 6, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    
    cout << "Original Array 1: ";
    for (int i = 0; i < size1; i++) cout << arr1[i] << " ";
    cout << endl;
    
    mergeSort(arr1, 0, size1 - 1);
    
    cout << "Sorted Array 1:   ";
    for (int i = 0; i < size1; i++) cout << arr1[i] << " ";
    cout << endl << endl;
    
    
    int arr2[] = {38, 27, 43, 3, 9, 82, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    cout << "Original Array 2: ";
    for (int i = 0; i < size2; i++) cout << arr2[i] << " ";
    cout << endl;
    
    mergeSort(arr2, 0, size2 - 1);
    
    cout << "Sorted Array 2:   ";
    for (int i = 0; i < size2; i++) cout << arr2[i] << " ";
    cout << endl;
    
    return 0;
}

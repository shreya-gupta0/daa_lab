#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0;          
    int right = size - 1;  
    
    while (left <= right) {
        int mid = left + (right - left) / 2; 
        
        cout << "Checking index " << mid << " with value " << arr[mid] << endl;
        
        if (arr[mid] == target) {
            return mid;  
        }
        else if (arr[mid] < target) {
            left = mid + 1;  
        }
        else {
            right = mid - 1; 
        }
    }
    return -1;  
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;
    
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    
    int result = binarySearch(arr, size, target);
    
    if (result != -1) {
        cout << "\nTarget " << target << " found at index " << result << endl;
    } else {
        cout << "\nTarget " << target << " not found in array" << endl;
    }
    
    return 0;
}

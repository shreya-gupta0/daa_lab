#include <iostream>
using namespace std;

int maxSubArraySum(int arr[], int size) {
    int max_so_far = arr[0];    
    int max_ending_here = arr[0];
    
    for (int i = 1; i < size; i++) {
        
        max_ending_here = max(arr[i], max_ending_here + arr[i]);
        
       
        max_so_far = max(max_so_far, max_ending_here);
    }
    
    return max_so_far;
}

int main() {
    int arr[] = {-2, -5, 6, -2, -3, 1, 5, -6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int result = maxSubArraySum(arr, n);
    cout << "Maximum Subarray Sum: " << result << endl;
    
    
    cout << "Subarray: [6, -2, -3, 1, 5]" << endl;
    
    return 0;
}

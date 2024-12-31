#include <iostream>
using namespace std;

// Function to find the maximum in an array
int findMax(int arr[], int low, int high) {
    // Base case: if there's only one element
    if (low == high) {
        return arr[low];
    }

    // Find the middle of the array
    int mid = (low + high) / 2;

    // Recursively find the maximum in the left half
    int leftMax = findMax(arr, low, mid);

    // Recursively find the maximum in the right half
    int rightMax = findMax(arr, mid + 1, high);

    // Return the greater of the two
    return (leftMax > rightMax) ? leftMax : rightMax;
}

// Function to find the minimum in an array
int findMin(int arr[], int low, int high) {
    // Base case: if there's only one element
    if (low == high) {
        return arr[low];
    }

    // Find the middle of the array
    int mid = (low + high) / 2;

    // Recursively find the minimum in the left half
    int leftMin = findMin(arr, low, mid);

    // Recursively find the minimum in the right half
    int rightMin = findMin(arr, mid + 1, high);

    // Return the smaller of the two
    return (leftMin < rightMin) ? leftMin : rightMin;
}

int main() {
    int arr[] = {12, 5, 9, 1, 15, 8, 7, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the function to find the max
    int maxVal = findMax(arr, 0, n - 1);

    // Call the function to find the min
    int minVal = findMin(arr, 0, n - 1);

    // Output the results
    cout << "Minimum: " << minVal << endl;
    cout << "Maximum: " << maxVal << endl;

    return 0;
}

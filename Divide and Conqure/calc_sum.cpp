#include <iostream>
using namespace std;

// Function to calculate the sum of an array using divide-and-conquer
int calc_sum(int arr[], int start, int end) {
    // Base case: If there is only one element
    if (start == end) {
        return arr[start];
    }

    // Base case: If the array is empty
    if (start > end) {
        return 0;
    }

    // Divide the range into two halves
    int mid = (start + end) / 2;

    // Recursively calculate the sum of the left and right halves
    int left_sum = calc_sum(arr, start, mid);
    int right_sum = calc_sum(arr, mid + 1, end);

    // Combine the results
    return left_sum + right_sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = calc_sum(arr, 0, n - 1);
    cout << "Sum of the array is: " << result << endl;

    return 0;
}

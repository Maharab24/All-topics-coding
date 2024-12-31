#include <iostream>
using namespace std;

// Function to calculate the sum of even numbers in an array using divide-and-conquer
int calc_sum(int arr[], int start, int end) {
    // Base case: If there's only one element
    if (start == end) {
        return (arr[start] % 2 == 0) ? arr[start] : 0; // Return the number if it's even, else return 0
    }

    // Base case: If the range is invalid
    if (start > end) {
        return 0;
    }

    // Divide the range into two halves
    int mid = (start + end) / 2;

    // Recursively calculate the sum of even numbers in the left and right halves
    int left_sum = calc_sum(arr, start, mid);
    int right_sum = calc_sum(arr, mid + 1, end);

    // Combine the results
    return left_sum + right_sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = calc_sum(arr, 0, n - 1);
    cout << "Sum of the even numbers in the array is: " << result << endl;

    return 0;
}

#include <iostream>
using namespace std;

// Function to calculate X^Y using divide-and-conquer
int power(int x, int y) {
    // Base case: Any number raised to the power 0 is 1
    if (y == 0) return 1;

    // Divide: Calculate power for half of y
    int halfPower = power(x, y / 2);

    // Conquer: If y is even, the result is halfPower * halfPower
    if (y % 2 == 0) {
        return halfPower * halfPower;
    }
    // If y is odd, multiply one more x to the result
    else {
        return x * halfPower * halfPower;
    }
}

int main() {
    int x, y;

    // Input X and Y
    cout << "Enter X and Y: ";
    cin >> x >> y;

    // Calculate and display the result
    cout << "Result of " << x << "^" << y << " is: " << power(x, y) << endl;

    return 0;
}

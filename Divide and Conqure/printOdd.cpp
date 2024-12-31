#include <iostream>
using namespace std;


void printOdd(int start, int end) {
    if (start > end) return;
    if (start % 2 != 0) {
        cout << start << " ";
    }

    printOdd(start + 1, end);
}

int main() {
    int start = 1, end = 20;

    cout << "Odd numbers between " << start << " and " << end << " are:\n";
    printOdd(start, end);

    return 0;
}

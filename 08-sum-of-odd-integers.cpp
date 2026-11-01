#include <iostream>

using namespace std;

int main() {

    // Calculate the sum of odd integers from 1 to 15

    int sum {0};

    for (int i{1}; i <= 15; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    cout << "Sum of odd integers: " << sum << endl;

    return 0;
}
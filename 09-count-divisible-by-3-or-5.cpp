/*
**Count Integers Divisible by 3 or 5**

Write a program that uses a range-based for loop to iterate through a vector of integers and count how many elements are evenly divisible by either 3 or 5.

Store the final result in an integer variable named `count`.
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};

    int count {0};

    for (auto divizibil : vec) {
        if (divizibil % 3 == 0 || divizibil % 5 == 0) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
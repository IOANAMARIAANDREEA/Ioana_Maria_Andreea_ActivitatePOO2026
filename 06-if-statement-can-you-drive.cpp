/*
    If Statement - Can you Drive?

    Assume that anyone 16 or older can legally drive.

    If the person can legally drive, display:
    "Yes - you can drive!"

    If the person cannot legally drive, display nothing.

    The variable age is provided for you.
    You do NOT need to declare age.

    Your task:
    Write a simple if statement to solve the problem.
    */

#include <iostream>

using namespace std;

int main() {
    cout << "Anyone 16 or older can legally drive." << endl;
    cout << "Please enter your age: ";
    int age{};
    cin >> age;

    if (age >= 16) 
       cout << "Yes, you can drive!" << endl;
    if (age < 16)
       cout << "No, you can't drive!" << endl;
       

    return 0;
}
/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Daniel Guzman
 */

#include <iostream>
using namespace std;
#include "number.cpp"

int main() {
    int num;

    cout << "Enter an integer ";
    cin >> num;

    if(isEven(num) == 1)
        cout << "The value " << num << " is an even number.";
    else
        cout << "The value " << num << " is an odd number.";

    return 0;
}

// Copyright (c) Jessah All rights reserved.
//
// Name Jessah
// 10/13/2022
// This program asks the user for a number and it will
// display if the num is negative,positive,or zero

#include <iostream>

int main() {
// variables
    float integer;

// get integer from user
    std::cout << "Enter an integer: ";
    std::cin >> integer;
    std::cout << "" << std::endl;

// check what integer was entered

// display when number is negative

    if (integer < 0) {
        std::cout << "That is a negative number";

        // display when number is positive
    } else if (integer >= 1) {
        std::cout << "That is a positive number";

        // display when number is zero
    } else if (integer == 0) {
        std::cout << "That is a null number";

        // display when user enters something different
    } else {
        std::cout << "Error, that's not an integer";}
}


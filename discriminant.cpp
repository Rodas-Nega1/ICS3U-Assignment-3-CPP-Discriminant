// Copyright (c) 2021 Rodas Nega All rights reserved
//
// Created by: Rodas Nega
// Created on: Sept 2021
// this program asks the user for three coefficients and finds the discriminant

#include <iostream>
#include <cmath>


int main() {
    int a;
    int b;
    int c;
    int discriminant;

    // this function calculates the discriminant and
    // if there are any real solutions

    // input
    std::cout << "Enter the coefficent for a: ";
    std::cin >> a;

    std::cout << "Enter the coefficient for b: ";
    std::cin >> b;

    std::cout << "Enter the coefficient for c: ";
    std::cin >> c;
    std::cout << std::endl;

    // process & output
    discriminant = pow(b, 2) - 4 * a * c;

    if (discriminant > 0) {
        std::cout << "The discriminant equals " << discriminant <<
        ", thus there are two real solutions." << std::endl;
    } else if (discriminant == 0) {
         std::cout << "The discriminant equals " << discriminant <<
        ", thus there is one real solution." << std::endl;
    } else {
         std::cout << "The discriminant equals " << discriminant <<
        ", thus there are no real solutions." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}

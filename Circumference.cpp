// Copyright (c) 2021 st . Mother Teresa HS ALL rights reserved.
//
// Created by Seti Ngabo
// Created on: Sept 2021
// This program calculates the circumference of a circle
// with user input

#include <iostream>

int main() {
    // this function calculates circumference of a circle
    const double TAU = 6.28;
    int radius;
    double circumference;

    // input
    std::cout << "Enter radius of the circle (mm): ";
    std::cin >> radius;

    // process
    circumference = TAU*radius;

    // output
    std::cout << "" << std::endl;
    std::cout << "circumference is " << circumference << "mm" << std::endl;
}

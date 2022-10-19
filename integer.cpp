// Copyright(c) 2022 Marshall Demars All rights reserved.
//
// Created by: Marshall Demars
// Created on: October 2022
// This program random number guess with user input

#include <iostream>

int main() {
    // creating variables
    int userInteger;


    // input
    std::cout << "Enter any number: ";
    std::cin >> userInteger;

    // process and output
    if (userInteger < 0) {
        std::cout << "\nYou chose a positive number!";
    } else if (userInteger > 0) {
        std::cout << "\nYou chose a negative number!";
    } else if (userInteger == 0) {
        std::cout << "\nYou chose a neutral number!";
    } else {
        std::cout << "\nI don't know what your number is.";
    }
        std::cout << "\nDone.";

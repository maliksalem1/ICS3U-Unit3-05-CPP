// Copyright (c) 2022 maliksalem1
//
// Created by: maliksalem1
// Created on: Oct 2022
// This program finds the month for numbers between 1-12

#include <iostream>

int main() {
    // This function finds the month that represents your number
    int number;

    // Input
    std::cout << "Enter the number of a month(ex: 3 for March): ";
    std::cin >> number;
    std::cout << std::endl;

    // Process and ouput
    switch (number) {
        case 1:
            std::cout << "January" << std::endl;
            break;
        case 2:
            std::cout << "February" << std::endl;
            break;
        case 3:
            std::cout << "March" << std::endl;
            break;
        case 4:
            std::cout << "April" << std::endl;
            break;
        case 5:
            std::cout << "May" << std::endl;
            break;
        case 6:
            std::cout << "June" << std::endl;
            break;
        case 7:
            std::cout << "July" << std::endl;
            break;
        case 8:
            std::cout << "August" << std::endl;
            break;
        case 9:
            std::cout << "September" << std::endl;
            break;
        case 10:
            std::cout << "October" << std::endl;
            break;
        case 11:
            std::cout << "November" << std::endl;
            break;
        case 12:
            std::cout << "December" << std::endl;
            break;
        default:
            std::cout << "Invalid" << std::endl;
    }

    std::cout << "\nDone.";
}

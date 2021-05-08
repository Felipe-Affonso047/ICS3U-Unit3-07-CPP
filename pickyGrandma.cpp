// Copyright (c) 2021 Felipe Affonso All rights reserved
//
// Created by: Felipe Affonso
// Created on: April 2021
// This program simulates a grandma that wants to know if you deserve to date
// her grandchild

#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>

int main() {
    std::string rich;
    std::string good_looking;

    std::cout << "For you to date my grandchild I have to " <<
    "ask you a couple of questions." << std::endl;

    std::cout << "Are you rich? (respond with an yes or no):";
    std::cin >> rich;

    std::cout << "Are you really good looking? (respond with an yes or no):";
    std::cin >> good_looking;

    if ((rich != "yes" && rich != "no") || (good_looking != "yes" &&
    good_looking != "no")) {
            std::cout
            << "\nThis input is invalid, please, insert 'yes' or 'no'."
            << std::endl;
    } else if (rich == "yes" || good_looking == "yes") {
        std::cout << "\nYou can date my grandchild!" << std::endl;
    } else if (rich == "no" && good_looking == "no") {
        std::cout << "\nYou are not good enough to date my grandchild!"
        << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}

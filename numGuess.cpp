// Copyright (c) 2023 Val I All rights reserved.
//
// Created by: Val
// Created on: Oct, 15, 2023
// This program asks the user to guess a number
// then lets them know if they're right or wrong.

#include <iostream>
int userGuess;
const int CORRECT_GUESS = 7;

int main() {
    // input - getting the user guess
    std::cout << "What is your guess?\n";
    std::cin >> userGuess;

    // process - Check if guess is correct
    if (userGuess == CORRECT_GUESS) {
        // output - answer
        std::cout << "That's Correct!!!";
    } else {
        std::cout << "That's Incorrect!!!";
    }
}

// Copyright (c) 2022 Noah Ouellette All rights reserved.
//
// Created by: Noah Ouellette
// Created on: Feb. 1, 2022
// This program find the average of numbers in a 2 dimensional array
#include <time.h>
#include <iostream>
#include <iomanip>
#include <random>
#include <array>

int const MIN_NUM = 1;
int const MAX_NUM = 50;



template <int rows, int cols>
float calcAverage(int (&passedIn2DList)[rows][cols]) {
    // This function calculates the average of
    // all of the numbers in the 2d array

    float total = 0;
    for (size_t rowElement = 0; rowElement < rows; ++rowElement) {
        for (size_t columnElement = 0; columnElement < cols; ++columnElement)
            total += passedIn2DList[rowElement][columnElement];
    }
    // Calculate the average
    float average = total / (rows * cols);
    // Return the average
    return average;
}


int main() {
    // This function creates and fills the 2d array
    int randomNumber = 0;
    float averageFinal = 0;
    const int rows = 5;
    const int columns = 3;
    int intArray[rows][columns];
    srand(time(NULL));
    // Use a loop to fill the array with random numbers
    for (int rowElement = 0; rowElement < rows; rowElement++) {
        for (int columnElement = 0; columnElement < columns; columnElement++) {
            randomNumber = (rand() % MAX_NUM) + MIN_NUM;
            intArray[rowElement][columnElement] = randomNumber;
            std::cout << randomNumber << ", ";
        }
        std::cout << std::endl;
    }
    // Call a function to calclate the average
    averageFinal = calcAverage(intArray);
    // Display the final average
    std::cout << "The average of all the numbers is: " << averageFinal;
    std::cout << std::endl;
}

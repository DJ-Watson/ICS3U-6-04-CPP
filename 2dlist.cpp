// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Dec 2019
// This program uses a 2D array

#include <iostream>
#include <ctime>


template <int rows, int cols>
int sumOfNumbers(int (&passedIn2DList)[rows][cols]) {
    // this function adds up all the elements in  a 2D array

    int total = 0;
    int final = 0;

    for (size_t rowN = 0; rowN < rows; ++rowN) {
        for (size_t columnN = 0; columnN < cols; ++columnN)
            total += passedIn2DList[rowN][columnN];
    }
    final = total/(rows*cols);

    return final;
}


int main() {
    // this function uses a 2D array

    int singleNumber = 0;
    int sum = 0;
    const int rows = 5;
    const int columns = 5;
    int a2DArray[rows][columns];

    srand(time(NULL));

    for (int rowElement = 0; rowElement < rows; rowElement++) {
        for (int columnElement = 0; columnElement < columns; columnElement++) {
            singleNumber = (rand() % 50) + 1;
            a2DArray[rowElement][columnElement] = singleNumber;
            std::cout << singleNumber << ", ";
        }
        std::cout << std::endl;
    }

    sum = sumOfNumbers(a2DArray);
    std::cout << "AVERAGE: " << sum << std::endl;
}

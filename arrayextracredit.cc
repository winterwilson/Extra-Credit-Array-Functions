/*
 *        File: arrays.cc
 *      Author: Winter Wilson
 *        Date: March 18, 2019
 * Description: Array example extra credit version
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes

void printArray(const int numbers[], int size);
int countEven(const int numbers[], int size);
int numbersTotal(const int numbers[], int size);

int main(int argc, char const *argv[]) {

    int numberOfEvens;
    int totalOfArray;
    int numbers[8] = {3, 5, 19, 6, 7, 6, 55};
    int size = 7;
    printArray(numbers, size);

    cout << numbers[0] << endl;

    numberOfEvens = countEven(numbers, size);
    cout << "Number of even numbers in the array: " << numberOfEvens << endl;

    totalOfArray = numbersTotal(numbers, size);
    cout << "Total of all of the values of the array numbers: " << totalOfArray << endl;

    return 0;
}// main

void printArray(const int numbers[], int size) {
    for(int i = 0; i < size; i++)
    {
        cout << numbers[i] << endl;
    }
}

int countEven(const int numbers[], int size){
    //count the number of even numbers within the numbers array
    int evencount = 0;
    for (int i = 0; i < size; i++){
        if ((numbers[i] % 2) == 0){
            evencount++;
        }
    }
    return evencount;
}

int numbersTotal(const int numbers[], int size){
    //add the numbers in the array 
    int total = 0;
    for (int i = 0; i < size; i++){
        total += numbers[i];
        }
    return total;
    }




/*
 * Extra Credit:
 *     Add the following two functions:
 *     1. A function called countEven that counts and returns the number
 *        of evan values in the array numbers.
 *     2. A function to find and return the total of all the values in the array numbers.
 *
 *     Test your functions by calling them in the main function. These functions should work for
 *     any array size.
 *
 * To submit the extra credit, you must create a public repository on GitHub and tag me (@nasseef) when
 * you are done.  This extra credit is due at 11:59 PM Monday 3/18/2019.
 *
 */
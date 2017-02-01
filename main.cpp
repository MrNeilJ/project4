/**********************************************************
 * Author: Neil Johnson
 *
 * Date: 1.25.2017
 *
 * Description: This is a file used to test all three
 * functions in assignment 4.  In here I referenced all
 * three header files that I created that were linked to
 * their respective source files.  The tests done below
 * were the examples given by the instructor.
 * ********************************************************/
#include<iostream>

// Header Files Needed for functions
#include "fallDistance.h"
#include "hailstone.h"
#include "smallSort.h"


int main()
{
    // Test for fallDistance
    std::cout << "Results for fallDistance: ";
    std::cout << fallDistance(3.0) << std::endl;

    // Test for smallSort
    int a = -50;
    int b = 12;
    int c = 19;

    smallSort(a, b, c);
    std::cout << "Results for smallSort: ";
    std::cout << a << ", " << b << ", " << c << std::endl;

    // Test for hailstone
    std::cout << "Results for hailstone: ";
    std::cout << hailstone(2) << std::endl;

    return 0;
}


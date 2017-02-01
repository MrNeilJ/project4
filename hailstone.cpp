/**********************************************************
 * Author: Neil Johnson
 *
 * Date: 1.25.2017
 *
 * Description: This program takes in a positive integer as
 * the parameter.  If the integer is positive it will be
 * divided by two, if the integer is negative it will be
 * multiplied by 3 and plus 1.  The program will go step
 * by step until the value is 1. It will then return the
 * amount of steps it took to get to 1.
 * EX. 3, 10, 5, 16, 8, 4, 2, 1 = 7 steps
 * ********************************************************/

#include<iostream>

int hailstone(int start)
{
    // Define a step counter for the function
    int steps = 0;

    // Keep going until you have reached 1, make sure they used a positive number
    while(start != 1 && start > 0)
    {
        // Check to see if the value is positive, if so divide by 2
        if (start % 2 == 0)
        {
            start /= 2;

            // Keep track of the steps it takes!
            steps++;
        }
            // Otherwise the value is odd, so multiply by 3 and add 1
        else
        {
            start = (start * 3) + 1;

            // Keep track of the steps it takes!
            steps++;
        }
    }
    // IF they didn't, let them know that it did not work properly.
    if (start < 1) {
        std::cout << "The number you entered is not valid, try again. Steps not counted. ";
    }
    return steps;
}





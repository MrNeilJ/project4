/**********************************************************
 * Author: Neil Johnson
 *
 * Date: 1.25.2017
 *
 * Description: This function takes three int parameters
 * and sorts their values into ascending order, so that the
 * first parameter now has the lowest value, second parameter
 * has the middle values, and the third parameter has the
 * highest value.
 * ********************************************************/

void smallSort(int &a, int &b, int &c)  // Must call by reference rather than by value
{
    // Holding container for moving values
    int temp;

    // Check to see if A > B, if so flip the values so the smallest is furthest left
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    // Then compare if the updated A value is greater than C, if so switch values so smallest is left
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    // Compare the remaining two values to see which is larger, flip acording so smallest number is left
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
}






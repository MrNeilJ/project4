/**********************************************************
 * Author: Neil Johnson
 *
 * Date: 1.25.2017
 *
 * Description: This function takes in user input for time
 * an object has been falling and returns the distance in
 * meters about how far the object has fallen.
 * ********************************************************/

#include<cmath>

double fallDistance(double seconds)
{
    // Acceleration of gravity
    double  g = 9.8;

    // Formula to calculate distance d = (1.0/2.0) * g * t^2
    double d = (1.0/2.0) * g * (pow(seconds, 2.0));

    // Return the value to the user
    return d;
}





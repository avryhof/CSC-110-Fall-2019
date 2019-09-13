/**********************************************************************
* Program Name: Lab03_Vryhof
* Author: Amos Vryhof
* Date: 2019-09-12
* Course/Section: CSC-110
* Program Description:
*     This program will calculate the area of a triangle.
*     It will display the area.
*     First, the program will prompt the user for the base and the height of the triangle.
*     Then the program will compute the area of the
*     triangle using the base and the height . Lastly, the program will display the area of the triangle.
*
* Input:
*     Base of Triangle: float triBase
*     Height of Triangle: float triHeight
*
* Output:
*     Area of Triangle: float triArea
*
* Formulas:
*     triArea = (triBase * triHeight) / 2
**********************************************************************/
/**********************************************************************
*
* Pseudocode:
*     Initial Algorithm
*     -------
*         1. Get base of triangle
*         2. Get height of triangle
*         3. Calculate the area by multiplying the base by the height and dividing this product by 2.
*         4. Display the area of the triangle.
*
*     Refined Algorithm
*     -------
*         1. Get base of triangle:
*             o Input triBase.
*         2. Get height of triangle:
*             o Input triHeight.
*         3. Calculate the area of the triangle:
*             o triArea = (triBase * triHeight) / 2
*         4. Display the area.
*             o Format output to display 2 decimal values.
 **********************************************************************/

/************************** Compiler Directives **********************/
#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

/*********************** Global Data Declarations ********************/
/**************************** main Function **************************/

float floatInput(string prompt) {
    /*****************************************************************
     * Prompt the user, and retrieve a float value.
     */
    float inputValue;

    cout << prompt;
    cin >> inputValue;

    return inputValue;
}

int main() {
    // Local variables
    float triBase;
    float triHeight;
    float triArea;

    cout << "Compute the area of a triangle.\n";
    cout << "Please enter the requested measurements.\n";

    // Get the Base measurement of the triangle
    triBase = floatInput("Base: ");

    // Get the height measurement of the triangle
    triHeight = floatInput("Height: ");

    // Compute the area of the triangle
    triArea = (triBase * triHeight) / 2;

    cout << "The area of the triangle is " << triArea << ".\n";

    //Pause to read output
    system("pause");

    //Indicate to OS successful termination of program
    return 0;
}   //End main 

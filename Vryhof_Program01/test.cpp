/**********************************************************************
* Program Name: Vryhof_Program01
* Author: Amos Vryhof
* Date: 2019-09-14
* Course/Section: CSC-110
* Program Description:
*     This program will calculate the arm, neck, hat, and shoe sizes are determined based on the waistline measurement,
*     and weight provided by the user, then display them in a formatted table.
*
* Input:
*     Waistline measurement: integer waistLineInches
*     Weight: float weightPounds
*
* Output:
*     arm, neck, hat, and shoe size formatted to two decimals
*     formatted into a table with
*     *    Centered Headers
*     *    Left Aligned label columns
*     *    Right aligned value columns
*
* Formulas:
*    neckSize = (weightPounds / waistLineInches) * 3
*    hatSize = neckSize / 2.125
*    shoeSize = (waistLineInches / weightPounds) * 50.0
*    armLength = waistLine / 2.0
**********************************************************************/
/**********************************************************************
*
* Pseudocode:
*     Initial Algorithm
*     -------
*         1. Get the Waist Line measurement as an Integer
*         2. Get the weight as a float
*         3. Calculate arm, neck, hat, and shoe size
*         4. Display the results table
*
*     Refined Algorithm
*     -------
*         1. Get the Waist Line measurement:
*             o Input waistLineInches
*         2. Get the weight:
*             o Input weightPounds
*         3. Calculate the required values:
*             o neckSize = (weightPounds / waistLineInches) * 3
*             o hatSize = neckSize / 2.125
*             o shoeSize = (waistLineInches / weightPounds) * 50.0
*             o armLength = waistLine / 2.0
*         4. Display the results table:
*             o Format output to display 2 decimal values.
 *            o Use functionalty from iomanip to format the output
 **********************************************************************/

/************************** Compiler Directives **********************/
#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

/*********************** Global Data Declarations ********************/
/**************************** main Function **************************/
int main() {
    
    
    //Pause to read output
    system("pause");

    //Indicate to OS successful termination of program
    return 0;
}   //End main 

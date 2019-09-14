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

float floatInput(string prompt) {
    /*****************************************************************
     * Prompt the user, and retrieve a float value.
     */
    float inputValue;

    cout << prompt;
    cin >> inputValue;

    return inputValue;
}

int integerInput(string prompt) {
    /*****************************************************************
     * Prompt the user, and retrieve an integer value.
     */
    int inputValue;

    cout << prompt;
    cin >> inputValue;

    return inputValue;
}

void repeatString(string value, int repeatAmount) {
	int i;
	
    for(i = 0; i <= repeatAmount; i++) {
        cout << value;
    }
    
    return;
}

void centerString(string value, int columnWidth) {
    int stringWidth;
    int paddingWidth;
    int outputWidth;

    stringWidth = value.size();
    paddingWidth = columnWidth / 2;

	repeatString(" ", paddingWidth - (stringWidth / 2));
	cout << value;
	repeatString(" ", paddingWidth - (stringWidth / 2));
    
    return;
}

void printRow(int columnWidth, string label, float value) {
	cout << setw(columnWidth) << left << label << "  " << setw(columnWidth) << right << fixed << showpoint << setprecision(2) << value << endl;
	return;
}


int main() {
    // Local variable
    // Input
    int waistLineInches;
    float weightPounds;

    // Output
    float neckSize;
    float hatSize;
    float shoeSize;
    float armLength;

    // For table formatting purposes
    int columnWidth = 15;
    int cellMargin = 2;

    cout << "Welcome to the Tailor's Assistant. - Helping high-tech tailors since 1856!\n\n";
    cout << "This program can help you calculate arm, neck, hat, and shoe sizes with two easy inputs.\n\n";

    // Get the waist Line measurement
    waistLineInches = integerInput("Waist Line in whole inches: ");

    // Get the weight
    weightPounds = floatInput("Weight in pounds: ");

    // Calculate Neck Size
    neckSize = (weightPounds / waistLineInches) * 3;
    // Calculate hat size
    hatSize = neckSize / 2.125;
    // Calculate shoe size
    shoeSize = (waistLineInches / weightPounds) * 50.0;
    // Calculate arm length
    armLength = waistLineInches / 2.0;
    
    cout << "\n";
    centerString("Article", columnWidth);
    cout << "  ";
    centerString("Size", columnWidth);
    cout << "\n";
    repeatString("-", columnWidth);
    repeatString(" ", cellMargin);
	repeatString("-", columnWidth);
	cout << "\n";
	printRow(columnWidth, "Neck", neckSize);
	printRow(columnWidth, "Hat", hatSize);
	printRow(columnWidth, "Shoe", shoeSize);
	printRow(columnWidth, "Arm Length", armLength);
	cout << "\n\n";
    //Pause to read output
    system("pause");

    //Indicate to OS successful termination of program
    return 0;
}   //End main 

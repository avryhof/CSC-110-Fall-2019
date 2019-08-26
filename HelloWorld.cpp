/**********************************************************************
* Program Name:   Example 01
* Author:         Pamela J. McCarthy
* Date:           June 2, 2012
* Course/Section: CSC 110
* Program Description:
*    This program will display the message "Hello World"
**********************************************************************/

/************************** Compiler Directives **********************/

#include <cstdlib>
#include <iostream>

using namespace std;

/*********************** Global Data Declarations ********************/

//None in this program.

/**********************************************************************
* Function Name:  main
* Author:         Pamela J. McCarthy
* Date:           June 2, 2012
* Function Description:
*    This program will display the message "Hello World."
*
* Pseudocode:
*    Initial Algorithm
*    -------
*        Display message
*    Refined Algorithm
*    -------
*        Clear screen
*        Display "Hello World"
**********************************************************************/

int main()
{
    //Local variables
    //None

    /*************** Begin main Function Executables *****************/

    //Clear the screen
    system("cls");

    //Display message
    cout << "Hello World" << endl;
    cout << "\n\n";

    //Pause to read output
    system ("pause");

    //Indicate to OS successful termination of program
    return 0;

}   //End main

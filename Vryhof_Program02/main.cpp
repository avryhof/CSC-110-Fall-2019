/**********************************************************************
* Program Name: Program02_Vryhof
* Author: Amos Vryhof
* Date: 2019-09-29
* Course/Section: CSC-110
* Program Description:
*     This program accepts three numbers as input, and returns them in ascending order.
*
* Input:
*     The first Number: int firstNumber
*     The second Number: int secondNumber
*     The third Number: int thirdNumber
*
* Output:
*     Highest Number: int highNumber
*     Lowest Number: int lowNumber
*     Middle Number: int middleNumber
*
* Formulas:
*
**********************************************************************/
/**********************************************************************
*
* Pseudocode:
*     Initial Algorithm
*     -------
*       1. Get the three numbers
*       2. Find the smallest value of the three.
*       3. Decide which of the other two is the largest value.
*       4. Determine middle value.
*       5. Display the three numbers in ascending order.
*
*     Refined Algorithm
*     -------
*       1. Get the three numbers
*           o Input firstNumber
*           o Input secondNumber
*           o Input thirdNumber
*       2. Find the smallest value of the three.
*           o Determine if firstNumber is less than secondNumber
*               o IF firstNumber is less than secondNumber, set lowNumber to firstNumber
*               o ELSE set lowNumber to secondNumber
*           o IF firstNumber is NOT less than secondNumber
*               o IF secondNumber is less than thirdNumber, set lowNumber to secondNumber
*               o ELSE set lowNumber to thirdNumber
*          o Determine if thirdNumber is really the lowest number
*               o IF thirdNumber is less than lowNumber, set lowNumber to thirdNumber
*       3. Decide which of the other two is the largest value.
*           o Determine if firstNumber is greater than secondNumber
*               o IF firstNumber is greater than secondNumber, set highNumber to firstNumber
*               o ELSE set highNumber to secondNumber
*           o Determine if thirdNumber is really the highNumber
*               o IF thirdNumber is greater than highNumber, set highNumber to thirdNumber
*       4. Determine middle value.
*           o IF firstNumber is not equal to highValue
*               o IF firstNumber is not equal to lowValue set middleNumber to firstNumber
*           o IF secondNumber is not equal to highValue
*               o IF secondNumber is not equal to lowValue set middleNumber to secondNumber
*           o IF thirdNumber is not equal to highValue
*               o IF thirdNumber is not equal to lowValue set middleNumber to thirdNumber
*       5. Display the three numbers in ascending order.
 **********************************************************************/

/************************** Compiler Directives **********************/
#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

/*********************** Global Data Declarations ********************/
/**************************** main Function **************************/

int main() {
    // Local variables
    int firstNumber;
    int secondNumber;
    int thirdNumber;

    int lowNumber;
    int highNumber;
    int middleNumber;

    cout << "Please input the first number: ";
    cin >> firstNumber;

    cout << "Please input the second number: ";
    cin >> secondNumber;

    cout << "Please input the third number: ";
    cin >> thirdNumber;

    // Determine the low number
    if (firstNumber < secondNumber) {
        if (firstNumber < thirdNumber) {
            lowNumber = firstNumber;
        } else {
            lowNumber = thirdNumber;
        }
    } else {
        if (secondNumber < thirdNumber) {
            lowNumber = secondNumber;
        } else {
            lowNumber = thirdNumber;
        }
    }

    // Determine the high number
    if (firstNumber > secondNumber) {
        if (firstNumber > thirdNumber) {
            highNumber = firstNumber;
        } else {
            highNumber = thirdNumber;
        }
    } else {
        if (secondNumber > thirdNumber) {
            highNumber = secondNumber;
        } else {
            highNumber = thirdNumber;
        }
    }

    // Determine the middle number
    if (firstNumber != highNumber) {
        if (firstNumber != lowNumber) {
            middleNumber = firstNumber;
        } 
    }
    if (secondNumber != highNumber) {
        if (secondNumber != lowNumber) {
            middleNumber = secondNumber;
        }
    }
    if (thirdNumber != highNumber) {
        if (thirdNumber != lowNumber) {
            middleNumber = thirdNumber;
        }
    }


    cout << "Your numbers in ascending order are " << lowNumber << ", " << middleNumber << ", " << highNumber << endl;

    //Pause to read output
    system("pause");

    //Indicate to OS successful termination of program
    return 0;
}   //End main 

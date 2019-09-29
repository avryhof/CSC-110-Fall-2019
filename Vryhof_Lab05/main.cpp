/**********************************************************************
* Program Name: Lab04_Vryhof
* Author: Amos Vryhof
* Date: 2019-09-29
* Course/Section: CSC-110
* Program Description:
*     This program will calculate the cost of a phone call based how many minutes it lasted.
*     The first 10 minutes are charged at a flat rate of 99 cents, and additional minutes are 10 cents each.
*
* Input:
*     Total minutes: int totalMinutes
*
* Output:
*     Total minutes:   totalMinutes
*     Final Cost:      float finalCost
*
* Constants:
*      How many minutes the flat rate applies to: int flatRateMinutes = 10
*      First flatRateMinutes minutes cost: float flatRate = 0.99
*      Cost per additional minute: float perMinuteRate = 0.10
*
* Formulas:
*     finalCost = finalCost = flatRate + ((totalMinutes - flatRateMinutes) * perMinuteRate) IF totalMinutes >= 10
*     finalCost = finalCost = totalMinutes * perMinuteRate IF totalMinutes < 10
**********************************************************************/
/**********************************************************************
*
* Pseudocode:
*     Initial Algorithm
*     -------
*       1. Get the total number of minutes:
*           o Input totalMinutes.
*       2. IF the totalMinutes is equal to zero THEN
*           o Output an error message stating that the number of minutes is invalid.
#       3. ELSE.
            Determine if totalMinutes is greater than or equal to flatRateMinutes
            If it is, add the Flat Rate cost to the total cost
            Determine the additional minutes used
            Multiply that by the perMinuteRate
            Add the per minute rate result to the total cose
#       4.  END IF
*
*     Refined Algorithm
*     -------
*       1. Get the total number of minutes parked:
*           o Input totalMinutes.
*       2. IF the totalMinutes is equal to zero THEN
*           o Output an error message stating that the number of minutes is invalid.
#       3. ELSE.
#           IF totalMinutes >= flatRateMinutes
#               o finalCost = flatRate + ((totalMinutes - flatRateMinutes) * perMinuteRate);
            ELSE IF (toalMinutes < flatRateMinutes)
#               o finalCost = totalMinutes * perMinuteRate;
#           o Display the finalCost
#       4.  END IF
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
    int totalMinutes;
    int flatRateMinutes = 10;
    float flatRateCost = 0.99;
    float perMinuteRate = 0.10;

    float finalCost;

    cout << "Welcome to the BELLular digital pre-paid phone call terminal." << endl;

    // Get the number of minutes the call will be for.
    cout << "Please input how many minutes you want to buy: ";
    cin >> totalMinutes;

    if (totalMinutes == 0) {
        cout << "Zero is an invalid value.  We cannot calculate for a zero minute call!" << endl;

    } else {

        if (totalMinutes >= flatRateMinutes) {
            finalCost = flatRateCost + ((totalMinutes - flatRateMinutes) * perMinuteRate);
        } else {
            finalCost = totalMinutes * perMinuteRate;
        }

        cout << "The total cost for your phone call will be $" << setw(5) << fixed << showpoint << setprecision(2) << finalCost << endl;
        cout << "Thank you for calling with BELLular!" << endl;
    }

    //Pause to read output
    system("pause");

    //Indicate to OS successful termination of program
    return 0;
}   //End main 

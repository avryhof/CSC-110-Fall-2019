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
            IF (toalMinutes - flatRateMinutes)
#           o Compute the total hours parked:
#               hoursParked = totalMinutes / 60
#           o Compute the left over minutes parked:
#               minutesParked = totalMinutes % 60
#           o Compute the parking fee for the number of hours parked:
#               parkingFee = hoursParked * 1.00
#           o IF minutesParked is greater than zero THEN
#               parkingFee = parkingFee + 1.00
#           o Display the parkingFee
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
    float perMinuteCost = 0.10;

    float finalCost;

    cout << "Welcome to the BELLular digital pre-paid phone call terminal." << endl;

    // Get the Base measurement of the triangle
    cout << "Please input how many minutes you want to buy: ";
    cin >> totalMinutes;

    if (totalMinutes == 0) {
        cout << "Zero is an invalid value.  We cannot compute your fee, if you did not park!" << endl;

    } else if (totalMinutes >= flatRateMinutes) {
        hoursParked = totalMinutes / 60;
        minutesParked = totalMinutes % 60;
        parkingFee = hoursParked * parkingFeeAmount;
        if (minutesParked > 0) {
            parkingFee += parkingFeeAmount;
        }
        cout << "Your car has been parked " << hoursParked << " hours and " << minutesParked << " minutes." << endl;
        cout << "You owe $" << setw(5) << setfill('0') << fixed << showpoint << setprecision(2) << parkingFee << " in parking fees." << endl;
    }

    //Pause to read output
    system("pause");

    //Indicate to OS successful termination of program
    return 0;
}   //End main 

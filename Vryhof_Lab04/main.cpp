/**********************************************************************
* Program Name: Lab04_Vryhof
* Author: Amos Vryhof
* Date: 2019-09-21
* Course/Section: CSC-110
* Program Description:
*     This program will calculate and display in minutes and hours how long a car has been parked.
*     Include the parking fees where the charges are $1.00 per hour and $1.00 for a partial hour.
*
* Input:
*     Total minutes parked: int totalMinutes
*
* Output:
*     Total hours parked:   int hoursParked
*     Total Minutes Parked: int minutesParked
*     The Parking Fee:      float parkingFee
*
* Constants:
*      The parking fee per hour: float parkingFeeAmount = 1.00
*
* Formulas:
*     hoursParked = totalMinutes / 60
*     minutesParked = totalMinutes % 60
*     parkingFee = hoursParked * parkingFeeAmount
*     parkingFee = parkingFee + parkingFeeAmount (if minutes > 0)
**********************************************************************/
/**********************************************************************
*
* Pseudocode:
*     Initial Algorithm
*     -------
*       1. Get the total number of minutes parked:
*           o Input totalMinutes.
*       2. IF the totalMinutes is equal to zero THEN
*           o Output an error message stating that the number of minutes is invalid.
#       3. ELSE.
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
*
*     Refined Algorithm
*     -------
*       1. Get the total number of minutes parked:
*           o Input totalMinutes.
*       2. IF the totalMinutes is equal to zero THEN
*           o Output an error message stating that the number of minutes is invalid.
#       3. ELSE.
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
    int hoursParked;
    int minutesParked;
    float parkingFee;

    float parkingFeeAmount = 1.00;

    // Get the Base measurement of the triangle
    cout << "How many total minutes were you parked? ";
    cin >> totalMinutes;

    if (totalMinutes == 0) {
        cout << "Zero is an invalid value.  We cannot compute your fee, if you did not park!" << endl;

    } else {
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

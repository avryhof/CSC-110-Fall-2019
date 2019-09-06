/**********************************************************************
* Program Name:   Lab02_Vryhof
* Author:        Amos Vryhof
* Date:           2019-09-06
* Course/Section: CSC 110
* Program Description:
*    This program will ask the end user about themselves, then print
*    it back out on the screen.
**********************************************************************/
/**********************************************************************
*
* Pseudocode:
*    Initial Algorithm
*    -------
*        Prompt User for data.
*        Display messages based on the user input
*
*    Refined Algorithm
*    -------
*        Clear screen
*        Prompt User for: their full name
*                         the title and author of the last book they read
*                         their favorite animal
*        Greet tue user
*        Comment on their book
*        Comment on their favorite animal
**********************************************************************/

/************************** Compiler Directives **********************/

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/*********************** Global Data Declarations ********************/

// None in this program.

int main() {
    // Local variables
    string fullName;       // Your First Name
    string bookTitle;      // Your last book's title
    string bookAuthor;     // Your last book's title
    string favoriteAnimal; // Your favorite animal

    /*************** Begin main Function Executables *****************/

    // Clear the screen
    system("cls");

    // Prompt User for their full name
    cout << "Enter your full name: ";
    getline(cin, fullName, '\n');

    // Prompt for Information about the last book they read
    cout << "\nEnter the title of the last book you read: ";
    getline(cin, bookTitle, '\n');

    cout << "\nEnter the author of the last book you read: ";
    getline(cin, bookAuthor, '\n');

    // Ask the user what their favorite animal is
    cout << "\nWhat is your favorite animal? ";
    getline(cin, favoriteAnimal, '\n');

    // Greet the user, and regurgitate what they entered above.
    cout << "\n\nHello " << fullName << ".\n";
    cout << "I hope you enjoyed reading " << bookTitle << " by " << bookAuthor << ".\n";
    cout << "It is fascinating that you like the " << favoriteAnimal << ".\n\n";

    //Pause to read output
    system("pause");

    //Indicate to OS successful termination of program
    return 0;
}   //End main 


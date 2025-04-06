// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
//this is the  max size for input string the user can type in
//It stops the program from handling strings that are too long, preventing errors.
#define BUFFER_SIZE 80  
//This sets the max size for the number the user can type (the position in the string)
//It makes sure the program doesn’t accept too much data for this part.
#define NUM_INPUT_SIZE 10
#include "fundamentals.h"


/*Fundamentals module
*
V1: takes a string and a position then displays the character at the given position*/
void fundamentals(void) {

    /* Version 1 */

    printf("*** Start of index Strings DEMO *** \n"); // /*This prints a message to let the user know the program is starting*/
    char buffer1[BUFFER_SIZE]; //This creates a storage space (buffer1) to hold the user’s input. It can store up to 80 characters because of the BUFFER_SIZE limit.
    /**This creates another box (called 'numInput') to store the number the user types for the character position.
    It can hold up to 10 characters because of the NUM_INPUT_SIZE limit*/
    char numInput[NUM_INPUT_SIZE];
    size_t position; //This is where the program stores the position after converting it into a number.
    do {
        /*This loop runs until the user types "q" to quit, allowing multiple inputs without restarting the program.*/
        printf("Type not empty string (q - to quit):\n");

        fgets(buffer1, BUFFER_SIZE, stdin);   // Read user input

        buffer1[strlen(buffer1) - 1] = '\0'; // Removes new line character, adds NULL
        // Check if want to quit
        if (strcmp(buffer1, "q") != 0) {

            printf("Type the character position within the string:\n");
            // Read input string
            fgets(numInput, NUM_INPUT_SIZE, stdin);
            // Removes new line character, adds NULL
            numInput[strlen(numInput) - 1] = '\0';
            // Convert input string to integer
            position = atoi(numInput);
            //Check if position is too big
            if (position >= strlen(buffer1)) {
                position = strlen(buffer1) - 1;
                printf("Too big... Position reduced to max. available\n");
            }
            // Show character and position
            printf("The character found at %d position is \'%c\'\n", (int)position, buffer1[position]);
        }
        /* Continues the loop as long as the user does not input "q".
    This allows repeated demonstrations without restarting the program*/
    } while (strcmp(buffer1, "q") != 0);
    /** Displays a message indicating the end of the program's functionality.
    This provides closure to the user and signals that the demonstration is complete*/
    printf("*** End of Indexing Strings Demo ***\n\n");

  //v2
 // Print a starting message to show the starting of the demo
 printf("*** Start of Measuring Strings Demo ***\n");
 char buffer2[BUFFER_SIZE];

 do {
     // Ask the user to type a string
     printf("Type a string (q - to quit): \n");
     // Read the user input (including spaces) from the keyboard
     fgets(buffer2, BUFFER_SIZE, stdin);

     // Remove the newline character added by fgets
     buffer2[strlen(buffer2) - 1] = '\0';
     // If the user didn't type "q", print the length of the string
     if (strcmp(buffer2, "q") != 0)
         printf("The length of '%s' is %d characters\n", buffer2, (int)strlen(buffer2));
     // the loop keep looping until user types "q"
 } while (strcmp(buffer2, "q") != 0);
 //print an ending message to show the demo is over 
 printf("*** End of Measuring Strings Demo ***\n\n");










}
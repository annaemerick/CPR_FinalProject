#define BUFFER_SIZE 80  // Define the size for input strings
#include "manipulating.h"


void manipulating(void) 
{
    /* Version 1 */     // Function to demonstrate string concatenation
        // Print header to indicate the start of the demo
        printf("*** Start of Concatenating Strings Demo ***\n");

        // Declare two strings to store user input
        char string1[BUFFER_SIZE];
        char string2[BUFFER_SIZE];

        // Start a loop to allow repeated concatenation until "q" is entered
        do {
            // Prompt the user to enter the first string
            printf("Type the 1st string (q - to quit) : \n");

            // Read the first string from input
            fgets(string1, BUFFER_SIZE, stdin);

            // Remove the newline character at the end of the string
            string1[strlen(string1) - 1] = '\0';

            // If the first string is NOT "q", proceed with concatenation
            if (strcmp(string1, "q") != 0) {
                // Prompt the user for the second string
                printf("Type the 2nd string: \n");

                // Read the second string from input
                fgets(string2, BUFFER_SIZE, stdin);

                // Remove the newline character at the end of the second string
                string2[strlen(string2) - 1] = '\0';

                // Safely concatenate the strings, ensuring no buffer overflow
                strncat(string1, string2, BUFFER_SIZE - strlen(string1) - 1);

                //// Concatenate the second string to the first
                //strcat(string1, string2); // possible buffer overflow

                // Display the resulting concatenated string
                printf("Concatenated string is \'%s\'\n", string1);
            }

            // Continue looping until the user enters "q" as the first string
        } while (strcmp(string1, "q") != 0);

        // Print footer to indicate the end of the demo
        printf("*** End of Concatenating Strings Demo ***\n\n");


        /* Version 2 */     // Function to demonstrate string comparison


    // Prints a message indicating the start of the string comparison demo
    printf("*** Start of Comparing Strings Demo ***\n"); 

    // Declares the first and second string input buffer with size BUFFER_SIZE
    char compare1[BUFFER_SIZE];  
    char compare2[BUFFER_SIZE]; 

    // Declares an integer variable to store the result of the string comparison
    int result; 

    // Starts a do-while loop that will repeat until the user enters "q"
    do {  

        // Prompts the user to enter the first string or "q" to quit
        printf("Type the 1st string to compare (q - to quit):\n"); 
        
        // Reads the first string from user input (includes newline character)
        fgets(compare1, BUFFER_SIZE, stdin); 
        
        // Removes the newline character from the end of the first string
        compare1[strlen(compare1) - 1] = '\0'; 
        
        // Checks if the user did not enter "q"   only proceed if not quitting
        if (strcmp(compare1, "q") != 0) { 

            // Prompts the user to enter the second string
            printf("Type the 2nd string to compare:\n"); 
            
            // Reads the second string from user input
            fgets(compare2, BUFFER_SIZE, stdin); 
            
            // Removes the newline character from the end of the second string
            compare2[strlen(compare2) - 1] = '\0'; 

            // Compares the two strings and stores the result:
                // < 0 if compare1 < compare2
               //  0 if compare1 == compare2
              // > 0 if compare1 > compare2
            result = strcmp(compare1, compare2);
            
            // If result is negative, print that the first string is less
            if (result < 0)
                printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
           
            // If result is zero, print that the strings are equal
            else if (result == 0)
                printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);

            // If result is positive, print that the first string is greater
            else
                printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
            
        }
      // Continues the loop unless the user enters "q"
    } while (strcmp(compare1, "q") != 0);

// Prints a message indicating the end of the demo
    printf("*** End of Comparing Strings Demo ***\n\n"); 




/* Version 3 */      // Function to demonstrate string searching

//    // Prints a message indicating the start of the string searching demo
   printf("*** Start of Searching Strings Demo ***\n");
//
//    // Declares a character array to hold the main string to be searched
    char haystack[BUFFER_SIZE];
//
//    // Declares a character array to hold the substring to search for
    char needle[BUFFER_SIZE];
//
//    // Declares a pointer to store the address where the substring is found (if any)
    char* occurrence = NULL;
//
//
//    // Starts a loop that continues until the user enters "q" as input
    do {
//
//        // Prompts the user to enter the main string (haystack)
        printf("Type the string (q - to quit):\n");
//
//        // Reads the main string input from the user (including newline)
        fgets(haystack, BUFFER_SIZE, stdin);
//
//        // Removes the newline character from the end of the haystack string
        haystack[strlen(haystack) - 1] = '\0';
//
//        // Checks if the user did not enter "q" (continue if not quitting)
        if (strcmp(haystack, "q") != 0) {
//
//            // Prompts the user to enter the substring to search for
            printf("Type the substring:\n");
//
//            // Reads the substring input from the user
            fgets(needle, BUFFER_SIZE, stdin);
//
//            // Removes the newline character from the end of the needle string
            needle[strlen(needle) - 1] = '\0';
//
//            // Searches for the substring (needle) inside the main string (haystack) and returns a pointer to the first occurrence or NULL if not found
            occurrence = strstr(haystack, needle);
//
//            // If found, prints the substring and its position within the main string
            if (occurrence)
                printf("\'%s\' found at %d position\n", needle,
                    (int)(occurrence - haystack));
//
//            // If not found, prints "Not found"
            else
                printf("Not found\n");
        }
//        // Continues the loop unless the user enters "q"
    } while (strcmp(haystack, "q") != 0);
//
//    // Prints a message indicating the end of the demo
    printf("*** End of Searching Strings Demo ***\n\n");
}



        







/* Version 3 */      // Function to demonstrate string searching


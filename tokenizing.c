// TOKENIZING MODULE SOURCE
//#define _CRT_SECURE_NO_WARNINGS //this disables the security warnings (Visual Studio)
#define BUFFER_SIZE 300 //this is settings our input buffer to a max of 300 characters
#include "tokenizing.h" // This makes sure to include the tokenizing header file


//V1
void tokenizing(void) { // this is the function declaration
    printf("*** Start of Tokenizing Words Demo ***\n");   //The beginning message for the user to let them know the demo has started
    char  words[BUFFER_SIZE + 1]; //this creates an array with the buffer size limit, this is what will be used to store user input //A +1 was added to fix an issue where it would not drop anything over 300 charac
    char* nextWord = NULL; // this creates our pointer and sets it to a safe empty state
    int wordsCounter; // declares our variable to track our number of words
    do {
        printf("Type a few words separated by space (q - quit):\n"); // the beginning of our loop prompting the  user for input
        fgets(words, BUFFER_SIZE, stdin); // this reads the user input and ensure that the input does not exceed BUFFER_SIZE
        words[strlen(words) - 1] = '\0'; // this repalces the newline character that fgets generates and replaces it will null characters
        if (strcmp(words, "q") != 0) { // compares thje user input to the string "q" if the input is not q it tokenizes the input
            nextWord = strtok(words, " "); // this splits the input into words separated by spaces the first first is store in nextword
            wordsCounter = 1;  //this sets wordscounter to 1 before processing the first word
            while (nextWord) { //the loop to process each word begins
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord); //prints the current word number and the word itself
                nextWord = strtok(NULL, " "); //retrieves the next word from the string if there is one
            }
        }
    } while (strcmp(words, "q") != 0); // this continutes the loop until the user enters the letter q
    printf("*** End of Tokenizing Words Demo ***\n\n"); // message to let the user know that the demo is over

    //V2
    printf("*** Start of Tokenizing Phrases Demo ***\n");  // signal the start of the tokenizing demo for the user 
    char phrases[BUFFER_SIZE]; // this is the buffer being used to store the users input 
    char* nextPhrase = NULL; // this sets our pointer to a safe empty state
    int phrasesCounter; // this is used to track how many phrases we have 
    do {
        printf("Type a few phrases separated by comma(q - to quit):\n"); // instructions for the user 
        fgets(phrases, BUFFER_SIZE, stdin); // reads and stores the user input to the phrases buffer
        phrases[strlen(phrases) - 1] = '\0'; // this replaces the new line with the null terminator 
        if ((strcmp(phrases, "q") != 0)) { // this function checks to see if the phrase entered is 'q' to take the user out of the program 
            nextPhrase = strtok(phrases, ","); // this checks for a commma as a way to seperate the phrases
            phrasesCounter = 1; // this tracks how many phrases the user entered
            while (nextPhrase) { // this makes sure the function will loop as long as the nextphrase pointer isnt null 
                printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase); // displays the amount of phrases entered for the user 
                nextPhrase = strtok(NULL, ","); // this is used to terminate the loop once the null terminator is reached
            }

        }
    } while (strcmp(phrases, "q") != 0); //this checks if there is a 'q' and if not makes sure to prompt the user again for input 
    printf("*** End of Tokenizing Phrases Demo ***\n\n"); //informs the user that the demo is complete 

}
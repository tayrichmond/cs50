#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *caesar.c
 *
 *Taylor Richmond
 *
 *Encrypts a user submited message with a user submited key.
 *The key is an integer.
 *
 */

int main(int argc, string argv[])
{
    // check to see that a key was submited
    if (argc != 2)
    {
        printf("A key must be submited as an argument to the program.\n");
        return 1;
    }
    
    // put the key in a variable
    int key = atoi(argv[1]);
    
    // checks to see if key is greater then 0
    if (key < 1)
    {
        printf("The Caesar key must be a positive integer.\n");
        return 1;
    }
    
    // promts the user for a message to encrypt
    string message = GetString();
    
    // encryptes the message
    for (int i = 0, n = strlen(message); i < n; i++)
    {
        if (isalpha(message[i]))
        {
            if (isupper(message[i]))
            {
                message[i] = (message[i] - 'A' + key) % 26 + 'A';            
            }
            else
            {
                message[i] = (message[i] - 'a' + key) % 26 + 'a';  
            }
        }    
    }
    
    // print new message
    printf("%s\n", message);
    return 0;
}

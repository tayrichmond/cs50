#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *vigenere.c
 *
 *Taylor Richmond
 *
 *Encrypts a user submited message using a user submited key.
 *The key is an alphabetic string.
 *
 */ 

int main(int argc, string argv[])
{
    // check to make sure an argument was added when program was initialized
    if (argc != 2)
    {
        printf("A key must be submited as an argument to the program.\n");
        return 1;
    }
    
    // put key in variable, and key length in variable
    string key = argv[1];
    int key_len = strlen(key);
    
    // check that the key to make sure it's nothing but alphabetical letters
    for (int i = 0; i < key_len; i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Vigenere's key must only include alphabetical letters.\n");
            return 1;
        }   
    }
   
    // change the key letters into numbers within an array
    int key_nums[key_len];
    
    for (int i = 0; i < key_len; i++)
    {
        key_nums[i] = toupper(key[i]) - 'A';
    }
    
    // promt the user for a message to be encrypted
    string message = GetString();
    
    // change letters in message using numbers in key array
    for (int i = 0, j = 0, k = 0, n = strlen(message); i < n; i++)
    {
        
        if (isalpha(message[i]))
        {   
            // wrape around the key
            k = j % key_len;
            
            if (isupper(message[i]))
            {
                message[i] = (message[i] - 'A' + key_nums[k]) % 26 + 'A';
            }
            else
            {
                message[i] = (message[i] - 'a' + key_nums[k]) % 26 + 'a';
            }
            
            // iterate through the key
            j++;
        }    
    }
    
    // print the message
    printf("%s\n", message);
    return 0;
}

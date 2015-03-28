#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

/**
 *initials.c
 *
 *Taylor Richmond
 *
 *Takes in a name, and prints out the capitalized initals
 */
 
int main(void)
{
    // get a name from user
    string name = GetString();
    
    // make sure there is actually a name
    if (name != NULL)
    {
        // print the first letter
        printf("%c", toupper(name[0]));
        
        for (int i = 0, n = strlen(name); i < n; i++)
        {
            // print ever letter after a space
            if (name[i] == ' ')
            {
                printf("%c", toupper(name[i + 1]));
            }  
        }
    }
    
    printf("\n");
}

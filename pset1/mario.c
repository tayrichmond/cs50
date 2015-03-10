#include <cs50.h>
#include <stdio.h>

/**
 *mario.c
 *
 *Taylor Richmond
 *
 *creates Mario's tower
 *using user input
 *
 */
 
int main(void)
{ 
    //a variable to store height of tower
    int height; 
    
    //gets tower's height, makes sure it's within range
    do  
    {
        printf("Pick a height between 1 and 23: ");
        height = GetInt(); 
    }
    while (height > 23 || height < 0);
    
    //spaces need in first line will always be 1 less then tower's height
    int spaces = (height - 1); 
    
    //printing the tower
    for (int i = 0; i < height; i++) 
    {
        //print the spaces
        for (int j = 0; j < spaces; j++) 
        {
            printf(" ");
        }
        
        //print the hashes
        for (int k = 0; k < i + 2; k++) 
        {
            printf("#");
        }
        
        //printing the new line
        printf("\n"); 
        
        //the number of spaces is one less on each following line
        spaces--;
    } 
} 

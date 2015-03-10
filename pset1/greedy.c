#include <cs50.h>
#include <stdio.h>
#include <math.h>

/**
 *greedy.c
 *
 *Taylor Richmond
 *
 *Ask for change from the user and
 *counts the lowest amount coins needed
 *to make the change
 *
 */

int main(void)
{
    float change;
    
    //Ask for change owed, make sure it isn't 0 or less
    do
    {
        printf("How much change is owed?\n");
        change = round(GetFloat() * 100);
    }
    while (change < 1);
    
    //container for total coins 
    int total = 0;
    
    //count the quarters
    while (change > 24)
    {
        change = (change - 25);
        total++;
    }
    
    //count the dimes
    while (change < 25 && change > 9)
    {
        change = (change - 10);
        total++;
    }
    
    //count the nickels
    while (change < 10 && change > 4)
    {
        change = (change - 5);
        total++;
    }
    
    //count the pennies
    while (change < 5 && change > 0)
    {
        change = (change - 1);
        total++;
    } 
    
    //print the total coins
    printf("%i\n", total);
}

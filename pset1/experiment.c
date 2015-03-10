#include <cs50.h>
#include <stdio.h>

int main(void)
{
     else if (height > 0 && height < 24)
        {
            for (int row = 0; row < height; row++)
            {
                for (int space = 0; space < height - row; space++)
                {
                    printf(" ");
                }
                for (int k = 0; k < row + 2; k++)
                {
                    printf("#");
                }
                printf("\n");
               
            }
        }
}

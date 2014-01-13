#include <stdio.h>
#include <cs50.h>


int main (void)
{
    int height;
    do
    {
        printf("Mario needs a height: ");
        height = GetInt();
    }
  
    while (height < 0 && height > 23);
    
    for (int row = 1; row <= height; row ++)
    {
        for (int space = (height - row); space >=1; space--)
        {
            printf(" ");
        }
        
        for (int tag = (height - row) ; tag <= height ; tag++)
        {
        printf("#");
        }
        
        printf("\n");
    }
    
    return 0;
    {
    printf("yay \n");
    }
}

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;   
    do
    {
        printf("How tall would you like the pyramid to be? \nEnter a whole number : ");
        n = GetInt();
    }
    while (n < 0 || n > 23);
    if (n == 0)
    {
        printf("Actually, your pryramid is too short to be visible!\n");
    }
    else
    {
        int x = 1;
        int y = n;
        for (int i = 0; i < n; i++)
        {
            y -= 1;
            x += 1;
            for (int i = 0; i < y; i++)
            {
                printf(" ");
            }
            for (int i = 0; i < x; i++)
            {
                printf("#");
            } 
            printf("\n");
        }
    }
}

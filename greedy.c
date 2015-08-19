#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int x;
    int q = 25;
    int d = 10;
    int n = 5;
    int p = 1;
    int c = 0;
    do 
    {
        printf("Input amount of change required in dollars & cents (i.e. 1.12): ");
        float n = GetFloat();
        x = round(n * 100);
    }
    while (x < 0);
    
    do
    {
        if (x >= q)
        {
            c++;
            x = x - q;
        }
        else if (x >= d)
        {
            c++;
            x = x - d;
        }
        else if (x >= n)
        {
            c++;
            x = x - n;
        }
        else
        {
            c++;
            x = x - p;
        }
    }
    while (x > 0);
    printf("%i\n", c);
}

// isLeapYear
// return boolean
// accepts int
// every 4 years
// not divisible by 100
//however is if divisible by 400

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a;
    printf("Enter the first year:");
    scanf("%d", &a);
        if (a % 400 == 0)
        {
            printf("Leap year\n");
        }

        else if (a % 100 == 0)
        {
            printf("NOT A Leap year\n");
        }

        else if (a % 4 == 0)
        {
            printf("Leap year\n");
        }
         else
        {
            printf("NOT A Leap year\n");
        }
}

bool leapYear()
{

}

// if mod == 4 return leap year
// if mod !== 4 return NOT leap year
// if a /400 return leap year
// if a /100 does not return leap year


// isLeapYear
// return boolean
// accepts int
// every 4 years
// not divisible by 100
//however is if divisible by 400

#include <cs50.h>
#include <stdio.h>

bool isLeapYear(int);

int main(void)
{
    int year = get_int("Enter a year: ");
    if (isLeapYear(year))
    {
        printf("%i is a leap year.\n", year);
    }
    else {
        printf("%i is NOT a leap year.\n", year);
    }
}

bool isLeapYear(year)
{
    if(year % 4 == 0 && (year % 100 !=0 || year % 400 ==0))
    {
        return true;
    }
    return false;
}
    //// version 2
    // if(year % 4 != 0 || (year % 100 ==0 && year % 400 !=0))
    // {
    //     return false;
    // }
    // return true;




    // if(year % 400 ==0 && year % 4 ==0)
    // {
    //     if( year % 100 ==0)
    //     {
    //         return true;
    //     }
    // }
    // return false;
    // if(year % 4 == 0)
    // {
    //     if(year % 100 == 0)
    //     {
    //         if(year % 400 ==0)
    //         {
    //             return true;
    //         }
    //         return false;
    //     }
    //     return true;
    // }
    // return false;


// int main(void)
// {
//     int a;
//     printf("Enter the first year:");
//     scanf("%d", &a);
//         if (a % 400 == 0)
//         {
//             printf("Leap year\n");
//         }

//         else if (a % 100 == 0)
//         {
//             printf("NOT A Leap year\n");
//         }

//         else if (a % 4 == 0)
//         {
//             printf("Leap year\n");
//         }
//          else
//         {
//             printf("NOT A Leap year\n");
//         }
// }

// bool leapYear()
// {

// }

// if mod == 4 return leap year
// if mod !== 4 return NOT leap year
// if a /400 return leap year
// if a /100 does not return leap year


#include <cs50.h>
#include <stdio.h>

void printSum(void);
void printSums(int, int);
int squared(int);

int main(void)
{
    printf("Hello\n");
    printSums(4, 8);
    int threeSquared = squared(3);
    printf("3 squared is %i\n", threeSquared);
}

int squared(num)
{
    return num * num;
}

void printSum(void)
{
    printf("1 + 2 = %i\n", 1 + 2);
}
void printSums(x, y)
{
    printf("%i + %i = %i\n", x, y, x + y);
}
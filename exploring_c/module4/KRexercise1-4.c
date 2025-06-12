// K&R Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.
// Check the sample output for the required format of the heading.
#include <stdio.h>
int main() /* Fix this to be Celsius-Fahrenheit table */
{
    int cel;
    for (cel = 0; cel <= 100; cel = cel + 20)
        printf("%4d %6.1f\n", cel, (cel * 9.0 / 5.0 ) + 32.0);
}
/*
Expected output from your program:

0   32.0
  20   68.0
  40  104.0
  60  140.0
  80  176.0
 100  212.0
 */

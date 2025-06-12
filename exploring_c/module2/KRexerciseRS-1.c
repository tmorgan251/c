/*
Exercise RS-1: Write a C program to produce the same output as this Python program using the %d and %s features of the printf() function:

print('Hello world')
print('Answer', 17)
print('Name', 'Sarah')
 */

 #include <stdio.h>
 int main() {
     printf("Hello world\n");
     int answer = 17;
     char name[100] = "Sarah";
     printf("Answer %d\n", answer);
     printf("Name %s\n", name);
 }

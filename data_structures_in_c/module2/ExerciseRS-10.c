/*

Exercise RS-10: Write a C program to prompt for two strings and concatenate them as shown in in the Python
code below. Use the functions strcpy and strcat from the string.h library in your code. Pre-allocate your
character arrays large enought to handle up to 100 characters on input for each string (i.e. do not use
malloc as we have not yet covered that yet).

print('Enter two strings');
first = input()
second = input()
print(first + " & " + second)
 */
 #include <stdio.h>
 #include <string.h>

 int main() {
     char first_line[100];
     char second_line[100];

     printf("Enter two strings:\n");
     scanf("%s", first_line);
     scanf("%s", second_line);

     strcat(first_line, " & ");
     strcat(first_line, second_line);
     printf("%s\n", first_line);
 }

 /*

 This will be provided as input to your program: Copy

 Kernighan
 Ritchie

 Expected output from your program:

 Enter two strings
 Kernighan & Ritchie

  */

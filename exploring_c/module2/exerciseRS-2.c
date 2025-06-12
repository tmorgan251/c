/*
Exercise RS-2: Write a C program equivalent to this Python program:

print('Enter US Floor')
usf = int(input())
euf = usf - 1
print('EU Floor', euf)
 */

 #include <stdio.h>
 int main() {
     int usf;
     int euf;

     printf("Enter US Floor\n");
     scanf("%d", &usf);
     euf = usf - 1;
     printf("EU Floor %d\n", euf);
 }

 /*
 This will be provided as input to your program: Copy

 2

 Expected output from your program:

 Enter US Floor
 EU Floor 1
  */

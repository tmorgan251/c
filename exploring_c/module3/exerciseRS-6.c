/*
Exercise RS-6: Write a C program to produce the same output as this Python program using a 'for' loop.

for i in range(5) :
    print(i)
 */
 #include <stdio.h>
 int main() {
   int i;
   for (i = 0; i < 5; i++) {
     printf("%d\n", i);
   }
 }
 /*
 Expected output from your program:

 0
 1
 2
 3
 4
  */

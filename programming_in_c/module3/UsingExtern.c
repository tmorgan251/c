/*
Using 'extern' data

You should write a function called bump() that uses an extern variable so that the first time it is called,
it returns int 0, the next time it returns 1 and so on.
 */
 #include <stdio.h>

 extern int num;
 int num = 0;

 int bump();

 int main() {
   printf("bump() returns %d\n", bump());
   printf("bump() returns %d\n", bump());
   printf("bump() returns %d\n", bump());
   printf("bump() returns %d\n", bump());
   printf("bump() returns %d\n", bump());
 }

 int bump() {
     return num++;
 }
 /*
 Expected output from your program:

 bump() returns 0
 bump() returns 1
 bump() returns 2
 bump() returns 3
 bump() returns 4
  */

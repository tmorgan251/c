/*
K&R Exercise 1-17.

You should write a function called reverse(s) that reverses the characters in a string. Reverse the string in place.
 */
 #include <stdio.h>
 #include <string.h>


 void reverse(t)
 char t[];
 {
     int length = strlen(t);
     char temp;
     int i;
     for (i = 0; i < length/2; i++) {
         temp = t[i];
         t[i] = t[length - 1 - i];
         t[length - 1 - i] = temp;
     }
 }


 int main() {
   char t[1000];
   char *copy();
   void reverse();
   copy("Hello world", t);
   printf("%s\n", t);
   reverse(t);
   printf("%s\n", t);
   reverse(copy("XY", t));
   printf("%s\n", t);
   reverse(copy("Even", t));
   printf("%s\n", t);
   reverse(copy("Odd", t));
   printf("%s\n", t);
   reverse(copy("civic", t));
   printf("%s\n", t);
 }

 /* copy s1 to s2; assume s2 big enough */
 char *copy(s1, s2)
 char s1[], s2[];
 {
     int i;
     for(i=0;(s2[i] = s1[i]);i++);
     return s2;
 }

 /*
 Expected output from your program:

 Hello world
 dlrow olleH
 YX
 nevE
 ddO
 civic
  */

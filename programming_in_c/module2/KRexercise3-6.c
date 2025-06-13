/*
K&R Exercise 3-6.

Write a program which copies its input to its output, except that it prints only one instance from each group of adjacent identical lines.
(This is a simple version of the UNIX utility uniq.)

You can use the strcpy(dest, src) from the string.h to copy one string (character array) to another.
You can also use strcmp(s1,s2) to compare two strings (character arrays). strcmp() returns zero if the strings are equal.
 */

 #include <stdio.h>
 #include <string.h>
 int main() {
     char line[1000];
     char keep[1000];

     while(fgets(line, sizeof(line), stdin) != NULL ) {
         if (strcmp(keep, line) == 0) {
           continue;
           }
         strcpy(keep, line);
         printf("%s",keep);
     }
 }

 /*
 This will be provided as input to your program: Copy

 One line
 Two Line
 Red Line
 Blue line
 Blue line
 Blue line
 Yada
 Yada
 Yada
 Last line

 OUTPUT MATCH - Grade sent to server

 Output from your program:

 One line
 Two Line
 Red Line
 Blue line
 Yada
 Last line
  */

/*
 Exercise RS-12: Write a C function called py_lstrip() that removes whitespace (blanks, tabs, and newlines)
 from the beginning of a string. This function modifies its parameter and should never be called with a constant value.
 */


 #include <stdio.h>
 #include <string.h>
 #include <ctype.h>

 void py_lstrip(char inp[]);

 int main() {
     char s1[] = "   Hello   World    ";
     py_lstrip(s1);
     printf("-%s-\n", s1);
 }

 void py_lstrip(char inp[])
 {
     int i;
     int len = strlen(inp);
     for (i = 0; i <= len; i++) {
         if (!isspace(inp[i])) {
             break;
         }
     }

     if (i > 0) {
         memmove(inp, inp + i, len - i + 1);
     }
 }
 /*
 Expected output from your program:

 -Hello   World    -
  */

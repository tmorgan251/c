/*
 Exercise RS-11: Write a C function called py_rstrip() that removes
 spaces from the end of a string. This function modifies its parameter
 and should never be called with a constant value.
 */

 #include <stdio.h>
 #include <string.h>

 void py_rstrip(char inp[]);

 int main() {
     char s1[] = "   Hello   World    ";
     py_rstrip(s1);
     printf("-%s-\n", s1);
 }

 void py_rstrip(char inp[])
 {
     int len = strlen(inp);
     int i, new_len;
     for (i = len - 1; i >= 0; i--) {
         if (inp[i] == ' ' || inp[i] == '\0') {
             continue;
         }
         else {
             inp[i + 1] = '\0';
             break;
         }
     }
 }
 /*
 Expected output from your program:

 -   Hello   World-
  */

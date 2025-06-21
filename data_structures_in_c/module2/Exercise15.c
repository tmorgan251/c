/*
LBS290 Exercise 15. You are to perform the following steps in a function named process():
(1) Print out the string you are passed. (2) Count the number of characters in the string.
(3) If there are more than 10 characters in the string print out the 10th character (line[9])
(4) Go through the string and replace every blank with a dash '-' (5) Print out the new string with dashes.
Fun Fact:Dr. Chuck used this exact assignment while teaching C - LBS 290 - Fall 1991.
 */

 #include <stdio.h>
 #include <string.h>
 #include <ctype.h>

 void process(char line[])
 {
     int len, i;
     // print out the sting you passed in
     printf("\nString: %s\n",line);

     // count the number of characters
     len = strlen(line);
     printf("Count=%d\n", len);

     // if there are more than 10 characters print the 10th
     if (len > 10) {
         printf("The ninth character is: %c\n", line[9]);
     }

     // go throught the string and replace every blank with a -
     for (i = 0; i < len; i++) {
         if (isspace(line[i])) {
             line[i] = '-';
         }
     }

     // print with dashes
     printf("String: %s\n", line);
 }

 int main() {
     char line[1000];
     strcpy(line,"Hi there and welcome to LBS290");
     process(line);
     strcpy(line,"I love C");
     process(line);
 }
 /*
 Expected output from your program:

 String: Hi there and welcome to LBS290
 Count=30
 The ninth character is: a
 String: Hi-there-and-welcome-to-LBS290

 String: I love C
 Count=8
 String: I-love-C
  */

/*
Exercise RS-7: Write a C program to determine the minimum and maximum of a sequence of integer numbers on input, terminated by the string "done". The patterns for input and output should match the following Python application. Make sure that the input lines can be at least 1000 characters. Use a middle-tested while loop, gets() and atoi() to mimic the Python code below. See the lecture for guidance.

maxval = None
minval = None
while True:
    line = input()
    line = line.strip()
    if line == "done" : break
    ival = int(line)
    if ( maxval is None or ival > maxval) :
        maxval = ival
    if ( minval is None or ival < minval) :
        minval = ival

print('Maximum', maxval)
print('Minimum', minval)

 */
 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 int main() {
   int maxval, minval;
   int is_first_number = 1;
   int temp = 0;
   char line[1000];

   while (1) {
    fgets(line, sizeof(line), stdin);
     if (line[0] == '\n' || strcmp(line, "done\n") == 0)
       break;
     else
       temp = atoi(line);
     if (is_first_number) {
       maxval = temp;
       minval = temp;
       is_first_number = 0;
     }

     if (temp > maxval)
       maxval = temp;
     if (temp < minval)
       minval = temp;
   }
   printf("Maximum %d\n", maxval);
   printf("Minimum %d\n", minval);
 }
 /*
 This will be provided as input to your program: Copy

 5
 2
 9
 done

 Expected output from your program:

 Maximum 9
 Minimum 2
  */

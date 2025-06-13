/*
K&R Exercise 2-2.

You should write a function (no #include statements are needed) called htoi(str) that converts hexadecimal constant
(base-16 0-9 and a-f) to an integer. There will not be a '0x' prefix (like in C) - just assume the input is a hex number.
You should not use ctype.h and your code can assume the ASCII character set.

Each time you run the program, the values you need to convert a477d (base-16) to 673661 (base-10) may be different each time you run the code.
 */

 #include <stdio.h>

 int htoi(char s[]);

 int main() {
   printf("htoi('a477d') = %d\n", htoi("a477d"));
   printf("htoi('f') = %d\n", htoi("f"));
   printf("htoi('F0') = %d\n", htoi("F0"));
   printf("htoi('12fab') = %d\n", htoi("12fab"));
 }

 int htoi(char s[]) /* convert hex string s to integer */
 {
     int i, n, val; // 'val' will temporarily hold the decimal value of the current hex digit

     n = 0; // 'n' will accumulate the final integer value
     for (i = 0; s[i] != '\0'; ++i) {
         if (s[i] >= '0' && s[i] <= '9') {
             val = s[i] - '0'; // For digits '0' through '9'
         } else if (s[i] >= 'a' && s[i] <= 'f') { // This else now specifically handles 'a' through 'f'
             val = 10 + s[i] - 'a'; // For 'a' through 'f', value is 10 + offset from 'a'
         } else {
             val = 10 + s[i] - 'A';
          }

         // Accumulate the value: multiply existing total by 16 (base) and add current digit's value
         n = 16 * n + val;
     }
     return(n);
 }

 /*
 Expected output from your program:

 htoi('a477d') = 673661
 htoi('f') = 15
 htoi('F0') = 240
 htoi('12fab') = 77739
  */

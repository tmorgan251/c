/*
Exercise RS-9: Write a C function to implement this Python code:

def mymult(a,b):
    c = a * b
    return c
 */
 #include <stdio.h>
 int mymult(int a, int b) {
     return a * b;
 }


 int main() {
     int mymult();
     int retval;

     retval = mymult(6,7);
     printf("Answer: %d\n",retval);
 }
 /*
 Expected output from your program:

 Answer: 42
  */

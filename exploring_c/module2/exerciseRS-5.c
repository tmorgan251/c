/*
Exercise RS-5: Write a C program to implement this Python program, using the fgets function instead of scanf.

print('Enter line')
line = input()
print('Line:', line)
 */
 #include <stdio.h>
 int main() {
     char line[1000];
     printf("Enter line\n");
     fgets(line, sizeof(line), stdin);
     printf("Line: %s\n", line);
 }
 /*
 This will be provided as input to your program: Copy

 Hello world - have a nice day

 Expected output from your program:

 Enter line
 Line: Hello world - have a nice day
  */

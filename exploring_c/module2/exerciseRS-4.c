/*
Exercise RS-4: Write a C program equivalent to this Python program:

print('Enter line')
line = input()
print('Line:', line)
 */
 #include <stdio.h>
 int main() {
     char line[1000];
     printf("Enter line\n");
   	scanf("%[^\n]1000s", line);
     printf("Line: %s\n", line);
 }
 /*
 This will be provided as input to your program: Copy

 Hello world - have a nice day

 Expected output from your program:

 Enter line
 Line: Hello world - have a nice day
  */

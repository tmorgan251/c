/*
Exercise RS-3: Write a C program equivalent to this Python program:

print('Enter name')
name = input()
print('Hello', name)
 */
 #include <stdio.h>
 int main() {
     char name[100];
     printf("Enter name\n");
     scanf("%[^\n]100s]", name);
     printf("Hello %s\n", name);
 }
 /*
 This will be provided as input to your program: Copy

 Sarah

 Expected output from your program:

 Enter name
 Hello Sarah
  */

/*
LBS290 Exercise 18 - A Simple Machine. You are to implement an interpreter for a simple programming language.
Your computer has 256 characters of memory. You are to read a sequence of instructions from input and perform those instructions.
At the end of the program you print the memory out as a zero-terminated C character array. Here are the instructions you need to support:

*           This is a comment, print it out and do no further processing
X           Exit the program (end-of-input also ends the program)
5 = 42      Put the number 42 into memory[5]
10 + 3      Add 3 to the contents of memory[10]
7 - 1       Suptract 1 from the contents of memory[7]

All of the numbers should be in the range of 0-255 so they fit into a C char variable.
Fun Fact:Dr. Chuck used an assignment similar to this one while teaching C - LBS 290 - Fall 1991.
 */
 #include <stdio.h>

 int main()
 {
     char line[256];
     char memory[256];
     char opcode;
     int count,address,value;

     while(fgets(line, 256, stdin) != NULL) {
         printf("\nLine: %s\n",line);
         if ( line[0] == 'X' ) break;
         if ( line[0] == '*' ) {
             printf("%s",line); // comment out for exercise answer
             continue;
         }
         count = sscanf(line, "%d %c %d", &address, &opcode, &value);
         if ( count != 3 ) continue;
         printf("address: %d opcode: %c value: %d\n", address, opcode, value); // comment out for exercise answer

         switch (opcode) {
             case '=':
                memory[address] = value;
                break;
             case '+':
                memory[address] += value;
                break;
             case '-':
                memory[address] -= value;
                break;
             default:
                printf("Unrecognized opcode:");
                continue;
         }

         printf("Memory:\n%s\n", memory); // comment out for exercise answer
     }
     printf("Memory:\n%s\n", memory);
 }
 /*
 This will be provided as input to your program: Copy

 * Beginning
 0 = 72
 1 = 101
 2 = 108
 3 = 108
 4 = 108
 4 + 3
 5 = 10
 6 = 100
 6 + 19
 7 = 111
 8 = 114
 9 = 108
 10 = 101
 10 - 1
 X

 Expected output from your program:

 * Beginning
 Memory:
 Hello
 world


  */

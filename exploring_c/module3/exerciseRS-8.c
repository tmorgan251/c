/*
Exercise RS-8: Write a C program to play a guessing game with the user that is equivalent to the Python program below. Your program should use a while loop and multi-way branch if (i.e. use else if).

while True:
    try:
        line = input()
    except:  # If we get EOF
        break
    line = line.strip()
    guess = int(line)
    if guess == 42:
        print('Nice work!')
        break
    elif guess < 42 :
        print('Too low - guess again')
    else :
        print('Too high - guess again')
 */
 #include <stdio.h>
 int main() {
      int guess = 42;
      int user_guess;
      char user_input[10000];
      while (scanf("%d", &user_guess) == 1) {
        if (user_guess == guess) {
            printf("Nice work!\n");
            break;
        }
        else if (user_guess < 42) {
            printf("Too low - guess again\n");
        }
        else {
            printf("Too high - guess again\n");
        }
     }
 }
 /*
 This will be provided as input to your program: Copy

 5
 50
 42

 Expected output from your program:

 Too low - guess again
 Too high - guess again
 Nice work!
  */

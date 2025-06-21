/*
LBS290 Exercise 14. The program will create a 10 element array and read in 10 integers
into the array. Then the program will print the integers backwards. Then the program will
scan for entries in the array which contain the value 100 and print out the index of the
entries with the number 100. The program will also count the number of entries which equal
100. The program should work even if there are no entries which equal 100. See the sample
output for the expect format of the output.
Fun Fact:Dr. Chuck used this exact assignment while teaching C - LBS 290 - Fall 1991.
 */
 #include <stdio.h>
 int main() {
    int i, v, arr[10], mem_loc[10];
    int count = 0;
    for(i=0;i<10;i++) {
        scanf("%d", &v);
        arr[i] = v;
    }
    for(i=9; i >= 0; i-- ) {
        printf("numb[%d] = %d\n", i, arr[i]);
        if (arr[i] == 100) {
             mem_loc[count] = i;
             count += 1;
        }
    }

    printf("\nSearching for entries equal to 100\n\n");
    for (i = count; i > 0; i--) {
        printf("Found 100 at %d\n", mem_loc[i - 1]);
    }

    printf("\nFound %d entries with 100\n", count);
 }

 /*
 This will be provided as input to your program: Copy

 9
 5
 100
 16
 18
 20
 6
 100
 1
 77

 Expected output from your program:

 numb[9] = 77
 numb[8] = 1
 numb[7] = 100
 numb[6] = 6
 numb[5] = 20
 numb[4] = 18
 numb[3] = 16
 numb[2] = 100
 numb[1] = 5
 numb[0] = 9
  */

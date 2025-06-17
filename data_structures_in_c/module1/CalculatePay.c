/*
LBS290 Exercise 13. This program will read an un-specified number of employee time records from input.
Each time record will contain an employee number (integer), an employee rate per hour (float) and number
of hours worked. You should give the employee time-and-a-half for overtime (hours over 40). You must
write a function named calcpay() to calculate the pay. The function should have no return value and must
not use any global variables. The calculated pay should be passed out of the function using call by location.
Fun Fact:Dr. Chuck used this exact assignment while teaching C - LBS 290 - Fall 1991.
 */

 #include <stdio.h>

 void calcpay(float *p, float r, float h);

 int main() {
   int empno;
   float rate, hours, pay;

   while(1) {
     if ( scanf("%d %f %f",&empno,&rate,&hours) < 3 ) break;
     calcpay(&pay, rate, hours);
     printf("Employee=%d Rate=%.2f Hours=%.2f Pay=%.2f\n",empno, rate, hours, pay);
   }
 }
void calcpay(float *p,float r,float h) {
    if (h > 40) {
        *p = (h -40) * r * 1.5;  // caluclate overtime pay
        *p += 40 * r; // calculate non overtime pay
    }
    else {
        *p = h * r;
    }
}
 /*

 This will be provided as input to your program: Copy

 123 5.00 40
 100 4.00 45
 199 5.25 10

 Expected output from your program:

 Employee=123 Rate=5.00 Hours=40.00 Pay=200.00
 Employee=100 Rate=4.00 Hours=45.00 Pay=190.00
 Employee=199 Rate=5.25 Hours=10.00 Pay=52.50

  */

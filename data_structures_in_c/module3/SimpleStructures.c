/*
Simple Structures

You will write two function dealing with a simple strcuture as shown below.
The first function will dump the internal values of the simpledate structure.
The second will compute the day of the year similar to the sample code in
Chapter 6 of the K&R book.
 */
 #include <stdio.h>
 #include <stdlib.h>

 struct simpledate {
     int day;
     int month;
     int year;
 };

 static int day_tab[2][13] = {
   {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
   {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
 };

 int day_of_year(struct simpledate *pd);
 void dump_date(struct simpledate *pd);

 int main() {
     printf("Playing with structures\n");
     struct simpledate sd;

     sd.year = 2023;
     sd.month = 2;
     sd.day = 11;
     dump_date(&sd);
     printf("Day of year %d\n", day_of_year(&sd));

     sd.year = 2023;
     sd.month = 9;
     sd.day = 15;
     dump_date(&sd);
     printf("Day of year %d\n", day_of_year(&sd));

     sd.year = 2024;
     sd.month = 9;
     sd.day = 15;
     dump_date(&sd);
     printf("Day of year %d\n", day_of_year(&sd));
 }

 int day_of_year(struct simpledate *pd) /* set day of year from month, day */
 {
     int leap, i;
     int day_of_year = 0;
     leap = (pd->year % 4 == 0) && (pd->year % 100 != 0 || pd->year % 400 == 0);
     
     // calculate days
     for (i = 1; i < pd->month; i++) {
        day_of_year += day_tab[leap][i];
     }

     return day_of_year + pd->day;
 }

 void dump_date(struct simpledate *pd) /* print date from year, month, day */
 {
     /* The date should be in the following format - note that */
     /* The month and day are always two digits with leading zeros */
     printf("%d/%02d/%02d\n", pd->year, pd->month, pd->day);
 }
 /*
 Expected output from your program:

 Playing with structures
 2023/02/11
 Day of year 42
 2023/09/15
 Day of year 259
 2024/09/15
 Day of year 259
  */

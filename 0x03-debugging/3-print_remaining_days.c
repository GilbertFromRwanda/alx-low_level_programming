#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
*
* remove_zeros - remove leading zero
* @n: integer
* Return: void
*/

int remove_zeros(int n)
{
int r, num = 0;
while (n > 0)
{
r = n % 10;
n = n / 10;
if (r != 0)
{
num = num * 10 + r;
}
}    
n = num;
num = 0;
while (n > 0)
{
r = n % 10;
n = n / 10;
num = num * 10 + r;
}
return num;    
}
void print_remaining_days(int month, int day, int year)
{
month = remove_zeros(month);
if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
{
if (month >= 2 && day >= 60)
{
day++;
}
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 366 - day);
}
else
{
if (month == 2 && day == 60)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
}
else
{
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 365 - day);
}
}
}

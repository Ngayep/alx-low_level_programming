#include "main.h"

/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/

void print_remaining_days(int month, int day, int year)
{
	int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   	int is_leap_year = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));

	if (month < 1 || month > 12 || day < 1 || day > days_in_month[month])
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}
	int day_of_year = day;

	for (int i = 1; i < month; i++)
	{
		day_of_year += days_in_month[i];
	}
	if (is_leap_year && month > 2)
	{
		day_of_year++;
	}
	printf("Day of the year: %d\n", day_of_year);
	printf("Remaining days: %d\n", is_leap_year ? (366 - day_of_year) : (365 - day_of_year));
}

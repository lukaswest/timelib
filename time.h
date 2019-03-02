#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

/**
*
*   Header of time.c
*   include struct date
*
**/

struct date{
    int day;
    int month;
    int year;
};

int exists_date(struct date current_Date);
int is_leapyear(int year);
int get_Days_for_month(int month, int year);
int day_of_the_year(struct date current_Date);
int day_of_the_week(int day, int month,int year);
struct date input_date();
#endif // TIME_H_INCLUDED

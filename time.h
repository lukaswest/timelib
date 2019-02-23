#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

struct date{
    int day;
    int month;
    int year;
};

int exists_date(struct date Datum);
int is_leapyear(int year);
int get_Days_for_month(int month, int year);
int day_of_the_year(struct date Datum);
struct date input_date(struct date Datum);
#endif // TIME_H_INCLUDED

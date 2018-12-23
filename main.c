/**
 *
 *
 *
 **/

#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 **/

 int exists_date(int day, int month, int year){
    if ((year+month+day) <1584){
        return 0;
    }
    else if ((year+month+day) >2443){
        return 0;
    }
    else {
        return 1;
    }
 }

int get_Days_for_month(int month, int year){
    int Count[ ]={31,28,31,30,31,30,31,31,30,31,30,31};
    return Count[month-1];
}

int is_leapyear(int year){
    if ((year%4)==0){
        if ((year%100)!=0){
            return 1;
        }
        else if((year%400)==0){
                return 1;
        }
        else {
            return 0;
        }
    }
    else {
        return 0;
    }
    if (year<1582){return -1;}
}


int day_of_the_year(int day, int month, int year)
{
    int leapyear= is_leapyear(year);
    int exists =exists_date(day,month,year);
    int i=0, Anzahl=0;

    while (i<month){
        Anzahl+=get_Days_for_month(month, year);
    }
    return 10;
}

int main()
{
    printf("Tag des Jahres: %i\n", day_of_the_year(18, 12, 2018));
    return 0;
}

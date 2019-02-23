/**
 *
 *
 *
 **/

#include <stdio.h>
#include <stdlib.h>
#include "time.h"
/**
 *
 *
 **/

int main()
{
    struct date Datum;
    Datum = input_date(Datum);
    printf("Tag des Jahres: %i\n", day_of_the_year(Datum));
    //day_of_the_week(3,5);
    return 0;
}
int day_of_the_week(int day, int month,int year){
    int Tag;
    int Monat= 2.6 * month - 0.2;
    int year_viertel=year/4;
    int year_first=year;
    if(month<3){
        year_first--;
        year_first=year_first/100;
    }
    //Tag=(day+Monat+year+)
    printf("%i",Monat);
}

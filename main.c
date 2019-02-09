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
    int Tag,Monat,Jahr;
    input_date(&Tag, &Monat, &Jahr);
    printf("Tag des Jahres: %i\n", day_of_the_year(Tag, Monat, Jahr));
    //day_of_the_weak(3,5);
    return 0;
}
int day_of_the_weak(int day, int month,int year){
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

#include <stdio.h>
#include "time.h"

int exists_date(struct date Datum){
    int Tage_im_Monat=get_Days_for_month(Datum.month, Datum.year);
    if (Datum.year < 1582 || Datum.year > 2400){
        return 0;
    }
    else if (Datum.month < 1 || Datum.month > 12){
        return 0;
    }
    else if (Datum.day < 1 || Datum.day > Tage_im_Monat){
        return 0;
    }
    else {
        return 1;
    }
 }

struct date input_date(struct date Datum){
    do{
        printf("Eingabe des Tages:");
        scanf("%i", &Datum.day);
        printf("\nEingabe des Monats:");
        scanf("%i", &Datum.month);
        printf("\nEingabe des Jahres:");
        scanf("%i", &Datum.year);
    }while(exists_date(Datum)!=1);
    return Datum;
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
}
int get_Days_for_month(int month, int year){
    int leapyear= is_leapyear(year);
    int Count[ ]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(leapyear==1){
        Count[1]=29;
    }
    return Count[month-1];
}


int day_of_the_year(struct date Datum)
{
    int i=1, Anzahl=0;
    while (i<Datum.month){
        Anzahl+=get_Days_for_month(i,Datum.year);
        i++;
    }
    Anzahl+= Datum.day;
    return Anzahl;
}


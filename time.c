#include <stdio.h>

 int exists_date(int day, int month, int year){
    int Tage_im_Monat=get_Days_for_month(month, year);
    if (year < 1582 || year > 2400){
        return 0;
    }
    else if (month < 1 || month > 12){
        return 0;
    }
    else if (day < 1 || day > Tage_im_Monat){
        return 0;
    }
    else {
        return 1;
    }
 }

input_date(int *day, int *month, int *year){
    do{
        printf("Eingabe des Tages:");
        scanf("%i", day);
        printf("\nEingabe des Monats:");
        scanf("%i", month);
        printf("\nEingabe des Jahres:");
        scanf("%i", year);
    }while(exists_date(*day,*month,*year)!=1);
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


int day_of_the_year(int day, int month, int year)
{
    int i=1, Anzahl=0;
    while (i<month){
        Anzahl+=get_Days_for_month(i, year);
        i++;
    }
    Anzahl+= day;
    return Anzahl;
}


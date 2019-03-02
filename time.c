#include <stdio.h>
#include "time.h"
/**
*   check for valid date
*   year should not be smaller than 1582 or higher than 2400
**/
int exists_date(struct date current_date){
    int days_in_month=get_Days_for_month(current_date.month, current_date.year);
    if (current_date.year < 1582 || current_date.year > 2400){
        return 0;
    }
    else if (current_date.month < 1 || current_date.month > 12){
        return 0;
    }
    else if (current_date.day < 1 || current_date.day > days_in_month){
        return 0;
    }
    else{
        return 1;
    }
}
/**
*   called by main.c
*   get input from user and call the exists_date() function
**/
struct date input_date(){
    struct date current_date;
    do{
        printf("Eingabe des Tages:");
        scanf("%i", &current_date.day);
        printf("\nEingabe des Monats:");
        scanf("%i", &current_date.month);
        printf("\nEingabe des Jahres:");
        scanf("%i", &current_date.year);
    }
    while(exists_date(current_date)!=1);
    return current_date;
}
/**
*   check if entered year is leapyear
**/
int is_leapyear(int year){
    if ((year%4)==0){
        if ((year%100)!=0){
            return 1;
        }
        else if((year%400)==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        return 0;
    }
}
/**
*   get the count of days in the entered month
**/
int get_Days_for_month(int month, int year){
    int leapyear= is_leapyear(year);
    int Count[ ]= {31,28,31,30,31,30,31,31,30,31,30,31};
    if(leapyear==1){
        Count[1]=29;
    }
    return Count[month-1];
}
/**
*   called by main.c
*   add up all days to the entered month
*   call of the get_Days_for_month() function
**/
int day_of_the_year(struct date current_date){
    int i=1, Anzahl=0;
    while (i<current_date.month){
        Anzahl+=get_Days_for_month(i,current_date.year);
        i++;
    }
    Anzahl+= current_date.day;
    return Anzahl;
}
/**
*   to get the actual day in the week
*   currently unused
**/
int day_of_the_week(int day, int month,int year){
    int current_day;
    int current_month= 2.6 * month - 0.2;
    int year_viertel=year/4;
    int year_first=year;
    if(month<3){
        year_first--;
        year_first=year_first/100;
    }
    printf("%i",month);
}

/**
 *  Author: Lukas Westerfeld
 *  Date: 26.02.2019
 **/

#include <stdio.h>
#include <stdlib.h>
#include "time.h"
/**
 *  Mainfunction with call of input_date() and day_of_the_year()
 **/

int main()
{
    struct date Datum;
    Datum = input_date();
    printf("Tag des Jahres: %i\n", day_of_the_year(Datum));
    return 0;
}

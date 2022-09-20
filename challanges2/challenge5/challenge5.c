#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;

    printf("Enter the year \n");
    scanf("%d", &year);

    int month = 12; 
    int day = 365; 
    int hour = day * 24; 
    int minute = hour * 60; 
    int seconde = minute * 60; 

    if ( year%4==0) {

        printf("The year is a leap year \n");
    }

    else {
        printf("It's not a leap year \n");
    }
    printf("The number of months in year is %d \n", month );
    printf("The number of days  in year is %d \n", day );
    printf("The number of hours in year is %d \n", hour );
    printf("The number of minutes in year is %d \n", minute );
    printf("The number of secondes in year is %d \n", seconde );



    return 0;
}

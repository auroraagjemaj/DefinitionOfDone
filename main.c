/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Aurora
 *
 * Created on 21. September 2022, 09:59
 */

#include <stdio.h>
#include <stdlib.h>
/*
 * 
 */
#include <stdio.h>
int isLeapYear(int year); 
float hour;
int daysInMonth(int month, int year);
void printDateInfo(int month, int year);
int main() {
    int month;
    int year;
    printf("Geben sie den Monat ein > \n");
    scanf ("%d", &month);
    printf("Geben sie das Jahr ein > \n");
    scanf("%d", &year);
    // get user input for month and year 
    printDateInfo(month, year);
    system("pause");
    return 0;
}
int isLeapYear(int year){ // returns 1 if isLeapYear
    // returns 0 if is no LeapYear
    if(year%4 == 0&&year % 100!=0 || year%400 == 0)
        return 1;
    else 
        return 0;
}
int daysInMonth(int month, int year){
    // returns 30, 31, 28 or 29
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
            break;
        case 2:
            if ( year%4 == 0 && year%100 != 0 || year%400 == 0 ) {
                return 29;
            } else {
                return 28;
            }
            
            break;
    }
}
void printDateInfo(int month, int year){
    int days=daysInMonth(month, year);
    printf("Der Monat %d hat im Jahr %d %d Tage.", month, year, days); printf("Das Jahr %d ist ", year);
    if(!isLeapYear(year)){
        printf("kein ");
    }else{
        printf("ein ");
    }
    printf("Schaltjahr. \n");
}


     
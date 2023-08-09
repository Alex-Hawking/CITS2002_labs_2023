/*
 * ANSWERS FOR WEEK 2 QUESTION 1 
 *
 * Who did what (add a line explaining what you did and who you are)
 * 
 * - Isaac Watt: simple answer using if/else
 *
 *
 * Add code below this line
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if(argc != 2){
        exit(EXIT_FAILURE);
    }
    int year = atoi(argv[1]);
    if((year % 400 == 0) || (((year % 4 == 0) && (year % 100 != 0)))){
        printf("%d IS a leap year!\n", year);
    }
    else{
        printf("%d IS NOT a leap year\n", year);
    }
    return 0;
}

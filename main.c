/*
 * ANSWERS FOR WEEK 2 QUESTION 3
 *
 * Who did what (add a line explaining what you did and who you are)
 * 
 * - Isaac Watt - for loop which compares all command line values
 *
 *
 * Add code below this line
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argcount, char *argvalue[])
{
    int max = 0;
    if(argcount < 2){
        printf("Too few arguments");
        exit(EXIT_FAILURE);
    }
    for(int i = 1; i <= argcount - 1; i++){
    int value = atoi(argvalue[i]);
        if(value > max){
            max = value;
        }
    }
    
    printf("maximum is %i\n", max);
    return 0;
    
}

/*
 * ANSWERS FOR WEEK 2 QUESTION 10 
 *
 * Who did what (add a line explaining what you did and who you are)
 * 
 * - Isaac Watt - uses arrays to store values of numerals and their respective values (could potentially use enums) and / to check if a bound is surpassed
 *
 *
 * Add code below this line
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void roman(int value){
    int bounds[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1}; // Extra values to prevent > 3 of the same consecutive symbol 
    char *numerals[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" }; // Example: 400 is added to prevent the cased of CCCC
    char str[100] = "\0"; //initialise a string with null char         
    int i = 0;                   
    while (value != 0){                 
        
        
        
        while ((value / bounds[i])){      
            strcat(str, numerals[i]); 
            value = value - bounds[i];       
        }
        i++;                     
    }
    printf("%s\n", str);
}


int main(int argc, char *argv[]){
    if(argc != 2){
        printf("Wrong number of arguments provided,\nPlease provide a single integer\n");
        exit(EXIT_FAILURE);
    }
    int max = atoi(argv[1]);
    for(int i = 1; i <= max; ++i){
        roman(i);
    }
    
    return 0;

}

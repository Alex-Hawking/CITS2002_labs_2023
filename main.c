/*
 * ANSWERS FOR WEEK 2 QUESTION 8
 *
 * Who did what (add a line explaining what you did and who you are)
 * 
 * - Isaac Watt - pretty sure this is right? someone might want to double check
 * just uses the trivial ackermanns solution, along with a few global variables to count depth and calls
 *
 *
 * Add code below this line
 */

#include <stdio.h>
#include <stdlib.h>


int calls = 0;
int maxDeep = 0;


int ackerman(int m, int n, int deep)
{
    if(deep > maxDeep) maxDeep = deep;

    calls++;
    
    if (m == 0){
        return n+1;
    }
    else if((m > 0) && (n == 0)){
        return ackerman(m-1, 1, deep + 1);                                     
    }
    else if((m > 0) && (n > 0)){
        return ackerman(m-1, ackerman(m, n-1, deep + 1), deep + 1); 
    }
}


int main(int argc, char *argv[]){
    int value;
    int calls;
    value = ackerman(3, 2, 1); // 1 indicating initial depth
    printf("Result Value: %d\n", value);
    printf("Number of recursive calls: %d\n", calls);
    printf("Maximum Depth: %d\n", maxDeep);
    return 0;
 
}

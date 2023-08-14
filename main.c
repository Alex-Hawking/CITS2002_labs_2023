/*
 * ANSWERS FOR WEEK _ QUESTION _ 
 *
 * Who did what (add a line explaining what you did and who you are)
 * 
 * - 
 *
 *
 * Add code below this line
 */

#include <stdio.h>
#include <stdlib.h>

int my_strlen(char string[]) {
    int i = 0;
    while (string[i]) {
        i++;
    }
    return i;
}

int main(int argc, char *argv[]) {
    //Code here

    printf("%i\n", my_strlen(argv[1]));

    return 0;
}

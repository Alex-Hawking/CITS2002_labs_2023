/*
 * ANSWERS FOR WEEK _ QUESTION _ 
 *
 * Who did what (add a line explaining what you did and who you are)
 * 
 * - Alex Hawking: used a greedy algorithm to get minimum change possible
 *
 *
 * Add code below this line
 */

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Get cents as whole assuming product price is represented as decimal
    int product_price = atof(argv[1]) * 100;
    int denominations[] = {50, 20, 10, 5, 2, 1}; 

    int num_coins = 6;

    for (int i = 0; i < num_coins; i++) {

        int amount = 0;
        int current_coin = denominations[i];

        while (product_price - current_coin >= 0) {
            product_price -= current_coin;
            amount++;
        }
        printf("%dc : %d\n", current_coin, amount); 
    }

    return 0;
}

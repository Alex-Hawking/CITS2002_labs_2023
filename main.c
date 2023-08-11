/*
 * ANSWERS FOR WEEK _ QUESTION _ 
 *
 * Who did what (add a line explaining what you did and who you are)
 * 
 * - Alex Hawking, this code just makes a christmas tree cos I thought that was probably the hardest one
 *
 *
 *
 * Add code below this line
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_WIDTH 50

void print_tree(char tree[][MAX_WIDTH], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < (size * 2) - 1; j++) {
            printf("%c", tree[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char *argv[]) {

    /*
     * First argument is the height of the tree 
     */

    int size = atoi(argv[1]);
    char style = '*';  

    if (size < 0 || size >= 50) {
        fprintf(stderr, "Please provide an accepted tree size. (1-50)\n");
        return 1;
    }

    char tree[size][MAX_WIDTH];

    int num_stars = -1;

    for (int i = 0; i < size; i++) {
        num_stars += 2;
        int width = (size * 2) - 1;
        int half = floor(width / 2);
        int star_buffer = (num_stars - 1) / 2;

        int start_index = half - star_buffer;
        int end_index = half + star_buffer;

        for (int j = 0; j < width; j++) {
            if (j >= start_index && j <= end_index) {
                tree[i][j] = style;
            } else {
                tree[i][j] = ' ';
            }
        }
    }

    print_tree(tree, size);

    return 0;
}
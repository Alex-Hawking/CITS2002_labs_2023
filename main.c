/*
 * ANSWERS FOR WEEK _ QUESTION _ 
 *
 * Who did what (add a line explaining what you did and who you are)
 * 
 * - Random, see much better than strings.
 *
 *
 * Add code below this line
 */

#include <stdio.h>
#include <stdbool.h>


//comments assume base 10 for ease of explanation
void superloop(int Nest, int Base){
    int SuperArr[Nest]; // establishing the array that holds the values for the "nested loops" with zero
    for(int j=0; j< Nest;j++){
        SuperArr[j] = 0;
    }
    bool notfullA = true; // if are we not at the "99999" limit
    while(notfullA){
        if (SuperArr[0] < Base - 1){//increasing the first value by 1 if it is less than the base. 
            SuperArr[0]++;
        }
        else{
            for(int i=Nest-1; i>=0; i--){//starting at the end of the array check for any "9"s
                if(SuperArr[i] == Base -1){
                    for(int j=i; j>=0; j--){// if there is a "9" then go  and check if ALL values before it are also "9"
                        if(SuperArr[j] == Base -1){
                            if(j == 0){//if the first value is a "9"
                                if(i == Nest -1){//and the last
                                    notfullA = false;//go home array is full
                                }
                                SuperArr[i+1]++; //increment next value and set all the "9s" to 0 this will try set a full array to 00s but that's intentional
                                for(int k=0; k< i+1; k++){
                                    SuperArr[k] = 0;
                                }
                            }
                            continue;
                        }
                        else{
                            break;//no 9s? go to the next value in the array and start again since 99099 still needs to be incremented 
                        }
                    }
                }
            }
        }
        
    for(int j=0; j < Nest; j++) {printf("%i", SuperArr[j]);}
    printf("\n");
    }
        
}

int main(void){
    
    superloop(100,4);

    return 0;
}

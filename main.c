/*
 * ANSWERS FOR WEEK _ QUESTION _ 
 *
 * Who did what (add a line explaining what you did and who you are)
 * 
 * - Random, is good but fuck me strings suck in c.
 *
 *
 * Add code below this line
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isEnd(char stringSent){
    return stringSent == '\0';
}

void replace( char oldword[], char newword[], char whole_sentence[] ){
    //establish variables
    char ReturnString[100];
    int i = 0; 
    int s = 0;
    int lenOldWord = strlen(oldword);
    int lenNewWord = strlen(newword);

    /*
    while the sentence isnt at the end, check each letter against oldword's starting letter, then check if the rest of the word matches to the sentence 
    if you reach the last letter and they all match, write the new word to the answer string, and move the index up to acommodate for the old word "not being
    there" if it ddoesnt completely match just write the incompleted old word to the answer string, and if not even the first letter matches just write the 
    sentence character to answer.
    */
   
    while(! isEnd(whole_sentence[i])){
        if(whole_sentence[i] == oldword[0]){
            for(int j=1; j < lenOldWord; j++){
                if(whole_sentence[i+j] == oldword[j]){
                    if(j == lenOldWord -1){
                        for(int n=0;n<lenNewWord;n++){
                            ReturnString[s] = newword[n];
                            s++;
                        }
                        i += lenOldWord;
                    }
                    continue;
                }
                else{
                    ReturnString[s] = whole_sentence[i];
                    s++;
                    i++;
                }
                break;
            }
        }
        else{
            ReturnString[s] = whole_sentence[i];
            s++;
            i++;
        }
    }
    printf("%s\n", ReturnString);
}

int main(int argc, char* argv[]){
    if(argc != 4){
        exit(EXIT_FAILURE);
    }

    replace(argv[1], argv[2], argv[3]);

    return 0;
}

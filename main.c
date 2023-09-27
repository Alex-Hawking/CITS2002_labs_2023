/*
 * ANSWERS FOR Week 9 lab 5 _ QUESTION 5 and by extension 4 _ 
 *
 * Who did what (add a line explaining what you did and who you are)
 * 
 * - Random
 *
 *
 * Add code below this line
 */

#include <stdio.h>
#include <unistd.h>

void Count(char * filename, int returnArr[4]){//initialise the counts from 0, we count all values and only print the ones that are asked for.
    int LineNum =0;
    int CharNum =0;
    int WordNum =0;
    int LongestLine =0;

    FILE *inputFile;//yada yada standard openfile
    char line[1000];
    inputFile = fopen(filename, "r");
    while(fgets(line, 1000, inputFile)!= NULL){
        LineNum++;
        int LineLeng =0;
        int i = 0;
        while(line[i] != '\0') {\
            CharNum++;
            LineLeng++;
            if((line[i] != '\0' &&//if the current letter is not a whitespace and the next one is a whitespace thats a word.
            line[i] != ' ' &&
            line[i] != '\n' &&
            line[i] != '\t')  &&(
            line[i+1] == '\0' ||
            line[i+1] == ' ' ||
            line[i+1] == '\n' ||
            line[i+1] == '\t' 
            )){
                WordNum++;
            }
            i++;
        }
        if(LineLeng > LongestLine){//is this the longest????
            LongestLine = LineLeng;
        }
    }

    returnArr[0] = LineNum;
    returnArr[1] = CharNum;
    returnArr[2] = WordNum;
    returnArr[3] = LongestLine;//theres probably a better way to do this but i dont care at the moment.

}

int main(int argc, char * argv[]){
    int CountArr[4];//init count values
    int opt;//options char
    int bArgCall;//are there any options at all
    int FileInd;// which argument in argv is the file name actually stored at?
    for(int i=1; i< argc; i++){
        if(argv[i][0] != '-'){
            FileInd = i;
            break;
        }
    }

    Count(argv[FileInd], CountArr);//count up

    printf("wc\n");//header
    while((opt = getopt(argc, argv, "clLw")) != -1) { 
        bArgCall =1;//theres an option so we print the requested data 
        switch(opt) { 
            case 'c': 
                printf("%i Characters. \n", CountArr[1]);
                break;
            case 'l': 
                printf("%i Lines. \n", CountArr[0]);
                break;
            case 'L': 
                printf("%i Longest Line Length. \n", CountArr[3]);
                break;
            case 'w': 
                printf("%i Words. \n", CountArr[2]);
                break;
        } 
    }
    if(bArgCall  ==0){// no options then print all
        printf("%i Lines. \n%i Characters. \n%i Words. \n%i Longest Line Length. \n", CountArr[0], CountArr[1], CountArr[2], CountArr[3]);
    }
    return 0;
}

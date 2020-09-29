#include <stdio.h>
#define BUFSIZE 200
#define FILENAME "data.txt"

int main(void){
    FILE *dataFile;
    char buffer[BUFSIZE];
    int lineNo=0;

    //open file data.txt in read mode
    dataFile = fopen(FILENAME, "r");
    if(dataFile == NULL){
        fprintf(stderr, "Unable to open %s.\n", FILENAME)

}
}
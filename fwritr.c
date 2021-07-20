#include <string.h>
#include <stdio.h>
#define MAXLINES 20
/*basic text editor program*/
main(){
    int lines = 0;
    FILE *f;
    char path[100];
    char text[200];
    printf("Enter the filepath: \n");
    fgets(path, 100, stdin); //gets the place where the file is located; if it doesn't exist, it is generated 
    path[strlen (path) - 1] = '\0'; //removes the new line from fgets so we actually get the path 
    f = fopen(path, "a");
    while (lines <= MAXLINES){
        fgets(text, 200, stdin);
	fputs(text, f);
        ++lines;
    }
    fclose(f);
}

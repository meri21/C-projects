#include <stdio.h>
#include <string.h>
main(){
    FILE *f;
    char path[100];
    int c;
    printf("Enter the filepath: \n");
    fgets(path, 100, stdin);
    path[strlen (path) - 1] = '\0';
    f = fopen(path, "r");
    c = fgetc(f);
    while (1) {
        if (feof(f)){
	    goto eof;
        }
        fputc(c, stdout);
        c = fgetc(f);
    }
    eof:
        fclose(f);
}

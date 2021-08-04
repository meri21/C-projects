#include <stdio.h>

void show(FILE* f){
    char c;
    while ((c = getc(f)) != EOF) putc(c, stdout);
}

main(int argc, char** argv){
    FILE* file;
    if (argc == 1){
        printf("freadr: no file given \n");
        return 1;
    }
    file = fopen(argv[1], "r");
    show(file);
    fclose(file);
}


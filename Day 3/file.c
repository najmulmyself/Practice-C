#include <stdio.h>
int main(){
    FILE *fp;

    char filename[] = "my_file.txt";

    fp = fopen(filename,"w");

    fprintf(fp,"This is a file Created by my Program");
    fprintf(fp,"I am also Happy");

    fclose(fp);

    return 0;
}
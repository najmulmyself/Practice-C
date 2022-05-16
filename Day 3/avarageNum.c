#include <stdio.h>
int main(){


    FILE *math , *english , *bangla *avarage;
    char *math_num = "math.txt";
    char *english_num = "english.txt";
    char *bangla_num = "bangla.txt";
    char *avarage_num = "avarage.txt";

    int m,b,e,avg;

    math = fopen(math_num,"r");
    english = fopen(english_num,"r");
    bangla = fopen(bangla_num,"r");
    avarage = fopen(avarage_num,"w");

    fscanf(math,"%d",&m);
}
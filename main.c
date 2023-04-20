/*Defina una función que reciba dos cadenas de caracteres y calcule la unión entre
ambas, devolviéndola en una nueva cadena de caracteres.
*/
#include<stdio.h>
void unionfn(char *, char *);

int main(){
    char c1[1000], *c1ptr, c2[1000], *c2ptr;
    printf("Ingrese dos cadenas de caracteres\n");
    gets(c1);
    gets(c2);
    c1ptr = &c1[1000];
    c2ptr = &c2[1000];
    unionfn(c1ptr, c2ptr);
    return 0;
}
void unionfn(char *c1ptr, char *c2ptr){
    char cadun[2000];
    int i, c=0;
    for(i=0; c1ptr[i]!='\0';i++){
        cadun[i] = c1ptr[i];
        c++;
    }
    for(i=0; c2ptr[i]!='\0'; i++){
        cadun[c+i] = c2ptr[i];
    }

    puts(cadun);
}
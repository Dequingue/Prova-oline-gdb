/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>

#define REP 5

int main(){
    setlocale(LC_ALL , "");
    
    int quantidadeMaior =0, quantidadeMenor = 9999;
    int i,j, numeros[REP];
    
    for(i = 0; i < REP; i++){
     printf("Digite %dº número: ", i+1);
     scanf("%i",&numeros[i]);
     
        if(numeros[i] > quantidadeMaior){
            quantidadeMaior = numeros[i];
        }
        if(numeros[i] < quantidadeMenor){
            quantidadeMenor = numeros[i];
        
        }
    }

    
    printf("\nMaior número: %i \n", quantidadeMaior);
    printf("\nMenor número: %i \n", quantidadeMenor);

    return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>

#define REP 6


int main(){
  setlocale(LC_ALL, "");
      
    int i, numeros[REP];
    int pares =0, impares =0;
    
    for(i=0; i <REP; i++){
        printf("Digite o %dº número: ",i+1);
        scanf("%i",&numeros[i]);
        
        if(numeros[i] % 2 == 0){
            pares++;
        }else{
            impares++;
        }
    }
    system("cls || clear");
    
    printf("\n=== EXIBIR ===\n");
     for(i=0; i <REP; i++){
        printf("%dº numero: %i \n",i+1,numeros[i]);
    }
    
    printf("\nNúmeros pares: %i \n",pares);
    printf("\nNúmeros impares: %i \n", impares);
    
    return 0;
}

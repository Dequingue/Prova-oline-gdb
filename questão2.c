/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<locale.h>


int main(){
    setlocale(LC_ALL, "");
    
    int numero=0, media = 0, soma=0;
    int contador = 0;
    
    do{
        printf("Digite o %dº numero: ",contador+1);
        scanf("%i",&numero);
        contador = contador + 1;
        
        if(numero > 0){
        soma = soma + numero;
        media = soma/contador;
        }
        
    }while(numero >= 0);
    
    
    
   
    printf("media: %i",media);
    return 0;
}

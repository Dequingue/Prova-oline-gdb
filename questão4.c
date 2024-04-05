/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<locale.h>

#define lol 2

int main(){
  setlocale(LC_ALL , "");
  
  int i, nota[lol], media=0, soma=0,contador= 0;
  char nome[200];
  
  for(i = 0; i < lol; i++){
      printf("Digite a nota da %dª unidade: ",i+1);
      scanf("%i",&nota[i]);
      contador++;
      
      soma += nota[i];
      media = soma/contador;
  }
    
    for(i = 0; i < lol; i++){
        printf("%dª Nota do aluno: %i \n",i+1,nota[i]);
       
    }
    
    
     printf("Media do aluno: %i",media);
     
    return 0;
}

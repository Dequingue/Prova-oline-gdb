/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "");
    
    int opcao=0;
    char nomes[200], email[200];
    int idade=0, telefones=0;
    
    printf("==== MENU ====\n");
    printf("\n1 - Nome");
    printf("\n2 - Idade");
    printf("\n3 - E-mail");
    printf("\n4 - Telefone");
    printf("\n5 - Exibir");
    printf("\n0 - sair do sistema");
    
    do{
    printf("\nDigite o número de sua escolha: ");
    scanf("%i",&opcao);
    
    switch(opcao){
        
        case 1:
        printf("Digite seu nome: ");
        scanf("%s",&nomes);
      
        break;
        case 2:
        printf("Digite sua idade: ");
        scanf("%i",&idade);
      
        break;
        case 3:
        printf("Digite seu E-mail: ");
        scanf("%s",&email);
      
        break;
        case 4:
        printf("Digite seu Telefone: ");
        scanf("%i",&telefones);
        
        break;
        case 5:
        system("cls || clear");
        
        printf("\nEsse é sue nome: %s \n",nomes);
        printf("\nEssa é sua idade: %i \n",idade);
        printf("\nEsse é seu E-mail: %s \n",email);
        printf("\nEesse é seu Telefone: %i \n",telefones);
        
        break;
        case 0:
        system("cls || clear");
        printf("\nFechando sistema.....");
        
        break;
        
        default:
        printf("\nOpção invalida !!!");
    }
    
    }while(opcao != 0);
    
    
    return 0;
}

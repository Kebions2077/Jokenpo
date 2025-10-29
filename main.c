#include <stdio.h>
#include <string.h>
#include <time.h>

#define TAM 30
void clear(void){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main(void){
    srand(time(NULL));
    char nome[TAM];
    int pontuação = 0;
    int op_cpu,op_player;
    op_cpu=0;
    op_player=0;
    
    printf("---------------------------\n");
    printf("Pedra, Papel e Tesoura\n");
    printf("---------------------------\n");
    printf("Digite seu nome: ");
    fgets(nome, TAM, stdin);
    nome[strcspn(nome, "\n")] = 0; 
    clear();
    do{
    printf("Pontuação:%i",pontuação);
    printf("------------------------------\n");
    printf("1) Pedra\n2) Papel\n3) Tesoura\n4)Sair\n");
    printf("------------------------------\n");
    printf("Digite uma opção:\n");
    scanf("%i",&cpu_player);
    if(op_player<4){
      op_cpu= (rand() % 3)+1;
      if(op_player==cpu_op){
        printf("empate\n");
        pontação=pontuação+0;
      }
      if(op_player== 1
      
        
    }


}

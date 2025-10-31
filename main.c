<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define TAM 30
void clear(void){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main(void){
    srand((unsigned)time(NULL));
    char nome[TAM];
    int pontuacao = 0;
    int op_cpu, op_player;
    op_cpu = 0;
    op_player = 0;
    
    printf("---------------------------\n");
    printf("Pedra, Papel e Tesoura\n");
    printf("---------------------------\n");
    printf("Digite seu nome: ");
    fgets(nome, TAM, stdin);
    nome[strcspn(nome, "\n")] = 0; 
    clear();
    do{
        printf("Pontuação: %i\n", pontuacao);
        printf("------------------------------\n");
        printf("1) Pedra\n2) Papel\n3) Tesoura\n4) Sair\n");
        printf("------------------------------\n");
        printf("Digite uma opção:\n");
        if (scanf("%i", &op_player) != 1) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            printf("Opção inválida.\n");
            op_player = 0;
            continue;
        }
        if (op_player == 4) {
            break;
        }
        if (op_player < 1 || op_player > 3) {
            printf("Opção inválida.\n");
            continue;
        }
        op_cpu = (rand() % 3) + 1;
        if (op_player == op_cpu) {
            printf("Empate!\n");
        }
        else if ((op_player==1 && op_cpu==3) || (op_player==2 && op_cpu==1) || (op_player==3 && op_cpu==2)) {
            printf("Você ganhou!\n");
            pontuacao++;
        }
        else{
            printf("Você perdeu!\n");
            pontuacao--;
        }
        
    } while (op_player != 4);

    printf("Obrigado por jogar, %s! Pontuação final: %i\n", nome, pontuacao);
    return 0;
}
=======
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
>>>>>>> d198a8a4b8f1775977e0797bfa631fc675c2be31

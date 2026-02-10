//#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    //int movTorre = 5, movBispo = 5, movRainha = 8, movCavalo = 3;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    //printf("Movimentar o BISPO 5 casas na diagonal, para cima e para direita:\n");

    //for(int b = 1; b <= movBispo; b++){
    //    printf("%d - Cima\n", b);
    //    printf("%d - Direita\n", b);
    //};
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    //printf("Movimentar a TORRE 5 casas para a direita:\n");

    //int t = 1;

    //while (t <= movTorre){
    //    printf("%d - Direita\n", t);
    //    t++;
    //};
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    //printf("Movimentar a RAINHA 8 casas para a esquerda:\n");

    //int r = 1;

    //do{
    //    printf("%d - Esquerda\n", r);
    //    r++;
    //} while (r <= movRainha);

        
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    //printf("Movimentar o CAVALO 2 casas para a baixo e 1 casa  para a esquerda:\n");

    //for(int c = 1; c <= movCavalo; c++){

    //    while (c<=2)
    //    {
    //        printf("%d - Baixo\n", c);
    //        c++;
    //    };
        
    //    printf("%d - Esquerda\n", c);
    //};

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    #include<stdio.h>

void moveTorre(int casas){
    if(casas > 0 ){
        moveTorre(casas - 1);
        printf("%d - Direita\n", casas);
    }
}

void moveRainha(int casas){
    if(casas > 0 ){
        moveRainha(casas - 1);
        printf("%d - Esquerda\n", casas);
    }
}

void moveBispo(int casas){
    if(casas > 0 ){
        moveBispo(casas - 1);
        printf("%d - Cima\n", casas);
        printf("%d - Direita\n", casas);
    }
}

int main(){

    int movTorre = 5, movBispo = 5, movRainha = 8, movCavalo = 3;

    // Movimentação da peça TORRE "WHILE"
    printf("Movimentar a TORRE 5 casas para a direita:\n");

    ///int t = 1;

    //while (t <= movTorre){
    //    printf("%d - Direita\n", t);
    //    t++;
    //};

    moveTorre(movTorre);



    // Movimentação da peça BISPO "FOR"
    printf("Movimentar o BISPO 5 casas na diagonal, para cima e para direita:\n");

    // for(int b = 1; b <= movBispo; b++){
    //     printf("%d - Cima\n", b);
    //     printf("%d - Direita\n", b);
    // };

    moveBispo(movBispo);

    // Movimentação da peça RAINHA "DO WHILE"
    printf("Movimentar a RAINHA 8 casas para a esquerda:\n");

    // int r = 1;

    // do{
    //     printf("%d - Esquerda\n", r);
    //     r++;
    // } while (r <= movRainha);

    moveRainha(movRainha);


    // Movimentação da peça CAVALO "FOR E WHILE"
    printf("Movimentar o CAVALO 2 casas para a baixo e 1 casa  para a esquerda:\n");

    for(int c = 1; c <= movCavalo; c++){

        while (c<=2)
        {
            printf("%d - Baixo\n", c);
            c++;
        };
        
        printf("%d - Esquerda\n", c);
    };
}

    return 0;
}

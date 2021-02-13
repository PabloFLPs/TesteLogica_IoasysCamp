/*Programador: Pablo Felipe - Data: 13/02/2020*/
/* mediafinal = (n1 * 2 + n2 * 3 + n3 * 5) / soma_pesos*/

#include <stdio.h> //Inclui a lib responsavel pelo "printf"

#define soma_pesos 10 //Definindo uma variavel para a soma dos pesos (2 + 3 + 5 = 10)

float calcula_media(float soma){
    printf("%.2f", soma/soma_pesos); //Imprime o calculo da media
    return 0; //Sai do programa
}

void main(){
    int peso[3] = {2,3,5}; //Definindo um vetor com o valor padrao dos 3 pesos
    float nota; //Variavel do tipo "float" para as notas, ja que nao se tratam somente de valores inteiros
    float soma = 0; //Variavel para somar as notas ja calculadas por peso

    for(int i=0; i<3; i++){ //Laco de repeticao para entra com as notas do aluno
        printf("Digite a nota do aluno: "); //Imprime a instrucao p o user
        scanf("%f", &nota); //Armazena o valor digitado no endereco de memoria onde "nota" esta
        nota = nota * peso[i]; //Calcula a nota pelo peso da mesma
        soma = soma + nota; //Soma as notas por peso
    }
    printf("\nA media e: "); //Imprime a informacao do prox dado a ser impresso
    calcula_media(soma); //Chama a funcao p o calculo da media
}

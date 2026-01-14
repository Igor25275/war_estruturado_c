#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct 
    {
        char nome[30];
        char cor[10];
        int tropas;
    } territorio;

void mundo_war(territorio *territorios){
    printf("=============================\n");
        printf("= Mapa mundo atual          =\n");
        printf("=============================\n");
        for (int j = 0; j < 5; j++)
        {
            printf("%d - %s (exercicito: %s, tropas: %d).\n", j+ 1, territorios[j].nome, territorios[j].cor, territorios[j].tropas);
    
        }
}

void cadastro_territorio(territorio *territorios){
    for (int i = 0; i < 5; i++)
        {
            printf("Territorio %d\n", i + 1);

            printf("Informe o nome: ");
            scanf("%s", territorios[i].nome);

            printf("Informe a Cor: ");
            scanf("%s", territorios[i].cor);

            printf("Informe a quantidade de tropas: ");
            scanf("%d", &territorios[i].tropas);

            printf("\n");
        }
}

int main(){
    
    territorio *territorios = malloc(5 * sizeof(territorio));


    int expressao;
    
    printf("=============================\n");
    printf("= Cadastro de territórios   =\n");
    printf("= 1 - iniciar               =\n");
    printf("= 2 - cancelar              =\n");
    printf("=============================\n");
    scanf("%d", &expressao);

    if (expressao == 1)
    {
        cadastro_territorio(territorios);
        mundo_war(territorios);
    }


    


    return 0;
}  
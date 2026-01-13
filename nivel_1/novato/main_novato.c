#include <stdio.h>
#include <string.h>

int main(){

    // Criação da struct: definir uma struct chamada Territorio com os campos char nome[30], 
      //   char cor[10] e int tropas.

    typedef struct 
    {
        char nome[30];
        char cor[10];
        int tropas;
    } territorio;

    //Cadastro dos territórios: o sistema deve permitir que o usuário cadastre cinco territórios informando o nome, 
      //cor do exército e o número de tropas de cada um.

    territorio territorios[5] = {};
    int expressao;
    
    printf("=============================\n");
    printf("= Cadastro de territórios   =\n");
    printf("= 1 - iniciar               =\n");
    printf("= 2 - cancelar              =\n");
    printf("=============================\n");
    scanf("%d", &expressao);

    switch (expressao)
    {
    case 1:
            for (int i = 1; i <= 5; i++)
        {
            printf("Territorio %d\n", i);

            printf("Informe o nome: ");
            scanf("%s", territorios[i].nome);

            printf("Informe a Cor: ");
            scanf("%s", territorios[i].cor);

            printf("Informe a quantidade de tropas: ");
            scanf("%d", &territorios[i].tropas);
        }
        
            // Exibição dos dados: o sistema deve exibir as informações
            // de todos os territórios registrados após o cadastro.
        printf("=============================\n");
        printf("= Territórios registrados   =\n");
        printf("=============================\n");
        for (int j = 1; j <= 5; j++)
        {
            printf("Território %d\n", j);
            printf("Nome: %s \n", territorios[j].nome);
            printf("cor: %s \n", territorios[j].cor);
            printf("Tropas: %i \n", territorios[j].tropas);
            printf("\n");
            printf("\n");
    
        }
        break;
    
    default:

        printf("Muito obrigada!!..");
        printf("Saindo do loop\n");
        break;
    }


    return 0;
};  
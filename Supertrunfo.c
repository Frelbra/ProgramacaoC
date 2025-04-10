#include <stdio.h>

int main(){

    int populacao1, populacao2;
    int pontosturistico1, pontosturistico2;
    float pib1, pib2;
    float Area1, Area2;
    char estado1[20];
    char estado2[20];
    char nome1[30];
    char nome2[30];
    char codigo1[4] = "A01";
    char codigo2[4] = "B02";

    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6;
    
    float densidade1, densidade2;
    float pibcapital1, pibcapital2;
    float super1, super2;
    
    printf("*** Super Trunfo ***\n");
    printf("\n");
    
    //Escolher qual vai ser as duas cidades e os dois estados
    printf("Escreva um nome do primeiro estado\n");
    printf("Escreva o nome: ");
        fgets(estado1, 20, stdin);
    
    printf("\n");
    
    printf("Escreva um nome do segundo estado\n");
    printf("Escreva o nome: ");
        fgets (estado2, 20, stdin);
    
    printf("\n");
    printf("---------------------------------------------------\n");
    
    printf("Agora você deve escolher o nome da primeira cidade.\n");
    printf("No caso o nome da cidade que fique em %s. \n", estado1);
    printf("Escreva o nome: ");
        fgets (nome1, 30, stdin);
    
    printf("\n");
    
    printf("Agora você deve escolher o nome da segunda cidade.\n");
    printf("No caso o nome da cidade que fique em %s. \n", estado2);
        printf("Escreva o nome: ");
        fgets (nome2, 30, stdin);
    
        printf("\n");
            printf("--------------------------------------------------- \n");
    
    //Area em km²
    printf("Agora que sabemos o nome dos estados e das cidade, vamos determinar as Áreas delas em Km²\n\n");
    printf("Digite uma sequencia de números para primera cidade. (Ex: 123456.78)\n");
        scanf("%f", &Area1);
        
        printf("\n");
    
    printf("Digite uma sequencia de números para segunda cidade. (Ex: 123456.78)\n");
        scanf("%f", &Area2);
        
    /*printf("A área da cidade é de %.2f Km²\n", Area1);
    printf("A área da cidade é de %.2f Km²\n", Area2);*/
    
        printf("\n");
            printf("--------------------------------------------------- \n");
            
    //População
    printf("Vamos agora determinar o numero populacional das duas ciades. \n\n");
    printf("Digite o número populacional da 1° cidade. (Ex: 12345600)\n");
        scanf("%d", &populacao1);
        
        printf("\n");
        
    printf("Digite o número populacional da 2° cidade. (Ex: 12345600)\n");
        scanf("%d", &populacao2);
        
        printf("\n");
            printf("--------------------------------------------------- \n");
            
    //Pontos turísticos 
    printf("Vamos agora determinar o numero de pontos turísticos das duas ciades. \n\n");
    printf("Digite o número de pontos turísticos da 1° cidade. (Ex: 50)\n");
    scanf("%d", &pontosturistico1);
    
        printf("\n");
    
    printf("Digite o número de pontos turísticos da 2° cidade. (Ex: 50)\n");
    scanf("%d", &pontosturistico2);
    
        printf("\n");
            printf("--------------------------------------------------- \n");
    
    //PIB
    printf("Agora vamos descobrir o PIB das cidades.\n\n");
    printf("Digite o PIB da 1° cidade. (Ex: 234.00 'Milhões')\n");
    printf("Digite o PIB: ");
        scanf("%f", &pib1);
        
        printf("\n");
        
    printf("Digite o PIB da 1° cidade. (Ex: 234.00 'Milhões')\n");
    printf("Digite o PIB: ");
        scanf("%f", &pib2);
        
        printf("\n");
            printf("--------------------------------------------------- \n");
    //Densidade populacional
    
    densidade1 = populacao1 / Area1;
    densidade2 = populacao2 / Area2;
    
    //printf("Densidade populacional é: %.2f", divisao1);
    
    //PIB per capita   
    
    pibcapital1 =  pib1 / populacao1;
    pibcapital2 =  pib2 / populacao2;
    
    //super poder
    
    super1 = populacao1 + pib1 + Area1 + densidade1 + pibcapital1;
    super2 = populacao2 + pib2 + Area2 + densidade2 + pibcapital2;


    //vamos ver
    
    printf("Agora que adicionamos todas as informações, vamos iniciar o jogo.\n\n");
    printf("Vamos ver uma batalha entre as duas cartas e ver quem será o vencerdor.\n");
    printf("\n");
    printf("Vamos vamos ver quem será o vencerdor.\n");

    printf("\n");
            printf("--------------------------------------------------- \n");
            
    printf("** CARTA 1 **\n");
    
    printf("Estado: %s\n", estado1);
    printf("Nome da cidade: %s \n", nome1);
    printf("Código da carta: %s \n", codigo1);
    printf("População: %d \n", populacao1);
    printf("Área em Km²: %.2f Km²\n", Area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turisísticos: %d \n", pontosturistico1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibcapital1);
    printf("Super poder: %.2f \n", (float)super1);
    
            printf("--------------------------------------------------- \n");
    
    printf("** CARTA 2 **\n");    
    
    printf("Estado: %s \n", estado2);
    printf("Nome da cidade: %s \n", nome2);
    printf("Código da carta: %s \n", codigo2);
    printf("População: %d \n", populacao2);
    printf("Área em Km²: %.2f Km²\n", Area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turisísticos: %d \n", pontosturistico2);
    printf("Densidade populacional: %.2f  hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibcapital2);
    printf("Super poder: %.2f \n", (float)super2);
    
            printf("--------------------------------------------------- \n");
         printf("\n");
         
    printf("** Ganhadores do Jogo **");
    printf("\n");
    printf("OBS: Se caso a carta 1 ganhar, será exibido um número '1', se a carta 2 ganhar, será exibido o numero '0'. \n");
    
    printf("** TABELA **\n");
    
    resultado1 = populacao1 > populacao2;
    resultado2 = Area1 > Area2;
    resultado3 = pib1 > pib2;
    resultado4 = pontosturistico1 > pontosturistico2;
    resultado5 = densidade1 > densidade2;
    resultado6 = pibcapital1 > pibcapital2;



    printf("POPULAÇÃO 1 é maior que POPULAÇÃO 2? %d\n", resultado1);
    printf("Área 1 é maior que Área 2? %d\n", resultado2);
    printf("PIB 1 é maior que PIB 2? %d\n", resultado3);
    printf("Pontos turisísticos 1 é maior que Pontos turisísticos 2? %d\n", resultado4);
    printf("Densidade populacional 1 é maior que Densidade populacional 2? %d\n", resultado5);
    printf("PIB per capita 1 é maior que PIB per capita 2? %d\n", resultado6);

    return 0;

}

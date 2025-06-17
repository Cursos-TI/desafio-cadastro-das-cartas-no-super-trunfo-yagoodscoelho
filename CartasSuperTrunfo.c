#include <stdio.h>

#include <stdio.h>
    int main(){

        float populacao1, populacao2, pib1, pib2, area1, area2, letra1, letra2;
        int turistico1, turistico2;
        char codigo1[10], codigo2[10], cidade1[10], cidade2[10];
        char inicial1[1], inicial2[1];
        char nome1[10], nome2[10];

        printf("Digite o nome da primeira cidade:\n");
        scanf("%s", &cidade1);

        printf("Digite a primeira letra do nome da cidade:\n");
        scanf("%c", &letra1);

        printf("Digite a população da primeira cidade:\n");
        scanf("%f", &populacao1);

        printf("Digite o pib da primeira cidade:\n");
        scanf("%f", &pib1);

        printf("Digite a área da primeira cidade:\n");
        scanf("%f", &area1);

        printf("Digite o Codigo da primeira cidade com 3 digitos:\n");
        scanf("%c", &codigo1);

        printf("O nome da cidade é: %c\n", cidade1);
        printf("O código da cidade 1 é: %c\n", codigo1);
        printf("A area da cidade 1 é: %f\n",area1);
        printf("O pib da cidade 1 é: %f\n", pib1);
        printf("A população da cidade 1 é: %f \n");
        printf("O total de pontos turisticos da cidade 1 é: %i\n", turistico1);


    return 0;
}

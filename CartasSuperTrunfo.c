#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

   int populacaoa01, populacaob01, pontosa01, pontosb01;
   float area_a01, area_b01,  pib_a01, pib_b01;

   printf("Digite a população de Belo horizonte-MG: \n");
   scanf("%d", &populacaoa01);
   printf("Digite o número de pontos turísticos de Belo horizonte-MG: \n");
   scanf("%d", &pontosa01);
   printf("Digite a área de Belo horizonte-MG: \n");
   scanf("%f", &area_a01);
   printf("Digite o PIB de Belo horizonte-MG: \n");
   scanf("%f", &pib_a01);
   printf("Digite a população de Goiânia-GO: \n");
   scanf("%d", &populacaob01);
   printf("Digite o número de pontos turísticos de Goiânia-GO: \n");
   scanf("%d", &pontosb01);
   printf("Digite a área de Goiânia-GO: \n");
   scanf("%f", &area_b01);
   printf("Digite o PIB de Goiânia-GO: \n");
   scanf("%f", &pib_b01);

   printf("Belo Horizonte-MG \n");
   printf("código: a01 \n");
   printf("população: %d \npontos turísticos: %d \nárea: %f \nPIB: %f \n\n", populacaoa01, pontosa01, area_a01, pib_a01);
   printf("Goiânia-GO: \n");
   printf("código: b01 \n");
   printf("população: %d \npontos turísticos: %d \nárea: %f \nPIB: %f \n", populacaob01, pontosb01, area_b01, pib_b01);
   
    return 0;
}

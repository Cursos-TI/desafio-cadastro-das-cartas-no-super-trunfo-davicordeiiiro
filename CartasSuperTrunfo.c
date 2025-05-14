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

   long unsigned int populacao_a01, populacao_b01;
   int pontos_a01, pontos_b01;
   float area_a01, area_b01,  pib_a01, pib_b01, inverso_a01, super_poder_a01, inverso_b01, super_poder_b01;
   float percapita_a01, percapita_b01, densidade_a01, densidade_b01;
   
   printf("Digite a população de Belo horizonte-MG: \n");
   scanf("%lu", &populacao_a01);
   printf("Digite o número de pontos turísticos de Belo horizonte-MG: \n");
   scanf("%d", &pontos_a01);
   printf("Digite a área de Belo horizonte-MG: \n");
   scanf("%f", &area_a01);
   printf("Digite o PIB de Belo horizonte-MG: \n");
   scanf("%f", &pib_a01);
   
   percapita_a01 = populacao_a01 / pib_a01;
   densidade_a01 = populacao_a01 / area_a01;
   inverso_a01 = 1 / densidade_a01;
   super_poder_a01 = (float) populacao_a01 + pontos_a01 + area_a01 + pib_a01 + inverso_a01;

   printf("Digite a população de Goiânia-GO: \n");
   scanf("%lu", &populacao_b01);
   printf("Digite o número de pontos turísticos de Goiânia-GO: \n");
   scanf("%d", &pontos_b01);
   printf("Digite a área de Goiânia-GO: \n");
   scanf("%f", &area_b01);
   printf("Digite o PIB de Goiânia-GO: \n");
   scanf("%f", &pib_b01);

   percapita_b01 = populacao_b01 / pib_b01;
   densidade_b01 = populacao_b01 / area_b01;
   inverso_b01 = 1 / densidade_b01;
   super_poder_b01 = (float) populacao_b01 + pontos_b01 + area_b01 + pib_b01 + inverso_b01;
   
   printf("Belo Horizonte-MG \n");
   printf("código: a01 \n");
   printf("população: %lu \npontos turísticos: %d \nárea: %f \nPIB: %f \n", populacao_a01, pontos_a01, area_a01, pib_a01);
   printf("PIB Per Capita: %.2f \n", percapita_a01);
   printf("Densidade populacional: %.4f \n", inverso_a01);
   printf("Super poder: %.2f \n\n", super_poder_a01);
   
   printf("Goiânia-GO: \n");
   printf("código: b01 \n");
   printf("população: %u \npontos turísticos: %d \nárea: %f \nPIB: %f \n", populacao_b01, pontos_b01, area_b01, pib_b01);
   printf("PIB Per Capita: %.2f \n", percapita_b01);
   printf("Densidade populacional: %.4f \n", inverso_b01);
   printf("Super poder: %2.f\n", super_poder_b01);
/*5Qs
1. atributos das cartas
2. comparar os atributos
3. o programa tem que exbir apenas 1 para verdadeiro ou 0 para falso
4. que o programa mostre a carta mais forte e a mais fraca
5.  
*/
int r_populacao, r_pontos, r_area, r_pib, r_pibper, r_densi, r_superpoder;
r_populacao = populacao_a01 > populacao_b01;
r_pontos = pontos_a01 > pontos_b01;
r_area = area_a01 > area_b01;
r_pib = pib_a01 > pib_b01;
r_pibper = percapita_a01 > percapita_b01;
r_densi = inverso_a01 < inverso_b01;
r_superpoder = super_poder_a01 > super_poder_b01;

printf("População: Carta a01 venceu %d\n", r_populacao);
printf("Pontos turísticos: Carta a01 venceu %d\n", r_pontos);
printf("Área: Carta a01 venceu %d\n", r_area);
printf("Pib: Carta a01 venceu %d\n", r_pib);
printf("Pib percapita: Carta a01 venceu %d\n", r_pibper);
printf("Densiadade populacional: Carta a01 venceu %d\n", r_densi);
printf("Super-poder: Carta a01 venceu %d\n", r_superpoder);

   
   return 0;
}

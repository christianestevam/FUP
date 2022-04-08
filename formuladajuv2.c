// O Alquimista descobriu que poderia turbinar a formula do número da juventude, que faz que a pessoa fique mais jovem. 

//Essa formula turbinada é a seguinte: Some o peso da pessoa com sua altura. Depois divida o resultado pela idade dela. Some a esse resultado o ano de seu nascimento. Multiplique pelo dia de nascimento. Depois subtraia por 33. E por fim, multiplique pela idade mais 7. 

//Implemente um programa que recebe o peso, altura, idade, ano e dia de nascimento e calcula o número da juventude turbinado dessa pessoa.

#include <stdio.h>

int main(void) {
   float peso, altura;
   int idade, ano, dia;

  printf("Digite o peso:");
  scanf("%f", &peso);
  printf("Digite sua altura:");
  scanf("%f", &altura);
  printf("Digite sua idade:");
  scanf("%d", &idade);
  printf("Digite o ano que você nasceu:");
  scanf("%d", &ano);
  printf("Digite o dia que você nasceu:");
  scanf("%d", &dia);

  printf("Esse é seu numero para a eternidade: ");
  float f =(((peso+altura)/idade+ano)*dia-33)*(idade+7);
  printf("%f",f);

  
  return 0;
}

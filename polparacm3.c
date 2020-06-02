/* Converter polegadas para centimetros com leitura de dados da entrada padrao (teclado) e uso da variavel "fator" */

#include <stdio.h>

int main() {
    
    float polegadas, cm, fator = 2.54;
    
    printf("DIGITAL CONVERTER 2.0\n\n");    
    
    printf("Informe o valor em polegadas: ");
    scanf("%f", &polegadas);
    
    cm = polegadas * fator;
    
    printf("%.2f polegadas equivalem a %.2f centimetros!\n", polegadas, cm);
    
    return 0;
}

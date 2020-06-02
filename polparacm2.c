/* Converter polegadas para centimetros com leitura de dados da entrada padrao (teclado) */

#include <stdio.h>

int main() {
    
    float polegadas, cm;
    
    printf("DIGITAL CONVERTER 2.0\n\n");    
    
    
    printf("Informe o valor em polegadas: ");
    scanf("%f", &polegadas);
    
    cm = polegadas * 2.54;
    
    printf("%.2f polegadas equivalem a %.2f centimetros!\n", polegadas, cm);
    
    return 0;
}

/* Converter polegadas para centimetros */

#include <stdio.h>

int main() {
    
    float polegadas, cm;
    
    polegadas = 55;
    
    cm = polegadas * 2.54;
    
    printf("%.2f polegadas equivalem a %.2f centimetros!\n", polegadas, cm);
    
    return 0;
}

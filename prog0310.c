#include <stdio.h>

int main() {

    float salario;

    printf("Qual o salario: "); scanf("%f", &salario);
    salario = salario ? salario * 1.05 : salario * 1.07;
    printf("Novo salario: %.2f\n", salario);

}
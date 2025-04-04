#include <stdio.h>

int main ()
{
    float peso, estatura, imc;

    printf("Indica tu peso en kilogramos: ");
    scanf("%f", &peso);

    printf("Indica tu estatura en metros: ");
    scanf("%f", &estatura);

    imc = peso/(estatura*estatura);
    if (imc <= 18.4) {
        printf("Tienes bajo peso");
    } else if (imc <= 24.9) {
        printf("Tienes un peso normal");
    } else if (imc <= 29.9) {
        printf("Tienes sobrepeso");
    } else if (imc <= 34.9) {
        printf("Tienes obesidad clase 1");
    } else if (imc <= 39.9) {
        printf("Tienes obesidad clase 2");
    } else {
        printf("Tienes obesidad clase 3");
    }
    return 0;
}

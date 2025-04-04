#include <stdio.h>

int main()
{
    char tipoPizza[10], tipoIngrediente[10];

    printf("¿Quieres una pizza vegetariana? (Ingresa Si o No): ");
    scanf("%s", tipoPizza);

    if (tipoPizza[0] == 'S' || tipoPizza[0] == 's') {
        printf("Ingredientes vegetarianos disponibles: Pimiento y tofu (todas las pizzas incluyen mozzarella y tomate)\n");
        printf("Ingresa el ingrediente que quieres (P para Pimiento, T para tofu): ");
        scanf("%s", tipoIngrediente);

        if (tipoIngrediente[0] == 'P' || tipoIngrediente[0] == 'p') {
            printf("Su pizza es vegetariana. Ingredientes: Pimiento, mozzarella y tomate.\n");
        } else {
            if (tipoIngrediente[0] == 'T' || tipoIngrediente[0] == 't') {
                printf("Su pizza es vegetariana. Ingredientes: Tofu, mozzarella y tomate.\n");
            } else {
                printf("Ingrediente no valido\n");
            }
        }
    } else {
        if (tipoPizza[0] == 'N' || tipoPizza[0] == 'n') {
            printf("Ingredientes no vegetarianos disponibles: Peperoni, salmon y jamon (todas las pizzas incluyen mozzarella y tomate)\n");
            printf("Ingresa el ingrediente que quieres (P para Peperoni, J para jamon, S para salmon): ");
            scanf("%s", tipoIngrediente);

            if (tipoIngrediente[0] == 'P' || tipoIngrediente[0] == 'p') {
                printf("Su pizza no es vegetariana. Ingredientes: Peperoni, mozzarella y tomate.\n");
            } else {
                if (tipoIngrediente[0] == 'J' || tipoIngrediente[0] == 'j') {
                    printf("Su pizza no es vegetariana. Ingredientes: Jamon, mozzarella y tomate.\n");
                } else {
                    if (tipoIngrediente[0] == 'S' || tipoIngrediente[0] == 's') {
                        printf("Su pizza no es vegetariana. Ingredientes: Salmon, mozzarella y tomate.\n");
                    } else {
                        printf("Ingrediente no valido\n");
                    }
                }
            }
        } else {
            printf("Invalido\n");
        }
    }
    return 0;
}

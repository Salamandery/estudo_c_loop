#include <stdio.h>

void loopWhile(float people[], float MIN_HEIGHT) 
{
    int i = 0;
    int size = 3;
    printf("RESPOSTA USANDO LOOP WHILE: \n");
    while(i < size) 
    {
        printf("### Verificando altura %.2f\n", people[i]);
        if (people[i] < MIN_HEIGHT) {
            printf("Entrada Não Permitida\n");
        } else 
        {
            printf("Entrada Permitida\n");
        }
        i++;
    }
    printf("\n\n");
}

void loopDoWhile(float people[], float MIN_HEIGHT)
{
    int i = 0;
    int size = 3;
    printf("RESPOSTA USANDO LOOP DO WHILE: \n");
    do 
    {
        printf("### Verificando altura %.2f\n", people[i]);
        if (people[i] < MIN_HEIGHT) 
        {
            printf("Entrada Não Permitida\n");
        } 
        else 
        {
            printf("Entrada Permitida\n");
        }
        i++; 
    } while(i < size);
    printf("\n\n");
}

void loopFor(float people[], float MIN_HEIGHT)
{
    int size = 3;
    printf("RESPOSTA USANDO LOOP FOR: \n");
    for (int i = 0; i < size; i++) 
    {
        printf("### Verificando altura %.2f\n", people[i]);
        if (people[i] < MIN_HEIGHT) 
        {
            printf("Entrada Não Permitida\n");
        } 
        else 
        {
            printf("Entrada Permitida\n");
        }
    }
    printf("\n\n");
}

int main()
{
    float MIN_HEIGHT = 1.80;
    float people[3] = {1.73, 1.81, 1.85};
    printf("PROGRAMA QUE APRESENTA O RESULTADO DE ALTURA PERMITIDA\nPARA UTILIZAÇÃO DO BRINQUEDO NO PARQUE\n\n");
    
    // primeiro loop estudo de while
    loopWhile(people, MIN_HEIGHT);
    // segundo loop estudo de dowhile
    loopDoWhile(people, MIN_HEIGHT);
    // terceiro loop estudo de for
    loopFor(people, MIN_HEIGHT);
    
    return 0;
}

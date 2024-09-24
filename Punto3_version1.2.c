/*3. Se  necesita  desarrollar  un  algoritmo  que  permita  
ingresar  tres  temperaturas  correspondientes  a  diferentes 
momentos de un día y determinar:  
    a. Cuál es el promedio de temperaturas
    b. Si existe alguna temperatura que sea mayor al promedio. */

#include <stdio.h>

int main(){
    float temp_1,temp_2,temp_3,prom_; // temp = temperatura & prom_ = promedio
    int hora_1,hora_2,hora_3,min_1,min_2,min_3;

    printf("\nIngresar primer registro de temperatura: ");
    scanf("%f",&temp_1);
    printf("Ingresar hora(formato entero de 4 digitos): ");
    scanf("%d",&hora_1);
    min_1 = hora_1 % 100;
    hora_1 = hora_1 / 100;

    printf("\nIngresar segundo registro de temperatura: ");
    scanf("%f",&temp_2);
    printf("Ingresar hora(formato entero de 4 digitos): ");
    scanf("%d",&hora_2);
    min_2 = hora_2 % 100;
    hora_2 = hora_2 / 100;

    printf("\nIngresar tercer registro de temperatura: ");
    scanf("%f",&temp_3);
    printf("Ingresar hora(formato entero de 4 digitos): ");
    scanf("%d",&hora_3);
    min_3 = hora_3 % 100;
    hora_3 = hora_3 / 100;

    //a. Promedio de temperatura
    prom_ = (temp_1 + temp_2 + temp_3) / 3;

    printf("\nEl promedio de temperatura es: %.1f",prom_);
    
    //b. Temperatura mayor al promedio
    if (temp_1>prom_)
    {
        printf("\nTemperatura de %.1f es mayor al promedio de %.1f",temp_1,prom_);
        printf("\nFue registrado a las %d:%d",hora_1,min_1);
    }else if (temp_2>prom_) // Se llama condición anidada
        {
            printf("\nTemperatura de %.1f es mayor al promedio de %.1f",temp_2,prom_);
            printf("\nFue registrado a las %d:%d",hora_2,min_2);
        }else
            {
                printf("\nTemperatura de %.1f es mayor al promedio de %.1f",temp_3,prom_);
                printf("\nFue registrado a las %d:%d",hora_3,min_3);
            }
    
    return 0;
}
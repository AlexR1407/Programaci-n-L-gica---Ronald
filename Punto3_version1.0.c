/*3. Se  necesita  desarrollar  un  algoritmo  que  permita  
ingresar  tres  temperaturas  correspondientes  a  diferentes 
momentos de un día y determinar:  
    a. Cuál es el promedio de temperaturas
    b. Si existe alguna temperatura que sea mayor al promedio. */

#include <stdio.h>

int main(){
    int temp_1,temp_2,temp_3,prom_; // temp = temperatura & prom_ = promedio

    printf("\nIngresar primer registro de temperatura: ");
    scanf("%d",&temp_1);
    
    printf("\nIngresar segundo registro de temperatura: ");
    scanf("%d",&temp_2);

    printf("\nIngresar tercer registro de temperatura: ");
    scanf("%d",&temp_3);

    //a. Promedio de temperatura
    prom_ = (temp_1 + temp_2 + temp_3) / 3;

    printf("\nEl promedio de temperatura es: %d",prom_);
    
    //b. Temperatura mayor al promedio
    if (temp_1>prom_)
    {
        printf("\nTemperatura de %d es mayor al promedio de %d",temp_1,prom_);
    }else if (temp_2>prom_) // Se llama condición anidada
        {
            printf("\nTemperatura de %d es mayor al promedio de %d",temp_2,prom_);
        }else
            {
                printf("\nTemperatura de %d es mayor al promedio de %d",temp_3,prom_);
            }
    
    return 0;
}
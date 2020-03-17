//Thanks Boris for original idea 
#include <stdio.h>
#include "blinmaker.h"
float smallest;
void main()
{
    printf("Blinmaker is starting up... \n");
    //Eggs
    printf("How many eggs do you have? ");
    int eggsAmount;
    scanf("%d", &eggsAmount);
    eggsAmount = SetEggsAmount(eggsAmount);
    printf("You have %d eggs \n", eggsAmount);
    //Milk
    printf("How many milk do you have? ");
    float milkAmount;
    scanf("%f", &milkAmount);
    milkAmount = SetMilkAmount(milkAmount);
    printf("You have %.3f ml of milk \n", milkAmount);
    //Flour
    printf("How many flour do you have? ");
    float flourAmount;
    scanf("%f", &flourAmount);
    flourAmount = SetFlourAmount(flourAmount);
    printf("You have %.2f gr of flour \n", flourAmount);
    //Calculations
    if(flourAmount<flourMin || milkAmount<milkMin || eggsAmount<eggsMin)
    {   
        printf("No blins today :( \n");
    }   
    int blinAmount = FindBlinAmount(flourAmount, milkAmount, eggsAmount);
    int eggsRequired;
    float flourRequired, milkRequired;
    FindMaterialsAmount(flourAmount, milkAmount, eggsAmount, &eggsRequired, &flourRequired, &milkRequired);
    printf("You will need %d eggs \n", eggsRequired);
    printf("You will need %.2f grams of flour \n", flourRequired);
    printf("You will need %.3f mililiters of milk \n", milkRequired);
    printf("You can make %d blins \n", blinAmount);
}

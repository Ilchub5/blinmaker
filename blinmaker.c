//Thanks Boris for original idea
#include <stdio.h>
void main()
{
    float flourAmount, milkAmount;
    int eggsAmount;
    int eggsMin = 1;
    float milkMin = 200.0f; //mililiter
    float flourMin = 100.0f; //grams
    float smallest;
    printf("Blinmaker is starting up... \n");
    //Eggs
    printf("How many eggs do you have? ");
    scanf("%d", &eggsAmount);
    printf("You have %d eggs \n", eggsAmount);
    //Milk
    printf("How many milk do you have? ");
    scanf("%f", &milkAmount);
    printf("You have %.3f ml of milk \n", milkAmount);
    //Flour
    printf("How many flour do you have? ");
    scanf("%f", &flourAmount);
    printf("You have %.2f gr of flour \n", flourAmount);
    if(flourAmount<flourMin || milkAmount<milkMin || eggsAmount<eggsMin)
    {
        printf("No blins today :( \n");
    }
    else
    {
        flourAmount = flourAmount / flourMin;
        eggsAmount = eggsAmount / eggsMin;
        milkAmount = milkAmount / milkMin;
        if(flourAmount<=milkAmount && flourAmount<=eggsAmount)
        {
            printf("You can make %.0f blins \n", flourAmount*4);
            smallest = flourAmount;
        }
        else if(milkAmount<=flourAmount && milkAmount<=eggsAmount)
        {
            printf("You can make %.0f blins \n", milkAmount*4);
            smallest = milkAmount;
        }
        else if(eggsAmount<=flourAmount && eggsAmount<=milkAmount)
        {
            printf("You can make %d blins \n", eggsAmount*4);
            smallest = eggsAmount;
        }
    }
    printf("You will need %.0f eggs \n", smallest*eggsMin);
    printf("You will need %.2f grams of flour \n", smallest*flourMin);
    printf("You will need %.3f mililiters of milk \n", smallest*milkMin);
}

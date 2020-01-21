float flourMin;
float milkMin;
int eggsMin;
float SetMilkAmount(float milkAmount)
{
    return milkAmount;
}
float SetFlourAmount(float flourAmount)
{
    return flourAmount;
}
int SetEggsAmount(int eggsAmount)
{
    return eggsAmount;
}
float GetMilkAmount(float milkAmount)
{
    if(milkAmount<0.0)
    {
        return milkAmount;
    }
    else
    {
        return -1;
    }
}
float GetFlourAmount(float flourAmount)
{
    if(flourAmount<0.0)
    {
        return flourAmount;
    }
    else
    {
        return -1;
    }
}
int GetEggsAmount(int eggsAmount)
{
    if(eggsAmount<0.0)
    {   
        return eggsAmount;
    }   
    else
    {   
        return -1; 
    }   
}
float FindBlinAmount(float flourAmount, float milkAmount, int eggsAmount)
{
    flourAmount = flourAmount / flourMin;
    eggsAmount = eggsAmount / eggsMin;
    milkAmount = milkAmount / milkMin;
    float smallest;
    if(flourAmount<=milkAmount && flourAmount<=eggsAmount)
    {   
        return flourAmount * 4;
        smallest = flourAmount;
    }   
    else if(milkAmount<=flourAmount && milkAmount<=eggsAmount)
    {   
        return milkAmount * 4;
        smallest = milkAmount;
    }   
    else if(eggsAmount<=flourAmount && eggsAmount<=milkAmount)
    {   
        return eggsAmount * 4;
        smallest = eggsAmount;
    }   
}
void FindMaterialsAmount(float flourAmount, float milkAmount, int eggsAmount, int *eggsRequired, float *flourRequired, float *milkRequired)
{
    flourAmount = flourAmount / flourMin;
    eggsAmount = eggsAmount / eggsMin;
    milkAmount = milkAmount / milkMin;
    float smallest;
    if(flourAmount<=milkAmount && flourAmount<=eggsAmount)
    {   
        smallest = flourAmount;
    }   
    else if(milkAmount<=flourAmount && milkAmount<=eggsAmount)
    {   
        smallest = milkAmount;
    }   
    else if(eggsAmount<=flourAmount && eggsAmount<=milkAmount)
    {   
        smallest = eggsAmount;
    }
    *eggsRequired = smallest * eggsMin;
    *flourRequired = smallest * flourMin;
    *milkRequired = smallest * milkMin;
}

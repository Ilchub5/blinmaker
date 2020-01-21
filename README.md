# Blinmaker 2.0

C-based library for calculating amount of blins(pencakes) you can make using given amount of materials(eggs, milk, flour)

# Getting Started

This instructions will get you through steps, needed to start including and using this library in your projects and will get you through features and functionality of this library

## Prequisities

For using this library you'll need configured C/C++ development environment, and library header file(which can be downloaded or cloned from this repo)

### Integrating
                                                                                                                                                                                                                                             
Place blinmaker.h file in the directory with your project. Next thing you'll required to do, it's to include it in your code. For this, use this syntax:
```
#include "blinmaker.h"
```
### Testing

To check, if you done everything correctly, please consider creating empty C source file and adding this string inside it. If during compilation process, linker do not terminates without any error, then you did everything correctly 

## Usage

So, from now, let's cycle through basic functionality of the framework. The main idea of the library defines itself in getting pre-defined param values, and then, based on collected data, give you result, passed through math formula.Each function of the library will require some input parameters. All of them is described below.

### Measurment Requirements

Flour is defined in grams

Milk is defined in mililiters

### Code Requirements

Library operates with two types of variables: int and float. Due to C latest standarts, all compilers automatically convert float to double, unless you prohibit them to do so. But author thought that you won't require such big mantissa that double offers, because you won't be able to measure flour and milk so precicely by the lack of so precicive scales and measurment storage. Nothing critical will happen if you pass double argument when float is required, but compiler will give you a warning each time you do so. As eggs can't be divided, they are stored in "int" form. Flour and Milk stored in "float".
### Function name formation

General idea of library syntax, is based on some keywords. Different combinations may form different functionality. List of all keywords is given below:
```
Actions: {
Get
Set
Find
}
Objects: {
Flour
Milk
Eggs
Blin
Materials
}
Result {
Amount
}
```
Let me define some examples:
```
SetFlourAmount()
```
will define the amount of flour that you posess
```
FindBlinAmount()
```
will find amount of blins you can make, based on materials quantity that you have set

| WARNING: Not all words can be combined. Learn more below |
| --- |
### Functions
#### SetMilkAmount(float milkAmount)
Returns milk value, you pass to this function. To store return value, you need to assign it to variable
``` 
float milkAmount = SetMilkAmount(float milkAmount)
```
#### SetFlourAmount(float flourAmount)
Returns flour value, you pass to this function. To store return value, you need to assign it to variable
``` 
float flourAmount = SetFlourAmount(float flourAmount)
```
#### SetEggsAmount(int eggsAmount)
Returns eggs value, you pass to this function. To store return value, you need to assign it to variable
``` 
int eggsAmount = SetEggsAmount(int eggsAmount)
```
#### GetMilkAmount(milkAmount)
Returns value that you assigned with SetMilkAmount function(in case if you stored it). Pass variable name in which amount is stored, as a function argument
```
GetMilkAmount(milkAmount); //Will return milkAmount variable value
```
#### GetFlourAmount(flourAmount)
Returns value that you assigned with SetFlourAmount function(in case if you stored it). Pass variable name in which amount is stored, as a function argument
```
GetFlourAmount(flourAmount); //Will return flourAmount variable value
```
#### GetEggsAmount(eggsAmount)
Returns value that you assigned with SetEggsAmount function(in case if you stored it). Pass variable name in which amount is stored, as a function argument
```
GetEggsAmount(eggsAmount); //Will return eggsAmount variable value
```
#### FindBlinAmount(float flourAmount, float milkAmount, int eggsAmount)
Returns the amount of blins you can make, from materials you have. Accepts three parameters: flour amount, milk amount, eggs amount.

| WARNING: Make sure you pass function arguments in the right order. Missplacing them may result in a wrong function result|
| --- |

#### FindMaterialsAmount(float flourAmount, float milkAmount, int eggsAmount, int *eggsRequired, float *flourRequired, float *milkRequired)
Returns exact amount of materials that you used to make those number of blins you got using FindBlinAmount(). Useful in those situations when you have too many amount of one or more of the ingredients, and you sure that you won't use all of it due to the lack of other ingredients. Function will show you, how much of redundant ingredient you will use for blins preparation.
Pay attention to one moment. Function accepts giant amount of arguments(6). first three arguments - amount of ingredients you have, other three(starts with asterisk "*", which mean that they use "pointer" data type) - name of variables where you going to store your function results preceeded with ampersand. Examples below:
```
int eggsRequired;
float flourRequired, milkRequired;
FindMaterialsAmount(flourAmount, milkAmount, eggsAmount, &eggsRequired, &flourRequired, &milkRequired);
printf("You will need %d eggs \n", eggsRequired);
printf("You will need %.2f grams of flour \n", flourRequired);
printf("You will need %.3f mililiters of milk \n", milkRequired);
```
### Examples

Please consider looking inside blinmaker.c file. This is ready to use program which was built with usage of this library. blinmaker-original.c will give you the same result, but it performed in "raw" mode(e.g it do not use blinmaker.h library)

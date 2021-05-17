//
// Created by brian on 13/05/2021.
//
#include "avg_and_max.h"
#include<stdio.h>
//This is the average function
double average(double array[], int size)
{
    double sum = 0;//Set sum to 0

    for (int i = 0;  i < size-1;  i++)//Here we add all the numbers and store in into sum
    {
        sum += array[i];
    }

    return sum/size;//We return the average
}

double average_fixed(double array[], int size)
{
    double sum = 0;//Set sum to 0

    for (int i = 0;  i < size;  i++)//Here we add all the numbers and store in into sum
    {
        sum += array[i];
    }

    return sum/size;//We return the average
}

//This is the  fixed max function
double max(double array[], int size)
{
    double max;

    for (int i = 0;  i < size;  i++)//we loop around the array until we find the final max figure
    {
        if(max < array[i])//checks if max is less then the current array number
            max = array[i];//if it is the we then input the number into max
    }

    return max;//returning the final number for max
}
double max_fixed(double array[], int size)
{
    double max = array[0];//We input the the first number from the array into the variable max

    for (int i = 0;  i < size;  i++)//we loop around the array until we find the final max figure
    {
        if(max < array[i])//checks if max is less then the current array number
            max = array[i];//if it is the we then input the number into max
    }

    return max;//returning the final number for max
}
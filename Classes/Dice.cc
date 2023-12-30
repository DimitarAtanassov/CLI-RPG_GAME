#include <iostream>
#include <string>
#include "Dice.hh"

Dice::Dice(int min,int max)
{
    this->min = min;
    this->max = max;
}

Dice::Dice()
{
    this->min = 1;
    this->max = 6;
}

void Dice::setMin(int min)
{
    this->min = min;
}

void Dice::setMax(int max)
{
    this->max = max;
}

int Dice::getMin()
{
    return this->min;
}

int Dice::getMax()
{
    return this->max;
}
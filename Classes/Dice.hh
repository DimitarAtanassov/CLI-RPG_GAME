#include <iostream>
#include <string>

#ifndef DICE_H
#define DICE_H

class Dice
{
    private:
        int min;
        int max;
    public:
        Dice(int,int);
        Dice();
        int roll();
        void setMin(int);
        void setMax(int);
        int getMin();
        int getMax();

};

#endif
#ifndef IRDDISTANCESENSOR_H
#define IRDDISTANCESENSOR_H
#include <Arduino.h>

class IRDistanceSensor{
    private:
        int inputPin;
        char type;
    public:
        //default conttuctor
        IRDistanceSensor(){}

        //paramteric constructor
        IRDistanceSensor(int inputPin, char type){}

        float measureDistance_DataSheet(){}

        float measureDistance_Calibrated(){}

        int Calibration(){}
};

#endif
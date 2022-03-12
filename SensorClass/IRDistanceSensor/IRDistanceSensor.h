#ifndef IRDDISTANCESENSOR_H
#define IRDDISTANCESENSOR_H
#include <Arduino.h>




class IRDistanceSensor{
    int inputPin;
    char type;
public:
    //default conttuctor
    IRDistanceSensor();
    //paramteric constructor
    IRDistanceSensor(int inputPin, char type);
    float measureDistance_DataSheet();
    float measureDistance_Calibrated();
    int Calibration();
    //~IRDistanceSensor();
};

#include "IRDistanceSensor.cpp"
#endif
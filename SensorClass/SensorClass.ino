#include "IRDistanceSensor\IRDistanceSensor.h"
//#include <delay.h>

int ADCval = 0;
IRDistanceSensor Sensor1(A15,'L');
HardwareSerial *SerialCom;
int prevADCval = 0;
void setup(){

    // Setup the Serial port and pointer, the pointer allows switching the debug info through the USB port(Serial) or Bluetooth port(Serial1) with ease.
    SerialCom = &Serial;
    SerialCom->begin(115200);
    SerialCom->println("MECHENG706_Base_Code_25/01/2018");
    delay(1000);
    SerialCom->println("Setu22p....");

    pinMode(A15, INPUT);
    
}

void loop(){

    ADCval = Sensor1.Calibration();
    SerialCom->println((ADCval + prevADCval)/2.0);
    prevADCval = ADCval;
    delay(1000);
}
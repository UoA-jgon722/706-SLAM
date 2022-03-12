#include "IRDistanceSensor\IRDistanceSensor.h"
int ADCval = 0;
IRDistanceSensor Sensor1(A15, 'L');
HardwareSerial *SerialCom;

void setup(){

    // Setup the Serial port and pointer, the pointer allows switching the debug info through the USB port(Serial) or Bluetooth port(Serial1) with ease.
    SerialCom = &Serial;
    SerialCom->begin(9600);
    SerialCom->println("MECHENG706_Base_Code_25/01/2018");
    delay(1000);
    SerialCom->println("Setup....");

    
}

void loop(){
    
    ADCval = Sensor1.Calibration();
    Serial.println(ADCval);
    delayMicroseconds(1000);
}
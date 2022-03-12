
//default conttuctor
IRDistanceSensor::IRDistanceSensor(){}

//paramteric constructor
IRDistanceSensor::IRDistanceSensor(int inputPin, char type){
    this->inputPin = inputPin;
    this->type = type;
}

float IRDistanceSensor::measureDistance_DataSheet(){
    int signalADC = 0;
    int distance = 0;
    signalADC = analogRead(inputPin);
    int distance1 = 17948*pow(signalADC,-1.22);  // calculate the distance using the datasheet graph 
    int distancec = 46161*pow(signalADC,-1.302);  // calculate the distance using the calibrated graph
    Serial.print("distance1  ");   // print the results out using serial print 
    Serial.print(distance1);
    Serial.println("cm ");
    Serial.print("distancec  ");
    Serial.println(distancec);
    Serial.println("cm");

    return distance;
}

int IRDistanceSensor::Calibration(){
    int signalADC_2 = 2;
    //signalADC = analogRead(5);
    //signalADC = 5;
    return 6;
}

float IRDistanceSensor::measureDistance_Calibrated(){
    return 2;
}

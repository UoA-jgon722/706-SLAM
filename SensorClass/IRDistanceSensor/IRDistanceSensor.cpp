class IRDistanceSensor{
    private:
        int inputPin;
        char type;
    public:
        //default conttuctor
        IRDistanceSensor(){}

        //paramteric constructor
        IRDistanceSensor(int inputPin, char type){
            this->inputPin = inputPin;
            this->type = type;
        }

        float measureDistance_DataSheet(){
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

        int Calibration(){
            int signalADC = 2;
            signalADC = analogRead(inputPin);
            
            return signalADC;
        }

        float measureDistance_Calibrated(){
            return 0;
        }

        
};
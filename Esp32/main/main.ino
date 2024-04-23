HardwareSerial &hSerial = Serial2; //can be Serial2 as well, just use proper pins 16 to 17 and 17 to 16

void setup() 
{
  Serial.begin(115200);//open serial via USB to PC on default port
  hSerial.begin(115200);//open the other serial port
}

void loop() 
{  
  if (Serial.available()) //check incoming on default serial (USB) from PC
      { 
        hSerial.write(Serial.read());   // read it from UBS and send it to hSerial 
      }

  if (hSerial.available()) //check incoming on other serial from the other board
      { 
        Serial.write(hSerial.read());   //read it from hSerial and send it to  UBS
      }
}
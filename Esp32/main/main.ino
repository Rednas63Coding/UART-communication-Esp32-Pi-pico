HardwareSerial &hSerial = Serial2; //pin 16-RX   17-TX

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

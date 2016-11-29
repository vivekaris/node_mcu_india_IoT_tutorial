/* LDR Testing with Node MCU v3 Lolin board

Connect following 
Photoresistor one leg to pin A0, and  another pin to +3V
Connect a resistor (around 10k) is a good value, higher
values gives higher readings) from pin A0 to GND. 

please visit http://iotwebplanet.com
please code visithttps://github.com/vivekaris/node_mcu_india_IoT_tutorial
----------------------------------------------------
*/

int LDRPin = A0;  //define a pin for Photo resistor
int ledPin=5; //D1     //define a pin for LED
int sensorValue=0;
void setup()
{
    Serial.begin(9600);  //debugging  serial communcation
    pinMode( ledPin, OUTPUT );
}

void loop()
{
  
  sensorValue=analogRead(LDRPin);   //read  the value of the photoresistor.
    Serial.println(sensorValue);  // value of the photoresistor to the serial monitor.
    
      if(sensorValue<100)   // it means darkness detected
    {
    digitalWrite(ledPin, HIGH);  //on the ledPin. 
    Serial.println("Light On");
    }  
    else
    {
          digitalWrite(ledPin, LOW);  //off the ledPin. 
         Serial.println("Light Off");                                           
    }
    
   delay(500); //short delay for faster response to light.
}

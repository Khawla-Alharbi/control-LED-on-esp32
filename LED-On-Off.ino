void setup(){
pinMode(LED_BUILTIN, OUTPUT); 
} //initialize LED_BUILTIN  as an output

void loop(){   // the loop function runs over and over again forever
  
digitalWrite(LED_BUILTIN,HIGH);
delay(1000);
  
digitalWrite(LED_BUILTIN,HIGH);
delay(1000);
}

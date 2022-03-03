const byte ledPin = 2;  // for ESP32 built-in LED

// setting PWM properties
const int freq = 5000;
const int ledChannel = 0;
const int resolution = 10; //Resolution 8, 10, 12, 15

ledcSetup(ledChannel, freq, resolution); // configure LED PWM functionalitites
ledcAttachPin(analogOutPin, ledChannel); // attach the channel to the GPIO2 to be controlled

ledcWrite(ledChannel, 102); //PWM Value varries from 0 to 1023 

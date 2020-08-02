int LEDpin = 2;  // Arduino pin number 8
int sensorPin = A0;  // Arduini analog pin A0
int threshold = 30;   // set your thresold value as per your requirement (this value set the amount of noise which you will provide by clapping 
int state = LOW;   // make the bulb LOW
/* make LEDpin OUTPUT
 *  sensorpin OUTPUT
 *  make LOW output in beginning 
 */
void setup() {
  // put your setup code here, to run once:
pinMode(LEDpin,OUTPUT);
pinMode(sensorPin,INPUT);
digitalWrite(LEDpin,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
int sound = analogRead(sensorPin);  // get the input sound from the sensor 
/*if the sound is greater than the threshold value than yhe loop will run */
if ( sound > threshold){
  delay(100);
  state= !state;  // According to the last state of bulb it will make ON and OFF the LED 
  digitalWrite(LEDpin,state);
}
}

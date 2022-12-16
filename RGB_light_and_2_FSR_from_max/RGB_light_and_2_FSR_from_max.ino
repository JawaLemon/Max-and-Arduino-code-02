int inByte = 0; // incoming serial byte
int val [2]; // number of sensors


void setup() {
  Serial.begin(9600); 
  pinMode(13, OUTPUT); // connect an Red here
  pinMode(12, OUTPUT); // connect an Green here
  pinMode(11, OUTPUT); // connect an Blue here
}

void loop() {
  inByte = Serial.read();
  Serial.print(inByte);
  if (inByte == 98) digitalWrite(13, HIGH); // number '98' turns RED LED on
  if (inByte == 97) digitalWrite(13, LOW); // number '97' turns RED LED off
  if (inByte == 96) digitalWrite(12, HIGH); // number '96' turns GREEN LED on
  if (inByte == 95) digitalWrite(12, LOW); // number '95' turns GREEN LED off
  if (inByte == 94) digitalWrite(11, HIGH); // number '94' turns BLUE LED on
  if (inByte == 93) digitalWrite(11, LOW); // number '93' turns BLUE LED off


  for(int i = 0; i < 2; i++) {  //read the two FSR sensors
    val[i] = analogRead(i);
    Serial.print(val[i]);
    Serial.print(" "); //print the valur from the two FSR sensors

  }
  Serial.println();
   
 
  
  delay(250);
}

#define echoPin 5  //defining the pins used for the sonic sensor
#define trigPin 6 
#define echoPin01 7 
#define trigPin01 8


int distance = 0;  int distance01 = 0;  //sets the initial value for the sonic sensors
long duration; long duration01;

int val[4] = {0, 0, 0, 0,}; //the number of analog sensors

void setup() { Serial.begin(9600); //starts the serial communication

pinMode(trigPin, OUTPUT); //sends the sonic wave
pinMode(echoPin, INPUT); //recieves the sonic wave
pinMode(trigPin01, OUTPUT); //sends the sonic wave
pinMode(echoPin01, INPUT); //recieves the sonic wave
}
void loop() {
for(int i = 0; i < 4; i++) {val[i] = analogRead(i); //
Serial.print(val[i]);Serial.print(" ");} //prints the value of the potentiometers
digitalWrite(trigPin, LOW); //takes in the readings from sonic sensor 1 send
delayMicroseconds(2);
digitalWrite(trigPin, HIGH); //takes in the readings from sonic sensor 1 recieve
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
Serial.print(distance); Serial.print(" "); //prints the value of sonic sensor 1
digitalWrite(trigPin01, LOW); //takes in the readings from sonic sensor 2 send
delayMicroseconds(2);
digitalWrite(trigPin01, HIGH); //takes in the readings from sonic sensor 2 recieve
delayMicroseconds(10);
digitalWrite(trigPin01, LOW);
duration01 = pulseIn(echoPin01, HIGH);
distance = duration * 0.034 / 2;  //calculates the distance of sonic sensor 2
distance01 = duration01 * 0.034 / 2; //calculates the distance of sonic sensor 2
Serial.println(distance01);   //prints the value of sonic sensor 2
delay(50);
}

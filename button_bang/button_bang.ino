int BUT1; int exBUT1; //button1 on and off status
int BUT2; int exBUT2; //button2 on and off status
int BUT3; int exBUT3; //button3 on and off status
int BUT4; int exBUT4; //button4 on and off status
int BUT5; int exBUT5; //button5 on and off status
int BUT6; int exBUT6; //button6 on and off status


void setup() {  
  pinMode(2, INPUT_PULLUP);   //pin for button1
  pinMode(3, INPUT_PULLUP);   //pin for button2
  pinMode(4, INPUT_PULLUP);   //pin for button3
  pinMode(5, INPUT_PULLUP);   //pin for button4
  pinMode(6, INPUT_PULLUP);   //pin for button5
  pinMode(5, INPUT_PULLUP);   //pin for button6
  Serial.begin(9600); }       //starts serial communication

void loop() {
BUT1 = digitalRead(2); if (BUT1 == HIGH) {exBUT1 = 1;} 
if (BUT1 == LOW and exBUT1 == 1) {Serial.println("1"); exBUT1 = 0;} //variable to send the button1 status

BUT2 = digitalRead(3); if (BUT2 == HIGH) {exBUT2 = 1;} 
if (BUT2 == LOW and exBUT2 == 1) {Serial.println("2"); exBUT2 = 0;} //variable to send the button2 status

BUT3 = digitalRead(4); if (BUT3 == HIGH) {exBUT3 = 1;} 
if (BUT3 == LOW and exBUT3 == 1) {Serial.println("3"); exBUT3 = 0;} //variable to send the button3 status

BUT4 = digitalRead(5); if (BUT4 == HIGH) {exBUT4 = 1;} 
if (BUT4 == LOW and exBUT4 == 1) {Serial.println("4"); exBUT4 = 0;} //variable to send the button4 status

BUT5 = digitalRead(6); if (BUT5 == HIGH) {exBUT5 = 1;} 
if (BUT5 == LOW and exBUT5 == 1) {Serial.println("5"); exBUT5 = 0;} //variable to send the button5 status

BUT6 = digitalRead(7); if (BUT6 == HIGH) {exBUT6 = 1;} 
if (BUT6 == LOW and exBUT6 == 1) {Serial.println("6"); exBUT6 = 0;} //variable to send the button6 status

Serial.write(32); //sends the data to Max

delay(50); 
}

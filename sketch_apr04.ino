const int flexPin = A0;
const int forwardMotorPin = 2;
const int backwardsMotorPin = 3;

int x = 0;
int delTime = 4200;
int moveDirection = 0;
int prevSensorValue = 0;
int sensorValue;

void setup() {
  // put your setup code here, to run once:
  pinMode(forwardMotorPin, OUTPUT);
  pinMode(backwardsMotorPin, OUTPUT);
  pinMode(flexPin, INPUT_PULLUP);
  Serial.begin(9600);
  prevSensorValue = analogRead(flexPin);
 
}
//Diameter = 8.9mm
void loop() {
  // put your main code here, to run repeatedly:

  sensorValue = analogRead(flexPin);
  Serial.println(sensorValue);
  delay(delTime);

 /* if (prevSensorValue < sensorValue){

    digitalWrite(forwardMotorPin, HIGH);
    digitalWrite(backwardsMotorPin, LOW);
    Serial.println("front");
  }*/

}

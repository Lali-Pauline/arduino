//variables

int trigerPin = 7; //pin from where signal is sent to meet object
int echoPin = 6;  // pin from which signal is received from object
float timeOfTravel;
int timeToObject;
int distanceToObject;
int delayTime = 200;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigerPin, OUTPUT);
  pinMode(echoPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigerPin, LOW);
  delayMicroseconds(delayTime);
  digitalWrite(trigerPin, HIGH);
  delayMicroseconds(delayTime);
  digitalWrite(trigerPin, LOW);
  timeOfTravel = pulseIn(echoPin, HIGH);
  delayMicroseconds(delayTime);
  timeToObject = (timeOfTravel/2);
  distanceToObject = (timeToObject * 0.034);
  Serial.println(distanceToObject);
  

}
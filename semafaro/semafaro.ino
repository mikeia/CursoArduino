int ledPin = 10;
int ledPin2 = 9;
int ledPin3 = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin,HIGH);
  delay(1000);
  digitalWrite(ledPin,LOW);
  delay(3000);
  digitalWrite(ledPin2,HIGH);
  delay(3000);
  digitalWrite(ledPin2,LOW);
  delay(2000);
  digitalWrite(ledPin3,HIGH);
  delay(3000);
  digitalWrite(ledPin3,LOW);
  delay(3000);
}

int buttonPin = 2;
int ledPin = 10;
int botaoStatus = 1;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  botaoStatus = digitalRead(buttonPin);
  if (LOW == botaoStatus ){
    digitalWrite(ledPin, HIGH);
  }else{
    digitalWrite(ledPin, LOW);
  }
  delay(20);
}

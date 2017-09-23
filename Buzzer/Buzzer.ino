int buzzerPin = 10;
int frequencia = 1000;
int buttonPin = 2;
int botaoStatus = 1;
int ledPin = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  botaoStatus = digitalRead(buttonPin);
  if (LOW == botaoStatus ){    
    tone(buzzerPin, frequencia);
    digitalWrite(ledPin,HIGH);
    delay(20);
  }else{
    noTone(buzzerPin);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
  
  
}

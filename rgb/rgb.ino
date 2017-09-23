int redPin = 11;
int bluePin = 10;
int greenPin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void setColor(int red, int green, int blue){
    digitalWrite(redPin, red);
    digitalWrite(greenPin, green);
    digitalWrite(bluePin, blue);
}

void loop() {
  // put your main code here, to run repeatedly:
  setColor(255,0,0);
  delay(3000);
  
  setColor(0,255,0);
  delay(3000);
  
  setColor(0,0,255);
  delay(3000);
  
  setColor(255,255,255);
  delay(3000);

  setColor(0,0,0);
  delay(3000);
  

}

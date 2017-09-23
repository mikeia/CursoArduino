int valorBrilho = 0;
int pinLED = 11;
void setup() {
  // put your setup code here, to run once:
  pinMode(pinLED, OUTPUT);
  analogWrite(pinLED, 0);
   Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   Serial.println(valorBrilho);
   if (valorBrilho < 255){
       valorBrilho++;
       analogWrite(pinLED, valorBrilho);
       delay(30);
   }else{
      valorBrilho = 0;
      analogWrite(pinLED, valorBrilho);
      delay(30);
   }
}

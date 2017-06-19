//GPIO

int ledAPin = 10;
int ledBPin = 9;
int chavePin = 7;

void setup(){
  pinMode(ledAPin, OUTPUT);
  pinMode(ledBPin, OUTPUT);
  pinMode(chavePin, INPUT);
}

void loop(){
  digitalWrite(ledAPin, HIGH);
  delay(200);
  digitalWrite(ledAPin, LOW);
  delay(200);
  int estadoChave = digitalRead(chavePin);
  if(estadoChave == HIGH){
    digitalWrite(ledBPin, HIGH);
  }
}

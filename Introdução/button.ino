const int buttonPin = 13;
const int redLedPin = 0;
const int yellowLedPin = 3;
const int greenLedPin = 6;
const int buzzerPin = 9;
boolean alter = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(buttonPin) == HIGH){
    if(alter){
      alter = false;
    } else {
      alter = true;
    }
  }
  if(alter){
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(redLedPin, LOW);
    digitalWrite(greenLedPin, LOW);
    noTone(buzzerPin);
    digitalWrite(greenLedPin, HIGH);
    tone(buzzerPin, 784);
    delay(200);
    digitalWrite(greenLedPin, LOW);
    noTone(buzzerPin);
    delay(200);
    digitalWrite(greenLedPin, HIGH);
    tone(buzzerPin, 784);
    delay(200);
    digitalWrite(greenLedPin, LOW);
    noTone(buzzerPin);
    delay(200);
    digitalWrite(yellowLedPin, HIGH);
    tone(buzzerPin, 659);
    delay(100);
    digitalWrite(yellowLedPin, LOW);
    noTone(buzzerPin);
    delay(100);
    digitalWrite(redLedPin, HIGH);
    tone(buzzerPin, 523);
    delay(100);
    digitalWrite(redLedPin, LOW);
    noTone(buzzerPin);
    delay(400);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(redLedPin, LOW);
    digitalWrite(greenLedPin, LOW);
    noTone(buzzerPin);
    digitalWrite(greenLedPin, HIGH);
    tone(buzzerPin, 784);
    delay(200);
    digitalWrite(greenLedPin, LOW);
    noTone(buzzerPin);
    delay(200);
    digitalWrite(greenLedPin, HIGH);
    tone(buzzerPin, 784);
    delay(200);
    digitalWrite(greenLedPin, LOW);
    noTone(buzzerPin);
    delay(66);
    digitalWrite(redLedPin, HIGH);
    tone(buzzerPin, 523);
    delay(100);
    digitalWrite(redLedPin, LOW);
    noTone(buzzerPin);
    delay(100);
    digitalWrite(greenLedPin, HIGH);
    tone(buzzerPin, 784);
    delay(100);
    digitalWrite(greenLedPin, LOW);
    noTone(buzzerPin);
    delay(100);
    digitalWrite(yellowLedPin, HIGH);
    tone(buzzerPin, 659);
    delay(100);
    digitalWrite(yellowLedPin, LOW);
    noTone(buzzerPin);
    delay(400);    
  }else{
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(redLedPin, LOW);
    digitalWrite(greenLedPin, LOW);
    noTone(buzzerPin);
    digitalWrite(redLedPin, HIGH);
    digitalWrite(greenLedPin, LOW);
    tone(buzzerPin, 523);
    delay(100);
    digitalWrite(redLedPin, LOW);
    digitalWrite(yellowLedPin, HIGH);
    tone(buzzerPin, 659);
    delay(100);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(greenLedPin, HIGH);
    tone(buzzerPin, 784);
    delay(500);
    digitalWrite(redLedPin, HIGH);
    digitalWrite(greenLedPin, LOW);
    tone(buzzerPin, 523);
    delay(100);
    digitalWrite(redLedPin, LOW);
    digitalWrite(yellowLedPin, HIGH);
    tone(buzzerPin, 659);
    delay(500);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(greenLedPin, HIGH);
    tone(buzzerPin, 784);
    delay(100);
  }
}

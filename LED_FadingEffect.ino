int ledPin = 5;

void setup(){
  pinMode(ledPin, OUTPUT);
}

void loop(){
  // Fade in
  for (int fadeValue = 0; fadeValue <= 255; fadeValue += 5){
    analogWrite(ledPin, fadeValue);
    delay(30);
}

  // Fade Out
  for(int fadeValue = 255; fadeValue >= 0; fadeValue -= 5){
    analogWrite(ledPin, fadeValue);
    delay(30);
}
  
}


const int ledPin = 13

void setup() {
  // Define o pino do LED como saida
  pinMode(ledPin, Output);
}

void loop() {
  // Ascende o LED
digitalWrite(ledPin, HIGH);
delay(1000);//aguarda  segundo

//Desliga o LED
digitalWrite(ledPin, LOW);
delay(1000);//aguarda  segundo
}

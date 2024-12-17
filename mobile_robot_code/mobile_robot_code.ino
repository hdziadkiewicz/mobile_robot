#include <SoftwareSerial.h>

// Inicjalizacja SoftwareSerial (Bluetooth)
SoftwareSerial mySerial(10, 11); // RX, TX

void setup() {
    // Rozpocznij komunikację USB z komputerem
  Serial.begin(9600);
  // Rozpocznij komunikację Bluetooth
  mySerial.begin(9600);


    // Informacja na monitorze szeregowym
  Serial.println("Arduino jest gotowe.");
}

void loop(){
    // Odbiór danych z Bluetooth
  if (mySerial.available() > 0) {
    char receivedChar = mySerial.read(); // Odczytaj znak
    Serial.print("Odebrano przez Bluetooth: ");
    Serial.println(receivedChar); // Wyświetl na monitorze szeregowym
  }
}
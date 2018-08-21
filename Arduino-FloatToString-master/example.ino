#include<stdlib.h> // included for floatToString function

String floatToString(float x, byte precision = 2) {
  char tmp[50];
  dtostrf(x, 0, precision, tmp);
  return String(tmp);
}

void setup() {
  float f = -17.06f; // some float number
  String str = floatToString(f); // conversion call

  // print over serial
  Serial.begin(9600);
  Serial.println(str);
}

void loop() {

}

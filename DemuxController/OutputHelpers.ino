void getOutputStateBrief() {
  String output = "Current output state: [";
  output += digitalRead(OP0);
  output += ", ";
  output += digitalRead(OP1);
  output += ", ";
  output += digitalRead(OP2);
  output += ", ";
  output += digitalRead(OP3);
  output += ", ";
  output += digitalRead(OP4);
  output += ", ";
  output += digitalRead(OP5);
  output += ", ";
  output += digitalRead(OP6);
  output += ", ";
  output += digitalRead(OP7);
  output += "]";
  Serial.println(output);
}

void getOutputState() {
  Serial.println("Current output state: ");
  pinState("Output 0", digitalRead(OP0));
  pinState("Output 1", digitalRead(OP1));
  pinState("Output 2", digitalRead(OP2));
  pinState("Output 3", digitalRead(OP3));
  pinState("Output 4", digitalRead(OP4));
  pinState("Output 5", digitalRead(OP5));
  pinState("Output 6", digitalRead(OP6));
  pinState("Output 7", digitalRead(OP7));
}

// Don't use this for digital pins!
void getOutputStateDetailed() {
  Serial.println("Current output state: ");
  pinStateDetailed("Output 1", analogRead(OP0));
  pinStateDetailed("Output 2", analogRead(OP1));
  pinStateDetailed("Output 3", analogRead(OP2));
  pinStateDetailed("Output 4", analogRead(OP3));
  pinStateDetailed("Output 5", analogRead(OP4));
  pinStateDetailed("Output 6", analogRead(OP5));
  pinStateDetailed("Output 7", analogRead(OP6));
  pinStateDetailed("Output 8", analogRead(OP7));
}

void pinState(const char* pinName, bool high) {
  Serial.print(pinName);
  if(high) {
    Serial.println(" is high"); 
  }
  else {
    Serial.println(" is low");
  }
}

void pinStateDetailed(const char* pinName, int analogValue) {
  Serial.print(pinName);
  Serial.print(": ");
  Serial.println(analogValue);
}

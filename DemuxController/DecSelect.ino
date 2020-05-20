// HK Board specific
// This will be the default enable function for most applications
void enableDec1Dec4() {
  analogWrite(DEC_SELECT_3, aH);
  analogWrite(DEC_SELECT_2, 0);
  analogWrite(DEC_SELECT_1, 0);
}

// only enable dec3
void enableDec3() {
  analogWrite(DEC_SELECT_3, aH);
  analogWrite(DEC_SELECT_2, 0);
  analogWrite(DEC_SELECT_1, aH);
}

// only enable dec2
void enableDec2() {
  analogWrite(DEC_SELECT_3, 0);
  analogWrite(DEC_SELECT_2, aH);
  analogWrite(DEC_SELECT_1, aH);
}

void enableDec2Dec3() {
  analogWrite(DEC_SELECT_3, 0);
  analogWrite(DEC_SELECT_2, 0);
  analogWrite(DEC_SELECT_1, aH);
}

void selectInputY0() {
  analogWrite(DEC_A, 0);
  analogWrite(DEC_B, 0);
  analogWrite(DEC_C, 0);
}

void selectInputY1() {
  analogWrite(DEC_C, 0);
  analogWrite(DEC_B, 0);
  analogWrite(DEC_A, aH);
}

void selectInputY2() {
  analogWrite(DEC_C, 0);
  analogWrite(DEC_B, aH);
  analogWrite(DEC_A, 0);
}

void selectInputY3() {
  analogWrite(DEC_C, 0);
  analogWrite(DEC_B, aH);
  analogWrite(DEC_A, aH);
}

void selectInputY4() {
  analogWrite(DEC_C, aH);
  analogWrite(DEC_B, 0);
  analogWrite(DEC_A, 0);
}

void selectInputY5() {
  analogWrite(DEC_C, aH);
  analogWrite(DEC_B, 0);
  analogWrite(DEC_A, aH);
}

void selectInputY6() {
  analogWrite(DEC_C, aH);
  analogWrite(DEC_B, aH);
  analogWrite(DEC_A, 0);
}

void selectInputY7() {
  analogWrite(DEC_C, aH);
  analogWrite(DEC_B, aH);
  analogWrite(DEC_A, aH);
}

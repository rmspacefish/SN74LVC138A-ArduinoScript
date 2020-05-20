/* 
 * @brief   Demux Controller
 * @details This script controlls the HKB board input selects
 *          and enables.
 *          This script can be used to test the
 *          SN74LVC138A-EP 3-Line to 8-Line Decoder/Demultiplexer.
 * @author  R. Mueller
 */

/**
 * Configuration.
 * Set connected Arduino pins accordingly.
 */
static const uint8_t DEC_SELECT_3 = A5;
static const uint8_t DEC_SELECT_2 = A4;
static const uint8_t DEC_SELECT_1 = A3;

static const uint8_t INPUT_3 = A2;
static const uint8_t DEC_C = INPUT_3;
static const uint8_t INPUT_2 = A1;
static const uint8_t DEC_B = INPUT_2;
static const uint8_t INPUT_1 = A0;
static const uint8_t DEC_A = INPUT_1;

static const uint8_t OP0 = 2;
static const uint8_t OP1 = 3;
static const uint8_t OP2 = 4;
static const uint8_t OP3 = 5;
static const uint8_t OP4 = 6;
static const uint8_t OP5 = 7;
static const uint8_t OP6 = 8;
static const uint8_t OP7 = 9;

// This is the 3.3V analog value for an Arduino with a 5V reference.
// When using an Arduino with 3.3V normal voltage, simply use the highest analog value!
static const int analogHigh = round(3.3/5.0 * 255.0);
static const int aH = analogHigh;

bool runOnce = true;

void setup() {
  Serial.begin(115200);
  Serial.println("Setting up demultiplexer test.");

  Serial.println("Setting up output (decoder input) pins.");
  pinMode(DEC_SELECT_3, OUTPUT);
  pinMode(DEC_SELECT_2, OUTPUT);
  pinMode(DEC_SELECT_1, OUTPUT);
  pinMode(INPUT_3, OUTPUT);
  pinMode(INPUT_2, OUTPUT);
  pinMode(INPUT_1, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  if(runOnce) {
    Serial.println();
    Serial.println("###########################");
    Serial.println("Dec3 Test 1");
    Serial.println("###########################");
    enableDec3();
    checkAllOutputs();
    Serial.println();
    Serial.println("###########################");
    Serial.println("Dec3 Test 2");
    Serial.println("###########################");
    enableDec2Dec3();
    checkAllOutputs();
    Serial.println();
    Serial.println("###########################");
    Serial.println("Dec3 Test Dec1Dec4 Enabled");
    Serial.println("###########################");
    enableDec1Dec4();
    checkAllOutputs();
    Serial.println();
    Serial.println("###########################");
    Serial.println("Dec3 Test Dec2 Enabled");
    Serial.println("###########################");
    enableDec1Dec4();
    checkAllOutputs();
    
    runOnce = false;
  }  
}

void checkAllOutputs() {
  Serial.print("Output 0:");
  selectInputY0();
  getOutputStateBrief();
  Serial.print("Output 1:");
  selectInputY1();
  getOutputStateBrief();
  Serial.print("Output 2:");
  selectInputY2();
  getOutputStateBrief();
  Serial.print("Output 3:");
  selectInputY3();
  getOutputStateBrief();
  Serial.print("Output 4:");
  selectInputY4();
  getOutputStateBrief();
  Serial.print("Output 5:");
  selectInputY5();
  getOutputStateBrief();
  Serial.print("Output 6:");
  selectInputY6();
  getOutputStateBrief();
  Serial.print("Output 7:");
  selectInputY7();
  getOutputStateBrief();
}

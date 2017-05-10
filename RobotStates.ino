int turnCount = 0;
bool encLastState = false;

//code to run when the bot sets up
void initialize() {
  
  pinMode(motor1[0], OUTPUT);
  pinMode(motor1[1], OUTPUT);
  pinMode(motor1[2], OUTPUT);

  pinMode(enc, INPUT_PULLUP);
}

//code to run while enabled.
void enabledLoop() {
  setSpeed(motor1, -0.35);
  if (digitalRead(enc) == HIGH && encLastState == false) {
    turnCount++;
    encLastState = true;
  } else if (digitalRead(enc) == LOW && encLastState == true) {
    encLastState = false;
  }
  Serial.println(turnCount);
}

//code to run while disabled. motors should be set to 0 here.
void disabledLoop() {
  setSpeed(motor1, 0);
}



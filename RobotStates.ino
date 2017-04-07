//code to run when the bot sets up
void initialize() {
  pinMode(motor1[0], OUTPUT);
  pinMode(motor1[1], OUTPUT);
  pinMode(motor1[2], OUTPUT);
}

//code to run while enabled.
void enabledLoop() {
  setSpeed(motorLeft, float(analogRead(pot) / 1023.0));
  setSpeed(motorRight, getSpeed(motorLeft));
}

//code to run while disabled. motors should be set to 0 here.
void disabledLoop() {
 setSpeed(motorLeft, 0);
 setSpeed(motorRight, 0);
}



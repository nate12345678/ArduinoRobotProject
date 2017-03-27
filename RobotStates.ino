//code to run while the bot sets up
void initialize() {
  pinMode(motor1[0], OUTPUT);
  pinMode(motor1[1], OUTPUT);
  pinMode(motor1[2], OUTPUT);
}

//code to run while enabled.
void enabledLoop() {
  setSpeed(motor1, .75);
//  delay(500);
//  setSpeed(motor1, -.75);
//  delay(500);
}

//code to run while disabled. motors should be set to 0 here.
void disabledLoop() {
 setSpeed(motor1, 0); 
}


//These methods provide the code to control the status light of
// the robot. THis should not need to be changed.

byte statusMode = 0;
bool statusState = false;


//sets the status mode for the light
void setStatus(int inStatus) {
  statusMode = inStatus;
}


//updates the status light
void updateStatus() {
  switch (statusMode) {
    case 0:
      digitalWrite(LED_BUILTIN, LOW);
      break;
    case 1:
      digitalWrite(LED_BUILTIN, HIGH);
      break;
    case 2:
      if (statusState) {
        digitalWrite(LED_BUILTIN, LOW);
      } else {
        digitalWrite(LED_BUILTIN, HIGH);
      }
      statusState = !statusState;
      break;
  }
}

//control methods for motors (don't touch)

//sets speed of motor choosen. 
//@param array to read
//@param iSpeed to set (-1~1)
void setSpeed(int motor[], float iSpeed) {
  if(iSpeed == 0) {
    if(motor[4] == 1) {
      digitalWrite(motor[1], LOW);
    } else {
      digitalWrite(motor[1], HIGH);
    }
    digitalWrite(motor[0], LOW);
    analogWrite(motor[2], 0);
    motor[3] == 0;
  } else if (iSpeed > 0) {
    digitalWrite(motor[0], HIGH);
    digitalWrite(motor[1], LOW);
    analogWrite(motor[2], int(iSpeed * 255));
  } else if (iSpeed < 0) {
    digitalWrite(motor[0], LOW);
    digitalWrite(motor[1], HIGH);
    analogWrite(motor[2], int(-iSpeed * 255));
  }
  motor[3] = int(iSpeed * 255);
  
}

float getSpeed(int motor[]) {
  return float(motor[3] / 255.0);
}

void setBrakeMode(int motor[], bool brakeMode) {
  motor[4] = brakeMode;
}


//INTRUCTIONS:
//  This project was set up so that it would be easier to make
//  robots using the arduino mega 2560. it uses states to control
//  actions. It requires a switch between pin 53 and ground to
//  enable and disable the bot. Code in the RobotProject should
//  need to  be changed; instead use the RobotStates methods.
//Status light meanings:
//  no light: setup has not run, something is wrong
//  solid light: setup is running, or robot is DISABLED
//  flashing slowly: robot is ENABLED


byte loopCount = 0;
boolean enabled = false;
const byte enSwitch = 53;
const byte loopTime = 20;


void setup() {
  //status light so that you know what the arduino is doing
  setStatus(1);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(enSwitch, INPUT_PULLUP);
  updateStatus();
  init();
  // at end of loading, wait .1 sec
  delay(100);
}


//loop that continuously runs
void loop() {
  if (digitalRead(enSwitch) == HIGH) {
    enabled = false;
    setStatus(1);
  } else {
    enabled = true;
    setStatus(2);
  }
  delay(loopTime);
  
  if (enabled) {
    loopCount++;
    if (loopCount % 25 == 0) {
      updateStatus();
      loopCount = 0;
    }
    enabledLoop();
  } else {
    updateStatus();
    disabledLoop();
  }

}






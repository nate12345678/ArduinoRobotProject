// Map of all the pinouts on the bot.
// Do not use pins 13 or 53

//ANALOG INPUTS
const int pot = A0;


//DIGITAL INPUTS
const int enc = 32;


//DIGITAL OUTPUTS



//MOTORS
//Motor arrays are stored here. Each motor has its own array
//to represent ports, speed, direction, and brake mode
//Key:
// ctrl1 port | ctrl2 port | pwm port   | speed    | brake mode
// 0~52ex13   | 0~52ex13   | 2~12,44~46 | -255~255 | 0-1

//a motor has already been declared for convienience.
int motor1[] = {5, 6, 7, 0, 1};


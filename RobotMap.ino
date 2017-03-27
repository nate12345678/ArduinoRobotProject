// Map of all the pinouts on the bot. 
// Do not use pins 13 or 53


//MOTORS
//Motor arrays are stored here. Each motor has its own array 
//to represent ports, speed, direction, and brake mode
//Key:
//ctrl1 port, ctrl2 port,  pwm port, speed, direction, brake mode
// 0-53ex13    0-53ex13  2-12,44-46  0-255     0-1        0-1

//a motor has already been declared for convienience.
int motor1[] = {5,6,7,0,1,1};

#include <Arduino.h>
// #define BAUDRATE = 115200
// put function declarations here:
// int myFunction(int, int);
int incomingByte = 0;
void setup()
{
  Serial.begin(9600);
  // put your setup code here, to run once:
  // int result = myFunction(2, 3);
}

void loop()
{
  // send data only when you receive data:
  // Serial.println("Checking ..");
  if (Serial.available() > 0)
  {

    // read the incoming byte:

    incomingByte = Serial.read();
    // char t = incomingByte;

    // say what you got:

    Serial.print("I received: ");
    // Serial.print(incomingByte);
    Serial.println(incomingByte, HEX);
  }
}
// pio device monitor -f default
// put function definitions here:
// int myFunction(int x, int y)
// {
//   return x + y;
// }
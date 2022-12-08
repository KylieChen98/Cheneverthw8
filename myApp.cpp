#include "derek_LED.h"

using namespace std;

#define LED_PATH "/sys/class/leds/beaglebone:green:usr"

int main(int argc, char* argv[])
{
  if(argc!=2)
  {
    cout << "Usage is myApp command" << endl;
    cout << "Where command is any one of: on, off, flash, status." << endl;
    cout << "Example Evocation: ./myApp on" << endl;
    return 1;
  }
  cout << "Beginning myApp application." << endl;
  string cmd(argv[1]);
  LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
  for(int i=0; i<=3; i++)
  {
    if(cmd=="on") leds[i].turnOn();
    else if(cmd=="off") leds[i].turnOff();
    else if(cmd=="flash") leds[i].flash("50");
    else if(cmd=="status") leds[i].outputState();
    else
    {
      cout << "Invalid command. Commands are on, off, flash, status." << endl;
    }
  }
  cout << "Finished the myApp application." << endl;
  return 0;
}

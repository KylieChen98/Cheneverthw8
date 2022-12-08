#include "derek_LED.h"

using namespace std;

#define LED_PATH "/sys/class/leds/beaglebone:green:usr"

int main(int argc, char* argv[])
{
  if(argc!=4)
  {
    cout << "Usage is myApp command LED Blinks" << endl;
    cout << "Where command is any one of: on, off, flash, blink, or status." << endl;
    cout << "Example Evocation: ./myApp blink 1 5 (Blinks LED 1, 5 times.)" << endl;
    return 1;
  }
  cout << "Beginning myApp application." << endl;
  string cmd(argv[1]);
  LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
  int led_num = stoi(argv[2]);
  int blinks = stoi(argv[3]);
  if(cmd=="on") leds[led_num].turnOn();
  else if(cmd=="off") leds[led_num].turnOff();
  else if(cmd=="flash") leds[led_num].flash("50");
  else if(cmd=="blink") leds[led_num].blink(blinks);
  else if(cmd=="status") leds[led_num].outputState();
  else
  {
    cout << "Invalid command. Commands are on, off, flash, blink, or status." << endl;
  }
  cout << "Finished the myApp application." << endl;
  return 0;
}

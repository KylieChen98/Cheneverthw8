#!/bin/bash

echo Building the myApp application.
g++ myApp.cpp derek_LED.cpp -o myApp
chmod u+x myApp
echo myApp application built successfully.
echo Building the myBlink application.
g++ myBlink.cpp derek_LED.cpp -o myBlink
chmod u+x myBlink
echo myBlink application built successfully.
echo Building the bankApp application.
g++ bankApp.cpp bankAccount.cpp -o bankApp
chmod u+x bankApp
echo bankApp application built successfully.

# About

This repository hosts a voltage follower built with an Arduino.
The circuit was designed to monitor the voltage power on a railbus of +/- 24V CANBUS signaling. 


# Attached files

The arduino code. 
Attached images:
1.	Schematic of Power Bus Monitor Circuit
2.	Connection of power supplies on breadboard
3.	Final stage of the circuit, side 1.
4.	Final stage of the circuit, side 2.
5.	Final stage of the circuit, side 3.
6.	A fully labeled image of the circuit in a previous stage. The connections have slightly changed. It is attached just to help with the connections, resistors, etc.


# Testing
For the testing the circuit did not monitor +/-24V but +/-5V.A jumper was used from each 5V adapter to the +5V and -5V that would be monitored respectively. 
Firstly the output of each adapter was connected to one unused hole and then with a jumper from there was connected it to where it should be.
The green LEDs are on when everything is ok and the red ones light when the voltage goes below a threshold.
The two red LEDs are the error LEDs and the four green just show the status of each power supply.



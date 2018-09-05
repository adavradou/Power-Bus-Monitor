# Power-Bus-Monitor

During my internship in a factory the CANBUS controlled vehicles would lose communication (reason unknown). The CANBUS signaling was a bit tricky, because the factory used a modem (Make/Model UNKNOWN) to convert signals to +/- 24V. For some reason, the problem was isolated in one specific location.
The circuit presented in the schematic was built using an Arduino in order to monitor the voltage power of the railbus. The green LEDs are on when everything is ok and the red ones light when the voltage goes below a threshold.

The arduino code is attached.
This circuit was built thank to the continuous guidance, through the Arduino forum, of the user “raschemmel”. He also designed the schematic. 

Attached images:
1) Schematic of Power Bus Monitor Circuit 
2) Connection of power supplies on breadboard
3) Final stage of the circuit, side 1.
4) Final stage of the circuit, side 2.
5) Final stage of the circuit, side 3.
6) A fully labeled image of the circuit in a previous stage. The connections have slightly changed. It is attached just to help with the connections, resistors, etc.

Additional information:
I did not test it on the +/- 24V power supply of the factory's rail system, I tested it on the +/-5V power supplies of our adaptors that I also used to supply the op amps.
In order to test the circuit on such lower voltage and instead of changing the resistors, I used two potentiometers to replace the comparators' resistors (one pot replaced R5&R6 and the other replaced R7&R8). That means that by turning the pots I could change the threshold and thus check if the ERROR LEDs light when they should be (when voltage from power supply is lower than our threshold).

On the pictures attached you can see how the circuit at the final stage looked like. 
The two red LEDs are the error LEDs and the four green just show the status of each power supply.
Because for the test I did not monitor +/-24V but +/-5V, I used a jumper from each 5V adapter to the +5V and -5V I would monitor respectively. 
I first connected the output of each adapter to one unused hole and then with a jumper from there I connected it to where it should be.


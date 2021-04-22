# MPCA-Lab-Project
To create an efficient home security system with the sensors and Arduino circuits provided by the Tinkercad Software.
This was made as a part of our MPCA lab (UE18CS256) at PES University.
Sensors used are:
<br>
**Gas Sensor(analog sensor):**
As we start the simulation , when the density of the gas present around the sensor is above 100 units(set by us),we rotate the servo motor(fire exit) by 90 degrees which in turn rotates the emergency door. Else, the servo motors do not rotate indicating there is not emergency due to gas.
<br>
**PIR sensor(digital sensor):**
<br>
As we start the simulation, when motion is detected by the pir sensor within the range of the sensor, the value read from the pir sensor(pirsen) is set to 1,which in turn causes the piezo sensor to cause an alarm with a tone of 60 units.
<br>
**Photoresistor(analog):**
As we start the simulation, when the value of the photoresistor is lesser than 100 units, the built-in led which is connected to one of the digital pins is set to high(switched-on) indicating that the room is dark .
<br>
**Force sensor(analog):**
As we start the simulation, when the force sensor detects a force greater than 4 units,the piezo sensor connected to one of the digital pins makes an alarming sound with a tone of 60 units for one second.

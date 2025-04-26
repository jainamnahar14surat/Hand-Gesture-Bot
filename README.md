#**Hand Gesture Controlled Bot**

A wireless, gesture-controlled robotic car project using Arduino Uno, NRF24L01 modules, and MPU6050 sensors.

**Project Overview**

This project involves controlling a car wirelessly using hand gestures. A glove equipped with an MPU6050 sensor, Arduino Uno, and NRF24L01 module captures the orientation of the user's hand and sends the data to a receiver unit. The receiver decodes these gestures and commands the motor driver to move the car accordingly.

**File Structure**

1. transfer.ino – Code for the transmitter unit. 
2. receiver.ino – Code for the receiver unit.


****Components Used****

**- Transmitter** 
1. Arduino Uno
2. NRF24L01 wireless module
3. MPU6050 (Accelerometer + Gyroscope)
4. Battery Pack 

**- Receiver (Car Unit)**
1. Arduino Uno
2. NRF24L01 wireless module
3. L298N Motor Driver
4. Motors (DC motors)
5. Wheels
6. Chassis
7. Battery Pack

**How to Run**

1. Upload transfer.ino to the Arduino Uno in the glove.
2. Upload receiver.ino to the Arduino Uno in the car.
3. Power both units using their battery packs.
4. Wear the glove and control the car by moving your hand!

**Future Improvements**

Add obstacle detection (e.g., using ultrasonic sensors).

Implement more complex gestures for additional actions.

Make the glove more ergonomic and lightweight.

Integrate Bluetooth for additional mobile control.

License
This project is open-source and available under the MIT License.







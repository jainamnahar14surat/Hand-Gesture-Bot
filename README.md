# **Hand Gesture Controlled Bot**

A wireless, gesture-controlled robotic car project using Arduino Uno, NRF24L01 modules, and MPU6050 sensors.

## **Project Overview**

This project involves controlling a car wirelessly using hand gestures. A glove equipped with an MPU6050 sensor, Arduino Uno, and NRF24L01 module captures the orientation of the user's hand and sends the data to a receiver unit. The receiver decodes these gestures and commands the motor driver to move the car accordingly.

## **File Structure**

1. transfer.ino – Code for the transmitter unit. 
2. receiver.ino – Code for the receiver unit.


## **Components Used**

### **- Transmitter** 
1. Arduino Uno
2. NRF24L01 wireless module
3. MPU6050 (Accelerometer + Gyroscope)
4. Battery Pack 

### **- Receiver (Car Unit)**
1. Arduino Uno
2. NRF24L01 wireless module
3. L298N Motor Driver
4. Motors (DC motors)
5. Wheels
6. Chassis
7. Battery Pack

## **Working Principle**

### **Transmitter (Glove Unit)**
1. The MPU6050 sensor continuously measures the accelerometer and gyroscope data to capture the hand’s orientation and motion.
2. The Arduino Uno processes these sensor readings to determine the intended movement direction, such as forward, backward, left, or right.
3. The processed directional data is transmitted wirelessly to the receiver using the NRF24L01 radio communication module, ensuring real-time gesture transmission.

### **Receiver (Car Unit)**
1. The NRF24L01 module at the receiver continuously listens for incoming data packets from the transmitter.
2. Upon receiving the transmitted data, the Arduino Uno decodes and interprets the gesture information to identify the required movement command.
3. Based on the interpreted command, the Arduino generates control signals for the motor driver.
4. The motor driver then actuates the motors accordingly, enabling the car to move in the direction corresponding to the user's hand gesture.

### **Flow Chart**
![image](https://github.com/user-attachments/assets/2100d93d-243e-40a3-b887-98b8778aae44)


## **How to Run**

1. Upload transfer.ino to the Arduino Uno in the glove.
2. Upload receiver.ino to the Arduino Uno in the car.
3. Power both units using their battery packs.
4. Wear the glove and control the car by moving your hand!

## **Future Improvements**


## License
This project is open-source and available under the MIT License.







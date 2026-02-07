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
![image](https://github.com/user-attachments/assets/2dcade15-9420-4741-96fe-eaa2e61d3cbf)

## **How to Run**

1. Upload transfer.ino to the Arduino Uno in the glove.
2. Upload receiver.ino to the Arduino Uno in the car.
3. Power both units using their battery packs.
4. Wear the glove and control the car by moving your hand!

## Application

### Civil
- In the future we can design a wireless robot that can sense hand gestures by using wireless technologies.
- Our system has shown the possibility that interaction with machines through gestures is a feasible task and the set of detected gestures could be enhanced to more commands by implementing a more complex model of an advanced vehicle not only in limited space but also in the broader area as in the roads too.
- In the future, service robots can replace humans.

### Defense
- It can be used in Mil Ops as a robotic vehicle that can be handled by a soldier to avoid casualties.
- It can help to identify the location of enemies or terrorists at the time of Mil Ops to avoid causalities. 
- It can also help to detect mines to reduce fatalities.
- Assits in CASO

## Real Life Pics
![20230125_191518](https://github.com/user-attachments/assets/367e98a0-8fc0-4030-be73-31f18de375e0)

## Contact

Feel free to reach out for collaborations or just a friendly hello!

-   **Email:** naharjainam91@gmail.com
-   **LinkedIn:** https://www.linkedin.com/in/jainam-nahar-280292253
-   **GitHub:** https://github.com/jainamnahar14surat
-   **Website** https://jaina-portfolio.netlify.app/

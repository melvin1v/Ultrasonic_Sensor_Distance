# Ultrasonic Distance Sensor

![IMG_5599](https://user-images.githubusercontent.com/79267473/187081964-79d6f478-ded9-442e-8107-99b9baf56a25.jpg)

Using an Ultrasonic Sensor coupled with an Arduino Uno to calculate distances between the sensor and objects.

## Components Used: 
*  Arduino Uno 
*  HC-SR04 Ultrasonic Sensor 
*  LED 
*  220Ω Resistor 

## How it works:

An ultrasonic sensor consists of a transmitter and a receiver. As the name suggests, the transmitter, transmits the ultrasonic waves and the receiver receives the sent signal. <br />
In order to send the signal, the Trig pin on the sensor will need to be set HIGH for 10ms and then set LOW afterwards. After the transmission the Echo pin shoud be set HIGH to receive the signal. <br />
The Echo pin will read the time (in microseconds) for signal to be transmitted, hit an object and be reflected back to the Echo pin. <br />
Thus the disance can be acheived by using the following equation: Distance = (pulse_width*0.0343)/2; Where pulse width is the time read by the Echo pin and 0.0343 is the speed of sound in cm/microsecond. 

## Circuit Schematic 

![Editing Components](https://user-images.githubusercontent.com/79267473/187082712-2dc30664-6c68-4b35-95c6-359384e421ed.png)

### Ultrasonic Sensor Connections 
* VCC -> +ve Power Rail 
* Trig -> Digital Pin 9
* Echo -> Digital Pin 10
* Gnd -> -ve Power Rail 

## Results 

The Serial Monitor on the Arduino IDE provides live data straight from the sensor and can be seen below.
<img width="1470" alt="Screenshot 2022-08-28 at 16 54 26" src="https://user-images.githubusercontent.com/79267473/187083214-d52f3ce2-8649-46cc-a8a7-940b919eb5f8.png">

The Serial Plotter on the Arduino IDE plots the live data from the sensor and produces a real-time graph.The red plot represents time whilst the purple plot represents distance.
<img width="1470" alt="Screenshot 2022-08-28 at 16 54 59" src="https://user-images.githubusercontent.com/79267473/187083299-7ef89c2c-9a0f-465f-b3f0-0a9c7e3ee261.png">


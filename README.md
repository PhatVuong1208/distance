# distance
### 🛠 Hardware Requirements

* **Microcontroller:** 1x Arduino Uno (or compatible board) and a USB cable.
* **Sensor:** 1x HC-SR04 Ultrasonic Sensor (Trig pin connected to digital pin 6, Echo pin connected to digital pin 5)[cite: 3].
* **Output Device:** 1x Active Buzzer (connected to digital pin 3)[cite: 3].
* **Wiring:** 1x Breadboard and a set of Jumper Wires.

### 💻 Software & Libraries

* **IDE:** [Arduino IDE](https://www.arduino.cc/en/software)
* **Libraries:** No external libraries are required for this project[cite: 3]. (It relies entirely on built-in Arduino functions).

### 🕹️ How It Works

* **Distance Measurement:** The ultrasonic sensor emits a pulse and measures the time it takes to bounce back, calculating the distance to an object[cite: 3].
* **Serial Monitoring:** The measured distance (in centimeters) is continuously printed to the Serial Monitor at a baud rate of 9600[cite: 3].
* **Proximity Alert:** If an object is detected within a range of 1 to 30 centimeters, the active buzzer is triggered to sound an alarm[cite: 3].
* **Safe Zone:** If the object is outside the 30 cm range, the buzzer turns off[cite: 3].

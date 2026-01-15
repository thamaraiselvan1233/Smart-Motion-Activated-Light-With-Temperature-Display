# Arduino PIR Motion & Temperature Monitoring System

This project is an Arduino-based embedded system that monitors environmental temperature and human motion, displaying real-time information on a 16x2 I2C LCD. It is designed to demonstrate basic sensor interfacing, digital and analog signal processing, and LCD communication using Arduino Uno.

The system is simulated and tested using the Wokwi Arduino Simulator.

---

## Project Overview

The Arduino PIR Motion & Temperature Monitoring System continuously reads data from a temperature sensor and a PIR motion sensor. Based on the sensor readings:
- The current temperature is displayed on the LCD
- Motion detection status is shown in real time
- An LED indicator turns ON when motion is detected

This project is suitable for beginners and Electronics & Communication Engineering (ECE) students learning embedded systems and Arduino programming.

---

## Components Used

- Arduino Uno  
- PIR Motion Sensor  
- LM35 Temperature Sensor  
- 16x2 I2C LCD Display  
- LED  
- Connecting Wires  

---

## System Working

1. The LM35 temperature sensor provides an analog voltage proportional to temperature.
2. Arduino reads this analog value and converts it into temperature in Celsius.
3. The PIR sensor detects motion and sends a digital HIGH or LOW signal.
4. The LCD displays:
   - Temperature value in Celsius
   - Motion status (Motion Detected / No Motion)
5. When motion is detected:
   - The LED turns ON
6. When no motion is detected:
   - The LED remains OFF

All updates occur in real time with a fixed delay for stable display output.

---

## Circuit Connections

### LCD (I2C)
- SDA → A4  
- SCL → A5  
- VCC → 5V  
- GND → GND  

### PIR Sensor
- VCC → 5V  
- GND → GND  
- OUT → Digital Pin 2  

### Temperature Sensor (LM35)
- VCC → 5V  
- GND → GND  
- OUT → Analog Pin A0  

### LED
- Anode → Digital Pin 7 (via resistor)  
- Cathode → GND  

---

## Software & Libraries

- Arduino IDE / Wokwi Simulator  
- LiquidCrystal_I2C Library  
- Wire Library  

---

## Files in This Repository

- `sketch.ino`  
  Contains the complete Arduino source code for sensor reading, LCD display, and LED control.

- `diagram.json`  
  Contains the circuit wiring diagram used in the Wokwi simulator.

- `README.md`  
  Project documentation.

---

## Simulation

This project was built and tested using the **Wokwi Arduino Simulator**, which allows online simulation of Arduino hardware and circuits without physical components.

---

## Applications

- Smart home monitoring systems  
- Motion detection systems  
- Temperature monitoring units  
- Embedded systems learning projects  
- Mini projects for ECE students  

---

## Future Enhancements

- Add buzzer for motion alert  
- Display humidity using DHT11 sensor  
- Send data to IoT cloud platforms  
- Add mobile or web monitoring  
- Store temperature data for analysis  

---

## Author

**Thamarai Selvan**  
Bachelor of Engineering – Electronics and Communication Engineering  

---

## License

This project is open-source and available for learning and educational purposes.

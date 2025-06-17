# Attendance Monitoring System (IoT + Software)

This is a hybrid IoT-based Attendance Monitoring System that uses hardware motion sensors with Arduino and software logging on a PC to automatically detect and log presence events in real time.

## 🎯 Features

- PIR sensor-based motion detection with Arduino Uno
- Serial communication between Arduino and PC via USB
- Python script to log occupancy data locally
- Visual (LED) and audio (buzzer) feedback on motion detection
- Easily extendable for classroom, office, or lab attendance systems

## 🛠 Technologies Used

- **Arduino Uno** (C++ for microcontroller logic)
- **PIR Motion Sensor**, LED, Buzzer
- **Python 3** for logging and software integration
- **PySerial** for serial communication with Arduino

## 📁 Project Structure

```
Attendance-Monitoring-System/
├── arduino_code.cpp               # C++ code to run on Arduino
├── pc_side_logging_software.py   # Python script to receive and log attendance data
├── requirements.txt              # Python dependencies (e.g., pyserial)
└── README.md                     # Project documentation
```

## 🔌 Hardware Components Required

- Arduino Uno
- PIR Motion Sensor
- 1 LED
- 1 Buzzer
- Breadboard and jumper wires
- USB cable (for Arduino-PC communication)

## 🧠 How It Works

1. The PIR sensor detects motion.
2. If motion is detected:
   - The Arduino turns on the LED and triggers the buzzer.
   - It sends a message (e.g., "Motion Detected") to the PC via serial.
3. The Python script (`pc_side_logging_software.py`) running on the PC listens to the serial port and logs the data to the console or a file.

## ✅ Setup Instructions

### 1. Arduino Side
- Upload `arduino_code.cpp` to your Arduino using the Arduino IDE.
- Connect PIR sensor output to a digital pin (as defined in the code).
- Connect LED and Buzzer to appropriate digital pins.

### 2. Python Logging Software (PC Side)
- Make sure you have Python 3 installed.
- Install required packages:
```bash
pip install -r requirements.txt
```
- Run the script:
```bash
python pc_side_logging_software.py
```
- Adjust the COM port in the script as per your system.

## 📄 requirements.txt

```txt
pyserial>=3.4
```

## 💡 Future Enhancements

- Log data to CSV or database
- Add real-time dashboard (e.g., using Flask)
- Use RFID for individual identification
- Automate report generation
- Add timestamps for attendance tracking

## 👨‍💻 Author

**Manas Darak**  
GitHub: [https://github.com/manasdarak10](https://github.com/manasdarak10)

import serial
import time
from datetime import datetime

# Set COM port (adjust according to your system)
ser = serial.Serial('COM3', 9600, timeout=1)
time.sleep(2)

# Create log file
log_file = open("attendance_log.csv", "a")
log_file.write("Timestamp,Event\n")

print("Logging started...")

try:
    while True:
        if ser.in_waiting > 0:
            line = ser.readline().decode('utf-8').strip()
            if line:
                timestamp = datetime.now().strftime('%Y-%m-%d %H:%M:%S')
                log_file.write(f"{timestamp},{line}\n")
                print(f"{timestamp} - {line}")
except KeyboardInterrupt:
    print("Logging stopped by user.")
finally:
    log_file.close()
    ser.close()

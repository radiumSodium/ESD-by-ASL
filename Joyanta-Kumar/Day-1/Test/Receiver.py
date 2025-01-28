from serial import Serial

serial_port = "COM3"
baud_rate = 115200
count = 0
prev = ""
message = ""

ser = Serial(serial_port, baud_rate)

while True:
    if ser.in_waiting > 0:
        prev = message
        message = ser.read().decode("utf-8")
        if (prev != message):
            count += 1
            print(count, message)

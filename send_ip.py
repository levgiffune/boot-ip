import os, serial, time

ip = os.system("curl ipinfo.io/ip")

arduino = serial.Serial('/dev/ttyACM0', 9600, timeout=.1)
time.sleep(1)
print ip
arduino.write(ip)


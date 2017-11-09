
import os, serial, time, sys

ip = os.system("curl ipinfo.io/ip")


print ip
arduino = serial.Serial('/dev/cu.usbmodem1411', 9600, timeout=.1)


while 1:
    arduino.write(ip);


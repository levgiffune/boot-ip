
import serial, time, subprocess

ip = subprocess.check_output(["curl", "ipinfo.io/ip"])
ip = ip[:-1]


print ip


arduino = serial.Serial('/dev/tty.usbmodem1411', 9600)
time.sleep(5)

arduino.write(ip);

import serial, time, subprocess

ip = subprocess.check_output("curl ipinfo.io/ip", shell=True)
ip = ip[:-1]


print ip


arduino = serial.Serial('/dev/ttyACM0', 9600)
time.sleep(5)

arduino.write(ip);
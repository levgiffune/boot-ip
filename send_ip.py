try:
    import os, serial, time, sys

    ip = os.system("curl ipinfo.io/ip")
    print ip

    try:
    	arduino = serial.Serial('/dev/ttyACM0', 115200, timeout=.1)
    except serial.serialutil.SerialException:
    	sys.exit(1)


    try:
    	while True:
    		data = arduino.readline()[:-2] 
    		if data == "recieved":
    			arduino.write(ip);
    except exception, e:
    	sys.exit(2)
except KeyboardInterrupt:
    sys.exit(3)
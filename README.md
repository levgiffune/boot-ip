display public ip of raspi on boot on analog display

* must enable autologin in /etc/lightdm/lightdm.conf and 
/etc/pam.d/lightdm-autologin (look it up) THE AUTOLOGIN USER AND TIMEOUT ARE 
DEFINED TWO TIMES AND YOU MUST 
UNCOMMENT BOTH


circuit on arduino (with 2x16 lcd): 
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K potentiometer:
  * ends to +5V and ground
  * wiper to LCD VO pin (pin 3)

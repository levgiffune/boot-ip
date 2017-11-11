#!/bin/bash

echo -e "[*]Welcome to the installer...\n\n";
sleep 1;
echo "[+]giving everyone write permissions to send_ip.py";
sudo chmod +x ./send_ip.py;
echo "[+]copying send_ip.service to /etc/systemd/system";
sudo cp send_ip.service /etc/systemd/system/send_ip.service;
echo "[+]enabling send_ip.service";
sudo systemctl enable send_ip.service;
echo -e "\n\n[*]all done!";
exit 0;

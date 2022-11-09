# BadUSB
Arduino Scripts for our Digispark Attiny85 programmable USBs. 

Feel free to add your own and make the existing scripts better. You can download this as a zip or use `git clone https://github.com/BYUI-CSA/BadUSB`. 

# Setup

This video by The Cyber Mentor does an excellent job detailing the setup. See the additional recommendations to be sure everything works on the first go.

https://www.youtube.com/watch?v=uH-4btjE56E 

## Additional Recommendations

- Use Arduino IDE version 1.8.19
- Use this new Board Manager URL: https://raw.githubusercontent.com/ArminJo/DigistumpArduino/master/package_digistump_index.json
  - The old Board Manager URL provides 5 year old packages! Only seemed to cause issues on Linux
- You shouldn't have to manually install the drivers, just simply follow the steps to add the "Digistump AVR Boards" and they should be installed automatically

### Linux Recommendations

There are several extra hoops to jump through. You must add the udev rules and ensure that you are a part of the necessary groups

- To properly install Arduino IDE 1.8.19:
  - Download (arduino-1.8.19-linux64.tar.xz)[https://downloads.arduino.cc/arduino-1.8.19-linux64.tar.xz] to `~/.config` or use `wget https://downloads.arduino.cc/arduino-1.8.19-linux64.tar.xz -O ~/.config/arduino-1.8.19-linux64.tar.xz`
  - Extract it with `cd ~/.config; tar xvf arduino-1.8.19-linux64.tar.xz; rm arduino-1.8.19-linux64.tar.xz`
  - Run both `install.sh` and `arduino-linux-setup.sh`. You may copy and paste this command `cd arduino-1.8.19; sudo install.sh; ./arduino-linux-setup.sh $USER`
-  Lasly, you need to add the micronuclus udev rules for ATTiny85:
  - `sudo wget https://raw.githubusercontent.com/byui-csa/bad-usb/main/49-micronucleus.rules -O /etc/udev/rules.d/49-micronucleus.rules`

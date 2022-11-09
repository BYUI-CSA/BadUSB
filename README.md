# BadUSB

Arduino Scripts for our Digispark Attiny85 programmable USBs. 

Feel free to add your own and make the existing scripts better. You can download this repo as a zip or use `git clone https://github.com/BYUI-CSA/BadUSB`. 

## Setup

This video by The Cyber Mentor does an excellent job detailing the setup. See our additional recommendations to be sure everything works on the first go.

https://www.youtube.com/watch?v=uH-4btjE56E 

### Additional Recommendations

Use Arduino IDE version 1.8.19 and use this new Board Manager URL: https://raw.githubusercontent.com/ArminJo/DigistumpArduino/master/package_digistump_index.json. The old Board Manager URL provides 5 year old package, which can causes issues (specifically on Linux).

You shouldn't have to manually install the drivers, just simply follow the steps to add the "Digistump AVR Boards" and they should be installed automatically.

#### Linux Recommendations

To properly install Arduino IDE 1.8.19, download [arduino-1.8.19-linux64.tar.xz](https://downloads.arduino.cc/arduino-1.8.19-linux64.tar.xz) (recommended to ~/.config), extract it, then run `install.sh` (creates desktop launcher) and `arduino-linux-setup.sh` (adds necessary groups and sets up Arduino udev rules). Feel free to use the commands below to do this automatically.

```bash
wget https://downloads.arduino.cc/arduino-1.8.19-linux64.tar.xz -O ~/.config/arduino-1.8.19-linux64.tar.xz
cd ~/.config; tar xvf arduino-1.8.19-linux64.tar.xz; rm arduino-1.8.19-linux64.tar.xz
cd arduino-1.8.19; sudo install.sh; ./arduino-linux-setup.sh $USER
```

Lasly, you need to add the micronuclus udev rules. Download [49-micronucleus.rules](https://github.com/byui-csa/bad-usb/blob/main/49-micronucleus.rules) and place the file in `/etc/udev/rules.d/`. Feel free to use the command below to do this automatically.

```bash
sudo wget https://raw.githubusercontent.com/byui-csa/bad-usb/main/49-micronucleus.rules -O /etc/udev/rules.d/49-micronucleus.rules
```

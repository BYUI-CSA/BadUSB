# BadUSB

Arduino Scripts for our Digispark Attiny85 programmable USBs. 

Feel free to add your own and make the existing scripts better. You can download this repo as a zip or use `git clone https://github.com/byui-csa/bad-usb`. 

## Development Environment

This [video](https://www.youtube.com/watch?v=uH-4btjE56E) by The Cyber Mentor does an excellent job detailing the setup. See the recommendations below to be sure everything works on the first go.

### Recommendations

Use and install [Arduino IDE 1.8.19](https://www.arduino.cc/en/software#legacy-ide-18x).

Use the the following Board Manager URL. The video's Board Manager URL provides 5 year old packages, which can causes issues (specifically on Linux).

```
https://raw.githubusercontent.com/ArminJo/DigistumpArduino/master/package_digistump_index.json
```

#### Windows

Sometimes the drivers are automatically installed and sometimes they are not. To manually install drivers on Windows download [Digistump.Drivers.zip](https://github.com/digistump/DigistumpArduino/releases/download/1.6.7/Digistump.Drivers.zip), extract all files, then run `Install Drivers.exe`. 

#### Linux

To properly install Arduino IDE 1.8.19, download [arduino-1.8.19-linux64.tar.xz](https://downloads.arduino.cc/arduino-1.8.19-linux64.tar.xz) (recommended to ~/.config), extract it, then run `install.sh` (creates desktop launcher) and `arduino-linux-setup.sh` (adds necessary groups and sets up Arduino udev rules). Feel free to use the commands below to do this automatically.

```bash
wget https://downloads.arduino.cc/arduino-1.8.19-linux64.tar.xz -O ~/.config/arduino-1.8.19-linux64.tar.xz
cd ~/.config; tar xvf arduino-1.8.19-linux64.tar.xz; rm arduino-1.8.19-linux64.tar.xz
cd arduino-1.8.19; sudo ./install.sh; ./arduino-linux-setup.sh $USER
```

Lasly, you need to add the micronuclus udev rules. Download [49-micronucleus.rules](https://github.com/byui-csa/bad-usb/blob/main/49-micronucleus.rules) and place the file in `/etc/udev/rules.d/`. Feel free to use the command below to do this automatically.

```bash
sudo wget https://raw.githubusercontent.com/byui-csa/bad-usb/main/49-micronucleus.rules -O /etc/udev/rules.d/49-micronucleus.rules
```

You will need to restart your system at this point. If you see errors such as `Unknown Device/Micronucleus Version` when uploading scripts then make sure that you're using the new Board Manager URL from above.

## Repos

- Forked Community: https://github.com/ArminJo/DigistumpArduino
- Deprecated Official: https://github.com/digistump/DigistumpArduino

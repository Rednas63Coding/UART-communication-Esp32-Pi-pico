# UART-communication-Esp32-Pi-pico
Esp32 communicating with Raspberry Pi Pico(CircuitPython) over uart.

This is an easy code for you if you dont know how to send data from Esp32 to Raspberry Pi Pico or from Raspberry Pi Pico to Esp32.
This code is not fully made by Rednas, I just put these togeather because I haven't seen project like that.

If something is wrong with it please say I'll try to fix it.

NB!

You can also upload Esp32 code to 2 Esp-s and then you can communicate between 2 Esp.
Be sure to connect Tx to Rx and Rx to Tx.

# Wiring

| Esp32         | Pico     |
|:-------------:|:--------:|
| GPIO16        | Pin 0    |
| GPIO17        | Pin 1    |
| GND           | GND      |

# Sending data to Pico

For sending data from Esp to Pico you can type it to serial monitor.

Or use

hSerial.write("Hello to Pico");

in your arduino code.


# Receiving data with Pico

I used Thonny for receiving data and running code on Pico.


# Sending data to Esp32

For send data to Esp32 you can use:

uart.write("Hello\n")   #sends data to Esp32 and moves cursor to the next line

uart.write("Hello")     #sends data to Esp32 and dosen't move cursor to the next line

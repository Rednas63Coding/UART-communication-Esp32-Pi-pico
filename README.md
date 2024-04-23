# UART-communication-Esp32-Pi-pico
Esp32 communicating with Raspberry Pi Pico(CircuitPython) over uart.

This is an easy code for you if you dont know how to send data from Esp32 to Raspberry Pi Pico.
This code is not fully made by Rednas, I just found these and put togeather because I havent seen project like that.

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

# Sending data

For sending data from Esp to Pico you can type it to serial monitor.

Or use

hSerial.write("Hello to Pico");

in your arduino code.

# Receiving

I used Thonny for receiving data and running code on Pico.

import board
import busio
import time

# Define the pins for UART communication
TX_PIN = board.GP0
RX_PIN = board.GP1

# Initialize UART for communication with the ESP32
uart = busio.UART(TX_PIN, RX_PIN, baudrate=115200)

while True:

    if uart.in_waiting:  # Check if there's data in the ESP32 UART buffer
        data_from_esp32 = uart.read(uart.in_waiting)  # Read data from ESP32
        print(data_from_esp32)

    time.sleep(0.1)

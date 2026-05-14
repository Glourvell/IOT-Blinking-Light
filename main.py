from machine import Pin
from time import sleep

led = Pin(2, Pin.OUT)

while True:
    print("The LED Bulb is ON")
    led.value(1)
    sleep(0.5)

    print("The LED Bulb is OFF")
    led.value(0)
    sleep(0.5)

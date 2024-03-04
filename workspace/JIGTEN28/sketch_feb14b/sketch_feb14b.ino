import RPi.GPIO as GPIO
import time

# Define GPIO pins for segments
segments = (11, 4, 23, 8, 7, 10, 18, 25)

# Define GPIO pins for digit selection
digits = (24, 22, 27, 17)

# Set up GPIO
GPIO.setmode(GPIO.BCM)
GPIO.setup(segments, GPIO.OUT)
GPIO.setup(digits, GPIO.OUT)

# Define the characters 0 to 9 on the 7-segment display
numbers = {
    0: (1, 1, 1, 1, 1, 1, 0),
    1: (0, 1, 1, 0, 0, 0, 0),
    2: (1, 1, 0, 1, 1, 0, 1),
    3: (1, 1, 1, 1, 0, 0, 1),
    4: (0, 1, 1, 0, 0, 1, 1),
    5: (1, 0, 1, 1, 0, 1, 1),
    6: (1, 0, 1, 1, 1, 1, 1),
    7: (1, 1, 1, 0, 0, 0, 0),
    8: (1, 1, 1, 1, 1, 1, 1),
    9: (1, 1, 1, 1, 0, 1, 1)
}

# Function to display a number on the 7-segment display
def display_number(number):
    for digit in range(4):
        GPIO.output(digits[digit], GPIO.LOW)
        for segment in range(7):
            GPIO.output(segments[segment], numbers[number][segment])
        time.sleep(0.001)
        GPIO.output(digits[digit], GPIO.HIGH)

# Example usage
try:
    while True:
        for num in range(10):
            display_number(num)
            time.sleep(1)

except KeyboardInterrupt:
    GPIO.cleanup()

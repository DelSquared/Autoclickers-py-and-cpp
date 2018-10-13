#This will automatically start performing repetitive clicks on activation

import pyautogui, sys

print('Press Ctrl-C to quit.')

try:
    while True:
        pyautogui.click()
except KeyboardInterrupt:
    print('\n')

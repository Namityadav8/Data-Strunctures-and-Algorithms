import pyautogui
import time
 
time.sleep(10)
 
for line in open("a.txt", "r"):
 
    pyautogui.typewrite(line)
     
    pyautogui.press("enter")
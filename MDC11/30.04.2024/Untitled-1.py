
#PYAUTOGUI
import pyautogui
import time
import keyboard
def cautare_google():
    if pyautogui.locateOnScreen(r'C:\Users\Student\Desktop\MDC11', confidence=0.7) != None:
       print("DA")
       camp_google = pyautogui.locateOnScreen( r'C:\Users\Student\Desktop\MDC11', confidence=0.7) 
       pyautogui.click(camp_google)
       time.sleep(10)
       pyautogui.write("https://www.youtube.com/watch?v=6O7WUmCeOpc")
       pyautogui.press('enter')
       time.sleep(2)
       cautare_google()
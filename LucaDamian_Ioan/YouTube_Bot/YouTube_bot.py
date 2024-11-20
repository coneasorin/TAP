import pyautogui
import time

def search_web():
    if pyautogui.locateOnScreen(r"C:\Users\John\PycharmProjects\MAP1\Photos\SearchBar.PNG") != None:
        print("YES")
        click_obj = pyautogui.locateOnScreen(r"C:\Users\John\PycharmProjects\MAP1\Photos\SearchBar.PNG")
        pyautogui.click(click_obj)
        time.sleep(4)
        pyautogui.write(r"https://www.youtube.com/@CBCNews")
        pyautogui.press("enter")
        time.sleep(5)


def subscribe():
    if pyautogui.locateOnScreen(r"C:\Users\John\PycharmProjects\MAP1\Photos\subscribe.PNG") != None:
        print("YES")
        click_obj = pyautogui.locateOnScreen(r"C:\Users\John\PycharmProjects\MAP1\Photos\subscribe.PNG")
        pyautogui.click(click_obj)
        time.sleep(5)


def click_video():
    if pyautogui.locateOnScreen(r"C:\Users\John\PycharmProjects\MAP1\Photos\Videos_bar.PNG") != None:
        print("YES")
        click_obj = pyautogui.locateOnScreen(r"C:\Users\John\PycharmProjects\MAP1\Photos\Videos_bar.PNG")
        pyautogui.click(click_obj)
        time.sleep(2)
    if pyautogui.locateOnScreen(r"C:\Users\John\PycharmProjects\MAP1\Photos\video.PNG") != None:
        print("YES")
        click_obj = pyautogui.locateOnScreen(r"C:\Users\John\PycharmProjects\MAP1\Photos\video.PNG")
        pyautogui.click(click_obj)
        time.sleep(2)



search_web()
subscribe()
click_video()
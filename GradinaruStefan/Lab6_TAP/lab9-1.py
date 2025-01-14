from tkinter import *
from tkinter import messagebox
import random

window = Tk()
window.title("Rock Paper Scissors")
window.geometry("240x240")
def showrules():
 messagebox.showinfo("Rules", f"Game rules are: \n[ROCK] -> [SCISSORS]\n[SCISSORS] -> [PAPER]\n[PAPER] -> [ROCK]\nBest of 3!")

global pc_counter, user_counter

pc_counter = int()
user_counter = int()

game_rules = {
    "Rock":{"Paper":"Lose","Scissors":"Victory"},
    "Paper":{"Scissors":"Lose","Rock":"Victory"},
    "Scissors":{"Rock":"Lose","Paper":"Victory"}
}


label_rules = Button(window, text="Rules", command=showrules, justify="center", fg="#08c9ac", pady=5)
label_rules.pack(side="top")
label_gamestatus_human = Label(window, text=f"Game Status:\nUser: {pc_counter}", fg="#08c9ac")
label_gamestatus_pc = Label(window, text=f"\n-\nOpponent: {user_counter}", fg="#08c9ac")
label_gamestatus_pc.pack(side="bottom")
label_gamestatus_human.pack(side="bottom")
# Game Logic
def game(user_select):
    pc_counter = 0
    user_counter = 0
    
    options = ["Rock", "Paper", "Scissors"]
    pc_select = random.choice(options)
    # Message constructor
    msg = f"The Computer chose:\n{pc_select}\n"
    
    
    if pc_select == user_select:
        msg += "[TIE]"
    else:
        results = game_rules[user_select][pc_select]
        if results == "Victory":
            msg+= "[WIN]!"
            user_counter+= 1
            window.update()
        elif results == "Lose":
            msg+= "[LOSE]..."
            pc_counter+=1
            window.update()
    
    messagebox.showinfo("Game Results", msg)
    
   # (user_select == "Rock" and pc_select == "Scissors") or \
    #    (user_select == "Paper" and pc_select == "Rock") or \
     #       (user_select == "Scissors" and pc_select == "Paper"):
      #          msg+= "[YOU WIN!]"
       #         user_counter+= 1
        #        label_human.set(user_counter)
         #       label_gamestatus.config()
    #else:
     #   msg+= "[YOU LOSE!]"
      #  pc_counter += 1
       # label_pc.set(pc_counter)
    # messagebox.showinfo("Game Results", msg)
    
    
    
    if pc_counter == 3:
        messagebox.showinfo("Loss", "You lost the game.\n\nBetter luck next time!")
        user_counter = 0
        pc_counter = 0
        window.update()
    elif user_counter == 3:
        messagebox.showinfo("Victory", "You won the game!\n \nCongratulations!")
        user_counter = 0
        pc_counter = 0
        window.update()
        

ButtonRock = Button(window, text = "Rock", width=10, command=lambda:game("Rock")).pack(side="left")
ButtonPaper = Button(window, text="Paper", width=10, command=lambda:game("Paper")).pack(side="left")
ButtonScissor = Button(window, text="Scissors", width=10, command=lambda:game("Scissors")).pack(side="left")


mainloop()
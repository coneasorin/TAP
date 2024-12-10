from tkinter import *
from tkinter import messagebox
import random
afisaj = Tk()
afisaj.title("Piatra Hartie Foarfeca")

reguli = ("Regulile jocului sunt: \n"
          "Piatra vs Hartie -> Harie \n"
          "Piatra vs Foarfeca -> Piatra \n"
          "Hartie vs Foarfeca -> Foarfeca ")
label_reguli = Label (afisaj, text=reguli, justify="left",fg="#08c9ac")
label_reguli.pack(side="top")
label_status_joc = Label(afisaj, text="Status joc: ", fg="#08c9ac")
label_status_joc.pack(side="bottom")
label_scor_pc = Label(afisaj,fg="red",text="Scorul pc: ")
label_scor_pc.pack(side="top")
label_scor_om = Label(afisaj,fg="red",text="Scorul tau: ")
label_scor_om.pack(side="top")
#logica joc
counter_utilizator =0
counter_calculator =0
def joaca(alegere_utilizator):
    global label_status_joc,counter_calculator,counter_utilizator,label_scor_pc,label_scor_om
    optiuni = ["Piatra", "Hartie", "Foarfeca"]
    alegere_calculator = random.choice(optiuni)
    
    mesaj = f"Calculatorul a ales: {alegere_calculator}\n"
    
    if alegere_calculator == alegere_utilizator:
        mesaj += "Egalitate"
    elif (alegere_utilizator == "Piatra" and alegere_calculator=="Foarfeca") or \
         (alegere_utilizator=="Hartie" and alegere_calculator=="Piatra") or \
         (alegere_utilizator=="Foarfeca" and alegere_calculator=="Hartie"):
             mesaj += "Ai castigat"
             counter_utilizator +=1
             label_scor_om.config(text=f"Scorul tau: {counter_utilizator}")
    else:
        mesaj += "Ai pierdut"
        counter_calculator+= 1
        label_scor_pc.config(text=f"Scorul PC: {counter_calculator}")
        
    label_status_joc.config(text=mesaj)
    
    if counter_utilizator == 3:
        messagebox.showinfo("Castigator", "Ai castigat jocul")
        counter_utilizator = 0
        counter_calculator = 0
        label_scor_pc.config(text=f"Scorul tau: {counter_calculator}")
        label_scor_om.config(text=f"Scorul tau: {counter_utilizator}")
    elif counter_calculator == 3:
        
        messagebox.showinfo("Castigator", "Calculatorul a castigat jocul")
        counter_calculator = 0
        counter_utilizator = 0
        label_scor_pc.config(text=f"Scorul tau: {counter_calculator}")
        label_scor_om.config(text=f"Scorul tau: {counter_utilizator}")
    

button_piatra = Button(afisaj, text="Piatra", width=10, command=lambda:joaca("Piatra")).pack(side="left")
button_hartie = Button(afisaj, text="Hartie" , width=10, command=lambda:joaca("Hartie")).pack(side="left")
button_foarfeca = Button(afisaj, text="Foarfeca" , width=10, command=lambda:joaca("Foarfeca")).pack(side="left")



mainloop()
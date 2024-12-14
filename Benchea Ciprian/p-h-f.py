from tkinter import *
from tkinter import messagebox
import random

afisaj = Tk()
afisaj.title("Piatra Hartie Foarfeca")

reguli = ("Regulile jocului sunt: \n"
          "Piatra vs Hartie -> Hartie \n"
          "Piatra vs Foarfeca -> Piatra \n"
          "Hartie vs Foarfeca -> Foarfeca ")

reguli_joc = {
     "Piatra":{"Hartie":"pierde","Foarfeca":"castiga"},
     "Hartie":{"Foarfeca":"pierde", "Piatra":"castiga"},
     "Foarfeca":{"Piatra":"pierde", "Hartie":"castiga"}
}

label_reguli = Label (afisaj, text=reguli, justify="center", fg="orange")
label_reguli.pack(side="top")
label_status_joc = Label(afisaj, text="Status joc: ", fg="orange")
label_status_joc.pack(side="bottom")
label_scor_pc = Label(afisaj, fg="red", text="Scor pc: ")
label_scor_pc.pack(side="top")
label_scor_om = Label(afisaj, fg="red", text="Scorul tau: ")
label_scor_om.pack(side="top")
#Logica joc
counter_utilizator = 0
counter_calculator = 0

#Rata castig
label_rata_castig = Label(afisaj, text="Rata castigului: ", fg="black")
label_rata_castig.pack(side="bottom")

def joaca(alegere_utilizator):
    global label_status_joc, counter_calculator, counter_utilizator, label_scor_pc, label_scor_om, label_rata_castig
    optiuni = ["Piatra", "Hartie", "Foarfeca"]
    alegere_calculator = random.choice(optiuni)
    #Construim mesajul pentru afisare
    mesaj = f"Calculatorul a ales: {alegere_calculator}\n"
    if(alegere_utilizator == alegere_calculator):
        mesaj += "Egalitate"
    else:
        rezultat = reguli_joc[alegere_utilizator][alegere_calculator]
        if rezultat == "castiga":
            mesaj += "Ai castigat!"
            counter_utilizator += 1
            label_scor_om.config(text=f"Scorul tau: {counter_utilizator}")
        else:
            mesaj += "Ai pierdut!"
            counter_calculator += 1
            label_scor_pc.config(text=f"Scor pc: {counter_calculator}")
    
    #if(alegere_utilizator == alegere_calculator):
    #  mesaj += "Egalitate"
    #elif(alegere_utilizator == "Piatra" and alegere_calculator == "Foarfeca") or \
    #    (alegere_utilizator == "Hartie" and alegere_calculator == "Piatra") or \
    #    (alegere_utilizator == "Foarfeca" and alegere_calculator == "Hartie"):
    #        mesaj += "Ai castigat!"
    #        counter_utilizator += 1
    #        label_scor_om.config(text=f"Scorul tau: {counter_utilizator}")
    #else:
    #     mesaj += "Ai pierdut!"
    #     counter_calculator += 1
    #    label_scor_pc.config(text=f"Scor pc: {counter_calculator}")

    label_status_joc.config(text=mesaj)
    if counter_utilizator == 3:
         messagebox.showinfo("Castigator", "Ai castigat jocul!")
         counter_calculator = 0
         counter_utilizator = 0
         label_scor_pc.config(text=f"Scor calculator: {counter_calculator}")
         label_scor_om.config(text=f"Scor utilizator: {counter_utilizator}")
    elif counter_calculator == 3:
         messagebox.showinfo("Castigator", "Calculatorul a castigat jocul!")
         counter_calculator = 0
         counter_utilizator = 0
         label_scor_pc.config(text=f"Scor calculcator: {counter_calculator}")
         label_scor_om.config(text=f"Scor utilizator: {counter_utilizator}")
    #messagebox.showinfo("Rezultatul jocului", mesaj)
        


buton_piatra = Button(afisaj, text="Piatra", width=10, command=lambda:joaca("Piatra")).pack(side="left")
buton_hartie = Button(afisaj, text="Hartie", width=10, command=lambda:joaca("Hartie")).pack(side="left")
buton_foarfeca = Button(afisaj, text="Foarfeca", width=10, command=lambda:joaca("Foarfeca")).pack(side="left")

mainloop()
from tkinter import *
from tkinter import messagebox
import random

afisaj = Tk()
afisaj.title("Piatra Hartie Foarfece")
reguli = ("Regulile jocului sunt: \n"
          "Piatra vs Hartie -> Hartie\n"
          "Piatra vs Foarfeca -> Piatra\n"
          "Hartie vs Foarfeca -> Foarfeca\n")


reguli_joc={
    "Piatra":{"Hartie":"pierde","Foarfeca":"castiga"},
    "Hartie":{"Foarfeca":"pierde","Piatra":"castiga"},
    "Foarfeca":{"Piatra":"pierde","Hartie":"castiga"}
}


label_reguli = Label (afisaj, text=reguli, justify = "center", fg = "red")
label_reguli.pack(side="top")
label_status_joc = Label(afisaj, text="Status joc: ", fg= "red")
label_status_joc.pack(side="bottom")
label_scor_pc = Label(afisaj, fg="green", text="Scor PC: 0")
label_scor_pc.pack(side="top")
label_scor_om = Label(afisaj, fg="green", text="Scor OM: 0")
label_scor_om.pack(side="top")
counter_calculator = 0
counter_utilizator = 0

#logica joc
def joaca(alegere_utilizator):
    global label_status_joc, counter_utilizator, counter_calculator, label_scor_om, label_scor_pc
    optiuni = ["Piatra", "Hartie", "Foarfeca"]
  
    alegere_calculator = random.choice(optiuni)
    
    mesaj = f"Calculatorul a ales: {alegere_calculator}\n"

    if alegere_calculator==alegere_utilizator:
        mesaj += "Egalitate"
    else:
        rezultat = reguli_joc[alegere_utilizator][alegere_calculator]
        if rezultat == "castiga":
            mesaj += "Ai castigat!"
            counter_utilizator += 1
            label_scor_om.config(text=f"Scorul tau: {counter_utilizator}")
        else:
            mesaj += "Ai pierdut"
            counter_calculator += 1
            label_scor_pc.config(text=f"Scorul PC: {counter_calculator}")
            
    
    #elif(alegere_utilizator == "Piatra" and alegere_calculator == "Foarfeca") or \
      #  (alegere_utilizator == "Hartie" and alegere_calculator == "Piatra") or\
       # (alegere_utilizator == "Foarfeca" and alegere_calculator == "Hartie"):
        #mesaj += "Ai castigat!"
        #counter_utilizator += 1
        #label_scor_om.config(text=f"Scorul tau: {counter_utilizator}")

    #else:
     #   mesaj += "Ai pierdut"
     #   counter_calculator += 1
      #  label_scor_pc.config(text=f"Scorul PC: {counter_calculator}")



    label_status_joc.config(text=mesaj)
    if counter_utilizator == 3:  
        messagebox.showinfo("Castigator", "Ai castigat jocul")
        counter_calculator = 0
        counter_utilizator = 0
        label_scor_pc.config(text=f"Scor calculator: {counter_calculator}")
        label_scor_om.config(text=f"Scor utilizator: {counter_utilizator}")
        
    elif counter_calculator == 3:
        messagebox.showinfo("Castigator", "Calculatorul a castigat!") 
        counter_utilizator = 0
        counter_calculator = 0
        label_scor_pc.config(text=f"Scor calculator: {counter_calculator}")
        label_scor_om.config(text=f"Scor utilizator: {counter_utilizator}")

   




buton_piatra = Button(afisaj, text = "Piatra", width=10, command=lambda:joaca("Piatra")).pack(side="left")
buton_hartie = Button(afisaj, text= "Hartie", width=10, command=lambda:joaca("Hartie")).pack(side="left")
buton_foarfeca = Button(afisaj, text= "Foarfeca", width=10, command=lambda:joaca("Foarfeca")).pack(side="left")

mainloop()
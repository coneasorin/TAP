import sqlite3
import random
import time

def adauga_scuze ():
    conn = sqlite3.connect('scuze.db')
    cursor = conn.cursor()
    cursor.execute('''
    CREATE TABLE IF NOT EXISTS scuze(
     id INTEGER PRIMARY KEY AUTOINCREMENT,
     scuze_text TEXT NOT NULL   
    )''')
    scuza_noua = input("\nIntrodu scuza ta: \n")
    cursor.execute('INSERT INTO scuze (scuze_text) VALUES (?)', (scuza_noua,))
    conn.commit()
    print("\nScuza ta a fost adaugata cu succes in DB.\n")
    conn.close()



def genereaza_scuza():
    conn = sqlite3.connect('scuze.db')
    cursor = conn.cursor()
    cursor.execute('SELECT scuze_text FROM scuze')
    scuze = cursor.fetchall()
    if scuze:
        scuza_aleasa = random.choice(scuze)[0]
        print(f"\nScuza ta este {scuza_aleasa}\n")
    else:
        print("Nu exista scuze in DB.")
    conn.close()


def stergere_scuza():
    conn = sqlite3.connect('scuze.db')
    cursor = conn.cursor()
    cursor.execute('SELECT * FROM scuze')
    scuze = cursor.fetchall()
    print("Scuzele existente in DB sunt: ")
    for i in scuze:
        print(f"{i[0]}:{i[1]}")
    id_scuza_de_sters = input("introdu id-ul scuzei pe care vrei sa o stergi: ")
    conn.commit()
    print("Scuza ta a fost stearsa cu succes din DB.\n")
    conn.close()


def select_menu():
    selected = input("Meniu principal:\n[1] - Adauga Scuze\n[2] - Genereaza Scuze\n[3] - Stergere Scuze\n[4] - Exit\n-> ")
    selection = int(selected)
    match selection:
        case 1:
            adauga_scuze()
            time.sleep(1)
            select_menu()
        case 2:
            genereaza_scuza()
            time.sleep(1)
            select_menu()
        case 3:
            stergere_scuza()
            time.sleep(1)
            select_menu()
        case 4:
            return exit
        case default:
            print("\nAceasta optiune nu exista.\n")
            select_menu()
        

select_menu()
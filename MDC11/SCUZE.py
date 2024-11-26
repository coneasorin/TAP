import sqlite3
import random

def adauga_scuze ():
    conn = sqlite3.connect('scuze.db')
    cursor = conn.cursor()
    cursor.execute('''
    CREATE TABLE IF NOT EXISTS scuze(
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        scuze_text TEXT NOT NULL

    )''')
    scuza_noua = input("Introdu scuza ta: ")
    cursor.execute('INSERT INTO scuze (scuze_text) VALUES (?)', (scuza_noua,))
    conn.commit()
    print("Scuza ta a fost adaugata cu succes in DB.")
    conn.close()

def genereaza_scuza():
    conn = sqlite3.connect('scuze.db')
    cursor = conn.cursor()
    cursor.execute('SELECT scuze_text FROM scuze')
    scuze = cursor.fetchall()
    if scuze:
        scuza_aleasa = random.choice(scuze)[0]
        print(f"Scuza ta este: {scuza_aleasa}")
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
        print(f"{i[0]}; TEXT: {i[1]}")
    id_scuza_de_sters = input("Introdu id-ul scuzei pe care vrei sa o stergi: ") 
    cursor.execute('DELETE FROM scuze WHERE id=?', (id_scuza_de_sters,))
    conn.commit()
    print("Scuza ta a fost stearsa din DB")
    conn.close()
     

def afisare_scuze():
    conn = sqlite3.connect('scuze.db')
    cursor = conn.cursor()
    cursor.execute('SELECT * FROM scuze')
    scuze = cursor.fetchall()
    print("Scuzele existente in DB sunt: ")
    for i in scuze:
        print(f"{i[0]}:{i[1]}")
    conn.close()


    
#genereaza_scuza()
stergere_scuza()
#adauga_scuze()
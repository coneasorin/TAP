import sqlite3
import random

def add_elm():
    conn = sqlite3.connect('excuses.db')
    cursor = conn.cursor()
    cursor.execute('''
    CREATE TABLE IF NOT EXISTS excuse(
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        excuse_text TEXT NOT NULL
        )
    ''')

    new_excuse = input("Type your excuse: ")
    cursor.execute('INSERT INTO excuse (excuse_text) VALUES (?)', (new_excuse,))

    conn.commit()
    print("Your new excuse has been added.")
    conn.close()

def print_db():
    conn = sqlite3.connect('excuses.db')
    cursor = conn.cursor()
    cursor.execute('SELECT * FROM excuse')
    excuse = cursor.fetchall()
    print("The existing excuses are: ")
    for i in excuse:
        print(f"{i[0]}:{i[1]}")
    conn.close()

def print_random():
    conn = sqlite3.connect('excuses.db')
    cursor = conn.cursor()
    cursor.execute('SELECT excuse_text FROM excuse')
    excuse = cursor.fetchall()
    if excuse:
        chosen_excuse = random.choice(excuse)[0]
        print(f"Your excuse is: {chosen_excuse}")
    else:
        print("The database is empty.")
    conn.close()

def edit_db():
    conn = sqlite3.connect('excuses.db')
    cursor = conn.cursor()
    print_db()
    id_edit = input("Type your id to edit: ")
    new_excuse = input("Type your excuse: ")
    cursor.execute('UPDATE excuse SET excuse_text=? WHERE id = ?', (new_excuse, id_edit,))
    conn.commit()
    print("Your excuse has been changed.")
    conn.close()


def erase():
    conn = sqlite3.connect('excuses.db')
    cursor = conn.cursor()
    print_db()
    id_delete = input("Type your id to erase: ")
    cursor.execute('DELETE FROM excuse WHERE id = ?', (id_delete,))
    conn.commit()
    print("Your excuse has been erased.")
    conn.close()


#add_elm()
#print_random()
#edit_db()
#erase()
#print_db()
import random

long_password = 15
password = ''

for num in range(long_password):
    password = password + chr(int(random.randint(33, 125))) 

print('Contraseña Generada: ', password)
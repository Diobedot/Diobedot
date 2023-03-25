a = input('Ingrese su número: ')
c = 1
while c<4:
    b = input('Ingrese su siguiente número: ')
    if a>=b:
        c = c+1
    else:
        a = b
        c = c+1
print('El número mayor es ' + str(a))

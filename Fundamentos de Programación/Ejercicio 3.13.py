n = 0
while True:
    s = float(input('Ingrese su numero: '))
    if s>= 0:
        m = s
    elif s == -99:
        break
print('El número mayor es',m)
if m<0:
    print('El número es negativo')
    

print('Sumar 10 numeros introducidos por el teclado')
n = 1
suma = 0

while n <= 10:
    suma += float(input('Ingrese su numero '+ str(n)+': '))
    n +=1
print('La suma de sus números es de:',suma)

#3.16

print('Sistema de venta')
a = float(input('Ingrese el precio del articulo que desea comprar'))
c = int(input('Ingrese la cantidad de articulos que desea comprar'))

pb = c*a*1.15

if pb > 1000:
    pb *= 0.95

print('El precio total a pagar es de',pb,'pesos.')
    

import math

while True:
    try:
        r = float(input('Ingrese el radio de la circunferencia'))
        break
    except:
        continue

def circ(r):
    area = math.pi*r*r
    perimetro = math.pi*r*2
    return [area,perimetro]

[a,p] = circ(r)

print('El área del ciurculo es de ' + str(a) )
print('El perímetro del circulo es de ' + str(p))

exit()

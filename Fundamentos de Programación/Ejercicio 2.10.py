def triangulo(b,a):
    area = b*a/2
    return area

while True:
    try:
        b = float(input('Ingrese la base del triangulo'))
        a = float(input('Ingrese la altura del triangulo'))
        break
    except:
        continue

x = triangulo(b,a)
print(x)

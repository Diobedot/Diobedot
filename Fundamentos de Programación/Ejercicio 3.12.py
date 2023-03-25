c = 0
sp = 0
si = 0
while c <= 200:
    if c%2 == 0:
        sp += c
    else:
        si += c
    c += 1
print('El resultado de la suma par es de',sp)
print('El resultado de la suma impar es de',si)

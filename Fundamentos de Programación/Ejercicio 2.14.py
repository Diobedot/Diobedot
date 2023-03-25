from collections import Counter

while True:
    try:
        p = input('Ingrese su palabra: ')
        break
    except:
        continue
print(Counter(p.lower()))
o = list()



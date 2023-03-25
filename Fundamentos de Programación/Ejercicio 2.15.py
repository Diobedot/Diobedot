while True:
    try:
        c = float(input('Ingrese el capital: '))
        i = float(input('Ingrese el interés: '))
        d = int(input('Ingrese la duración en semanas'))
        break
    except:
        continue

total = (i/100)*(c/52)*d + c

print('Su capitál total despues de ' + str(d) + ' semana(s), con una tasa de interés de ' + str(i) + '% es de ' + str(total))
exit()

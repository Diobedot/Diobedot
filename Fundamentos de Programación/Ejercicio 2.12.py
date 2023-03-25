while True:
    try:
        h = int(input('Ingrese el número de horas: '))
        t = float(input('Ingrese la tarfa por hora: '))
        break
    except:
        continue

sal = h*t
print('El salario es de ' + str(sal))

exit()

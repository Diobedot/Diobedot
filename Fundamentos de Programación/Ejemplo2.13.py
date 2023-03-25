nombre = input('Dame el nombre: ')
horas = float(input('Dame las horas: '))
if horas <= 35:
    salariob = horas*15
else:
    salariob = 15*35 + 1.5*(horas-35)*15
if salariob <= 1000:
    salarion = salariob
elif salariob >= 1000 and salariob <= 1400:
    salarion = 1000 + (0.75*(salariob-1000))
else:
    salarion = 1000 + 0.75*400 + (0.55*(salariob-1400))

print('El salario bruto de ' + str(nombre) +' es de = ' + str(salariob) + ' y su salario neto es de ' + str(salarion))
input('Presione enter para terminar el programa')
exit()
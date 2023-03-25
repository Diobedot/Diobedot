while True:
    m = int(input('Introduce los minutos: '))
    s = int(input('Introduce los segundos: '))
    if m == 0 and s == 0:
        break
    else:
        t = (m*60) + s
        v = 1500/t
        print('la velocidad del corredor es de ' +str(v) +'m/s')
exit()

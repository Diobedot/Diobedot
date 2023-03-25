while True:
    try:
        palabra = input('Escriba su palabra: ')
        break
    except:
        continue

letras = palabra.rstrip().lower()[::-1]

if letras == p:
    print('Es un palindromo!')
else:
    print('No es un palindromo')
    
s = input('Quieres intentar otra palabra? S/N')
  

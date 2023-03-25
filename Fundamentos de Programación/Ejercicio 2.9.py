n = int(input('Introduce el número N = '))
c = 2
p = 2
while p <= n:
    if p%c == 0:
        if p==c:
            print(p)
        p = p+1
        c = 2
    else:
        c = c + 1
exit()

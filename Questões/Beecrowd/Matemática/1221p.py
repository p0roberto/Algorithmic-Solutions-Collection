import math

n = int(input())

while(n):
    a = int(input())
    cout = 0
    raiz = int(math.sqrt(a)) + 1
    for i in range(2, raiz):
        if a % i == 0:
            cout = 1
            break

    if cout == 0:
        print('Prime')
    else:
        print('Not Prime')
    
    n -= 1
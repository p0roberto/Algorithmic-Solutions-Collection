import math

testes = int(input())

while(testes):
    t = int(input())
    linha = int((-1 + math.sqrt(1+8 * t)) / 2)
    print(linha)
    testes -= 1

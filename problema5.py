str = input("Escreva uma palavra para ser invertida: ")

strList = list(str)

i = 0
j = len(strList) - 1

while i <= j:
    aux = strList[i]
    strList[i] = strList[j]
    strList[j] = aux
    i += 1
    j -= 1

result = "".join(strList)

print(result)

import json 

with open("dados/dados.json", encoding='utf-8') as inf:
    data = json.load(inf)

validData = [item for item in data if item['valor'] != 0]

print('Menor faturamento: ', min((value['valor']) for value in validData))
print('Maior faturamento: ', max((value['valor']) for value in validData))

sumM = sum(value['valor'] for value in validData)
average = sumM / len(validData)

cont = 0

for item in validData:
 if(item['valor'] > average): cont = cont+1

print('Qtd maior que a média: ',cont)





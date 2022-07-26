fat = [ {'uf':'SP', 'fat':67836.43}, 
        {'uf':'RJ', 'fat':36678.66}, 
        {'uf':'MG', 'fat':29229.88},
        {'uf':'ES', 'fat':27165.48},
        {'uf':'Outros', 'fat':19849.53}]

sumT = sum(value['fat'] for value in fat)
for item in fat:
    print(item['uf'],': ',(item['fat']*100)/sumT, '%')
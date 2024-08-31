import json
import pandas as pd

## Foi criado um arquivo json para servir de teste 

def main():
    
    try:
        with open('faturamento.json', 'r') as file:
            data = json.load(file)
    except FileNotFoundError:
        print("Erro: Arquivo não encontrado.")
        return
    except json.JSONDecodeError:
        print("Erro: Falha ao decodificar o JSON.")
        return
    
    df = pd.DataFrame(data['faturamento'])
    
    
    vendas_validas = df[df['valor'] > 0]['valor'].sum()
    diasUteis = df[df['valor'] > 0].count()
    
    media_venda = vendas_validas/diasUteis
    media_venda = media_venda.values[0]
    maior = df['valor'].max()
    
    menor = float('inf')
    
    count = 0
    for dados in df['valor']:
        if dados!=0:
            if dados > media_venda:
                count += 1
            if menor  > dados:
                menor = dados
           
            
   
    print('\n')  
    print(f"\tMenor venda :  {float(menor)}")
    print(f"\tMaior venda :  {float(maior)}")
    print(f"\tNumeroa de dias com venda acima da media :  {(count)}")
    print('\n')  
    
if __name__ == "__main__":
    main()
    
    
   
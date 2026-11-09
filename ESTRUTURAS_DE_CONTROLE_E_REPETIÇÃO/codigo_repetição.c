#include <stdio.h>
#include <stdbool.h>

int main()
{
    int resposta, soma = 0;
    bool saida = false;
    
    do{
        printf("\nDigite um numero:");
        scanf("%d", &resposta);
        
        if(resposta > 0)
        {
            soma += resposta;
        }else{
            printf("\nA soma foi: %d", soma);
            saida = true;
        }
    }while(!saida);
}

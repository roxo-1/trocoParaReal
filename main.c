#include <stdio.h>
#define EPSILON 0.000001 // tolerância


int calculaTroco(float troco, int cont){
    if(troco>=0.50- EPSILON){
        troco-=0.50;
        cont++;
        printf("50 centavos\n");
        return calculaTroco(troco, cont);
    }else if(troco>=0.25- EPSILON){
        troco-=0.25;
        cont++;
        printf("25 centavos\n");
        return calculaTroco(troco, cont);
    }else if(troco>=0.10- EPSILON){
        troco-=0.10;
        cont++;
        printf("10 centavos\n");
        return calculaTroco(troco, cont);
    }else if(troco>=0.05- EPSILON){
        troco-=0.05;
        cont++;
        printf("5 centavos\n");
        return calculaTroco(troco, cont);
    }else if(troco>=0.01- EPSILON){
        troco-=0.01;
        cont++;
        printf("1 centavo\n");
        return calculaTroco(troco, cont);
    }
    return cont;
}


int main(){
    float preco;
    float troco = 1;
    int cont=0;
    printf("Preço do produto: ");
    scanf("%f", &preco);
    troco=troco-preco;
    printf("Valor do troco a ser recebido: %f\n", troco);
    int resposta = calculaTroco(troco, cont);
    printf("Quantidade de moedas usadas: %d\n", resposta);
    return 0;
}

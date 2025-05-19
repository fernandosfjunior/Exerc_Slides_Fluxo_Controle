#include <stdio.h>

int main(){
    int n1, n2;
    char op;
    printf("digite 2 numeros e um operador matematico *,+,/,-:");
    scanf("%d %d %c", &n1, &n2, &op);
    
    switch(op){ 
        case '+':
            printf("soma: %d", n1+n2);
            break;
        case '-':
            printf("subtracao: %d", n1-n2);
            break;
        case '*':
            printf("multiplicacao: %d", n1*n2);
            break;
        case '/':
            printf("divisao: %d", n1/n2);
            break;
        default:
            printf("operador invalido");

    }   
    return 0;




}
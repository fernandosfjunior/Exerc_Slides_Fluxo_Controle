#include<stdio.h>

int main(){
    int n1, cargo;
    comeco:
    printf("para ter acesso digite a senha:");
    scanf("%d", &n1);
    fflush(stdin);   
 if(n1 == 1234){
        printf("acesso permitido!:\n");
        printf("digite seu cargo:\n");
        printf("1 - administrador.\n");
        printf("2 - gerente.\n");
        printf("3 - funcionario.\n");
        printf("digite o numero do seu cargo:\n");
        scanf("%d", &cargo);
        fflush(stdin);
    }else{
        printf("senha incorreta acesso negado:");
        goto comeco;
    }
    switch (cargo){
        case 1:
            printf("acesso total ao sistema:");
            break;
        case 2:
            printf("acesso parcial (relatorios e estoque):");
            break;
        case 3:
            printf("acesso basico(apenas consultas):");
            break;
        default:
            printf("cargo invalido!:");
            break;
    }
    return 0;

}
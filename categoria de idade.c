#include <stdio.h>

int main(){
    int n1;
    printf("digite sua idade:");
    scanf("%d", &n1);
    if (n1 >= 0 && n1 <= 12){
        printf("criança:");
    }else if (n1 >= 13 && n1<= 17){
        printf("adolescente:");
    }else if (n1 >= 18 && n1 <= 59){
        printf("adulto:");
    }else if (n1 >= 60){
        printf("idoso:");
    }
    return 0;

}

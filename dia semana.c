#include <stdio.h>

int main(){
    int n1;
    printf("Digite o dia da semana em numero (1 a 7):");
    scanf("%d", &n1);
    switch(n1){
        case 1:
            printf("domingo:");
        break;
        case 2:
            printf("segunda feira:");
        break;
        case 3:
            printf("terca feira:");
        break;
        case 4:
            printf("quarta feira:");
        break;
        case 5:
            printf("quinta feira:");
        break;
        case 6:
            printf("sexta feira:");
        break;
        case 7:
            printf("sabado:");
        break;
        default:
            printf("dia invalido:");
    }
        return 0;
    
}


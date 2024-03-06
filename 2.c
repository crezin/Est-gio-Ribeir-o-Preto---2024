#include <stdio.h>
int FIBONACCI(int NUM){
    int a, b;
    int temp;
    a = 1, b= 0;
    while (a < NUM){
        temp =a;
        a= a+b;
        b = temp;
    }
    return b;
}


int main(){
    int NUM;
    //informa um numero se é ou n da fibonnaccci//
    printf("digita um numero: ");
    scanf("%d", &NUM);

    int resultado = FIBONACCI(NUM);

    if(resultado == NUM){
        printf(" o valor %d pertence ao fibonacci", NUM);
    }
    else{
        printf("o valor %d  não pertence ao fibonacci", NUM);
    }
    return 0;

}




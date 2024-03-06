#include <stdio.h>

void inverte_string(char *s) {
    int inicio = 0;
    int fim = strlen(s) - 1;
    while (inicio < fim) {
        char temp = s[inicio];
        s[inicio] = s[fim];
        s[fim] = temp;
        inicio++;
        fim--;
    }
}

int main() {
    char string[100];
    printf("Digite uma string: ");
    scanf("%s", string);
    inverte_string(string);
    printf("String invertida: %s\n", string);
    return 0;
}

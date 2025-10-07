#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char op;
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    switch(op) {
        case '+': resultado = num1 + num2; break;
        case '-': resultado = num1 - num2; break;
        case '*': resultado = num1 * num2; break;
        case '/':
            if(num2 != 0)
                resultado = num1 / num2;
            else {
                printf("Erro: Divisão por zero\n");
                return 1;
            }
            break;
        default:
            printf("Operador inválido\n");
            return 1;
    }
    printf("Resultado: %.2f\n", resultado);
    return 0;
}
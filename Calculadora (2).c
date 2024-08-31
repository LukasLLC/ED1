#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        printf("Erro: Divisão por zero!\n");
        return 0;
    }
    return a / b;
}

float calculate(float a, float b, char operator) {
    switch (operator) {
        case '+':
            return add(a, b);
            break;
        case '-':
            return subtract(a, b);
            break;
        case '*':
            return multiply(a, b);
            break;
        case '/':
            return divide(a, b);
            break;
        default:
            printf("Erro: Operador inválido!\n");
            return 0; 
    }
}

int main() {
    float num1, num2;
    char operator;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operator);
    
    float result = calculate(num1, num2, operator);
    printf("Resultado: %.2f\n", result);

    return 0;
}
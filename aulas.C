#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int idade = 25;
    float altura = 1.75;
    char inicial = 'J';

    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Inicial: %c\n", inicial);

    int numero;
    float preco;
    char categoria;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("Digite o preço: ");
    scanf("%f", &preco);

    printf("Digite a categoria: ");
    scanf(" %c", &categoria);

    printf("Número: %d, Preço: %.2f, Categoria: %c\n", numero, preco, categoria);

    char nome[] = "Pedro";
    char banda[] = "Nivarna";
    char email[] = "pedro123";
    printf("Olá, %s!\n", nome);
    printf("Você adora %s\n", banda);
    printf("Seu email é %s\n", email);

    bool PedroRE4 = true;
    bool PedroRE2 = true;
    if (PedroRE4 && PedroRE2)
    {
        printf("ele é bom\n");
    }
    else
    {
        printf("ele é ruim\n");
    }
//Calculadora simples
    float num1, num2, resultado;
    char operador;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    switch (operador)
    {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
            {
                resultado = num1 / num2;
            }
            else
            {
                printf("Erro: Divisão por zero!\n");
                return 1;
            }
            break;
        default:
            printf("Operador inválido!\n");
            return 1;
    }

    printf("%.2f %c %.2f = %.2f\n", num1, operador, num2, resultado);
    return 0;
}
//média de notas
#include <stdio.h>
int main(){
float num1, num2, num3, média;
printf ("Digite a primeira nota: ");
scanf ("%f", &num1);
printf("Digite a sua segunda nota: ");
scanf ("%f", &num2);
printf ("digite a sua terceira nota: ");
 scanf("%f", &num3);
 média = (num1  + num2 + num3) /3;
 printf("sua média é: %.2f", média);
  return 0;
}

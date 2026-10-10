#include<stdio.h>
#include <string.h>

int main(){

//um programa que vai fiscalizar o estoque de uma loja

char usuario_criado[20];
char usuario_digitado[20];
int senha_criada;
int senha_digitada;

int produto;
int estoqueAtual;
int estoqueMinimo = 10;
int continuar = 1;


printf("Crie seu usuario: ");
scanf("%s", usuario_criado);

printf("Crie sua senha: ");
scanf("%d", &senha_criada);

printf("\n");


do {
    printf("Usuario: ");
    scanf("%s", usuario_digitado);
    printf("Senha: ");
    scanf("%d", &senha_digitada);

    if (strcmp(usuario_digitado, usuario_criado) != 0 || senha_digitada != senha_criada) {
        printf("Usuario ou senha incorretos, tente novamente.\n\n");
    }

} while (strcmp(usuario_digitado, usuario_criado) != 0 || senha_digitada != senha_criada);

printf("\nAcesso liberado! Bem-vindo, %s.\n", usuario_criado);

printf("\n");

printf("qual produto deseja verificar?\n");
printf("1 - bananas\n2 - biscoitos\n");
scanf("%d", &produto);

printf("qual o estoque atual?\n");
scanf("%d", &estoqueAtual);

printf("\n");

do
{
    
    switch (produto)
{
case 1: 
    if (estoqueAtual < estoqueMinimo) //caso o estoque atual seja menor que o minimo
    {
        printf("Banana: Nescessario Reposicao\n");
        printf("Estoque atual: %d\n(estoque minimo = 10)\n", estoqueAtual);
    }
    
    else if(estoqueAtual == estoqueMinimo) //caso o estoque atual seja igual ao minimo
    {
        printf("Banana: Estoque em atencao\n");
        printf("Estoque atual: %d\n(estoque minimo = 10)\n", estoqueAtual);
    }
    else //caso o estoque atual seja maior que o minimo
    {
        printf("Banana: Estoque OK \n");
        printf("Estoque atual: %d\n(estoque minimo = 10)\n", estoqueAtual);
    }
    break;

case 2:

     if (estoqueAtual < estoqueMinimo) //caso o estoque atual seja menor que o minimo
    {
        printf("Bicoito: Nescessario Reposicao\n");
        printf("Estoque atual: %d\n(estoque minimo = 10)\n", estoqueAtual);
    }
    
    else if(estoqueAtual == estoqueMinimo) //caso o estoque atual seja igual ao minimo
    {
        printf("Biscoito: Estoque em atencao\n");
        printf("Estoque atual: %d\n(estoque minimo = 10)\n", estoqueAtual);
    }
    else //caso o estoque atual seja maior que o minimo
    {
        printf("Biscoito: Estoque OK \n");
        printf("Estoque atual: %d\n(estoque minimo = 10)\n", estoqueAtual);
    }
    break;

    default:
    
    printf("opcao invalida\n");

    break;
}

printf("\n");
printf("Deseja verificar outro produto? (1-sim / 0-nao)\n");
scanf("%d", &continuar);

printf("\n");


if (continuar == 1)

{
printf("qual produto deseja verificar?\n");
printf("1 - bananas\n2 - biscoitos\n");
scanf("%d", &produto);

printf("qual o estoque atual?\n");
scanf("%d", &estoqueAtual);

printf("\n");
}

else 
    printf("programa finalizado\n");

} while (continuar == 1);

}
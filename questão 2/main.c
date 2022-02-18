#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    // definição das variáveis
    char s[15];
    int flag[6] = {0,0,0,0,0,0}, aux=0, i;
    short int tam;

    // leitura da senha
    printf("\nDigite uma senha:");
    gets(s);
    fflush(stdin);
    tam = strlen(s);

    // Definindo se a senha atende a todos os requisitos
    if(tam>=6) {
        flag[0]=1;
    }
    else {
        aux=1;
    }
    for(i=0;i<tam;i++) {
        // Pelo menos um digito
        if(s[i] >='0' && s[i] <='9') {
            flag[1]=1;
        }
        // Pelo menos uma letra maiuscula
        else if (s[i] >='A' && s[i] <='Z') {
            flag[2]=1;
        }
        // Pelo menos uma letra minuscula
        else if (s[i] >='a' && s[i] <='z') {
            flag[3]=1;
        }
        // Pelo menos um caractere especial
        else if (s[i] == '!' || s[i] == '@' || s[i] == '#' || s[i] == '$' || s[i] == '%' || s[i] == '^' || s[i] == '&' || s[i] == '*' || s[i] == '(' || s[i] == ')' || s[i] == '+' || s[i] == '-' ) {
            flag[4]=1;
        }
        // possui caractere invalido?
        else {
            flag[5]=1;
            aux=1;
        }
    }

    // A senha atende a todos os requisitos?
    for (i=0;i<5;i++){
        if(flag[i]==0){
            aux=1;
        }
    }
    // Se sim
    if (aux==0) {
        printf("\n\n  A senha eh forte e atende a todos os requisitos.");
        printf("\n\n  Tamanho minimo (6 caracteres): Sim\n  Pelo menos um digito: Sim\n  Pelo menos uma letra maiuscula: Sim\n  Pelo menos uma letra minuscula: Sim\n  Pelo menos um caractere especial: Sim\n");
    }
    // Se não
    else {
        printf ("\n\n  A sua senha tem %d caracteres e atende os seguintes requisitos:\n", tam);
        if (flag[0]==1){
            printf("\n  Tamanho minimo (6 caracteres): Sim");
        }
        else {
            printf("\n  Tamanho minimo (6 caracteres): Nao");
        }
        if (flag[1]==1) {
            printf("\n  Pelo menos um digito: Sim");
        }
        else {
            printf("\n  Pelo menos um digito: Nao");
        }
        if (flag[2]==1) {
            printf("\n  Pelo menos uma letra maiuscula: Sim");
        }
        else {
            printf("\n  Pelo menos uma letra maiuscula: Nao");
        }
        if (flag[3]==1) {
            printf("\n  Pelo menos uma letra minuscula: Sim");
        }
        else {
            printf("\n  Pelo menos uma letra minuscula: Nao");
        }
        if (flag[4]==1) {
            printf("\n  Pelo menos um caractere especial: Sim");
        }
        else {
            printf("\n  Pelo menos um caractere especial: Nao");
        }
        if (flag[5]==1){
            printf("\n\n  Possui caractere invalido? Sim\n\n");
        }
        else {
            printf("\n\n  Possui caractere invalido? Nao\n\n");
        }
    }

    //Fim
    printf("\n");
    system ("pause");
    return 0;
}

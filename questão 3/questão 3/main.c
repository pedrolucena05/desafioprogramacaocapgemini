#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

    // Declaração das variaveis
    char palavra[20], v1[115];
    int tamanho,indice, quantidade=2, j=0, k, p=0, v2[20], m=0, anagramas=0, aux=0, flag[1650], op=0, rs;

    // Leitura e validação da string
    do {
        printf("\n\nDigite uma palavra:");
        gets(palavra);
        fflush(stdin);
        tamanho= strlen(palavra);
        // teste de validação da string
        for(j=0;j<tamanho;j++){
            if(palavra[j]<'A' || palavra[j]>'Z') {
                if(palavra[j]<'a' || palavra[j]>'z'){
                    printf("\n\nPalavra com caractere invalido!\n");
                    system("pause");
                    system("cls");
                    break;
                }
            }
            if(j==tamanho-1){
                op=1;
            }
        }
    } while(op==0);

    // Convertendo todos caracteres para minúsculos
    for (j=0;j<tamanho;j++){
        if (palavra[j]>='A' || palavra[j]<='Z'){
            palavra[j]=tolower(palavra[j]);
        }
    }

    // Definindo o índice e inicializando o vetor flag com zeros
    indice=tamanho-1;
    printf("\n\n");
    for (j=0;j<1650;j++){
        flag[j]=0;
    }

    // Contagem de anagramas
    while (indice>0) {
        // Inicializando o vetor auxiliar 'v1' a partir do indice (tamanho da substring)
        for(j=0;j<quantidade;j++){
            for(k=0;k<indice;k++) {
                v1[k+p]=palavra[k+aux];
            }
            aux++;
            p+=indice;
        }
        v1[indice*quantidade]='\0';

        // Inicializando o vetor (v2) responsável pela soma total (ascii) de cada substring
        while(m<quantidade){
            if (m==0) {
                v2[m+3]=0;
            }
            else {
                p=(m*2)+3;
                v2[p]=0;
            }
            m++;
        }
        m=0;
        p=0;
        // Soma (ascii) de cada substring no vetor v2
        for(j=0;j<quantidade;j++){
            m=(j*2)+3;
            for(k=0;k<indice;k++){
                    if(j==0){
                        v2[3]+=v1[k+p];
                    }
                    else {
                        v2[m]+=v1[k+p];
                    }
            }
            p+=indice;
        }
        // comparação da soma de cada substring (anagrama)
        for(j=0;j<quantidade;j++){
            m=(j*2)+3;
            for(k=0;k<quantidade;k++){
                // condição de contagem dos anagramas e implementação do vetor flag com 1 caso um anagrama seja encontrado
                if (j==0){
                    if (v2[3]==v2[5] && j!=k && flag[3*5]==0){
                        anagramas++;
                        flag[3*5]=1;
                    }
                 }
                 else {
                    rs=(k*2)+3;
                    if (v2[m]==v2[rs] && j!=k && flag[m*rs]==0){
                        anagramas++;
                        flag[m*rs]=1;
                    }
                }
            }
        }
        j=0;
        // Reinicializando o vetor flag e parametros iniciais para o próximo índice
        while(j<1650){
            flag[j]=0;
            j++;
        }
        m=0;
        p=0;
        indice--;
        quantidade++;
        aux=0;
    }
    printf("\n\nQuantidade de anagramas: %d\n\n", anagramas);
    printf("\n\n");
    system("pause");
    return 0;
}

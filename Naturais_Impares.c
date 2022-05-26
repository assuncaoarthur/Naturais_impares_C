#include  <stdio.h>


int main (){

    int i; //contador
    int n; //guarda o numero dado
    int impar; //usado para dar a seguencia de numeros impares


    printf("\n\tGerador de numeros impares\n");

      //inacialização
    printf("\nDigite o numero n: ");
        scanf("%d", &n);
        i=0;
        impar=1;

    printf("Os %d primeiros impares sao: \t",n);
    while (i<n){
        printf("%d\n", impar);
        impar = impar + 2; //vai para o proximo impar
        i = i + 1;

    }

return 0;
}

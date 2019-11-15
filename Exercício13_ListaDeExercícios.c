//13: Leia um vetor de 10 posições e verifique se existem valores iguais e os escreva.

#include <stdio.h>
#include <conio.h>

int main(){
    int a=0;
    int i, j, w, flag;
    int vetor[10], iguais[10];

    for(i=0; i < 10; i++){
        printf("Insira um valor %d: \n",i + 1);
        scanf("%d",&vetor[i]);
    }
    for(i=0; i < 10; i++){
        for(j=0; j < 10; j++){
            flag=0;
            if(vetor[i] == vetor[j] && i != j){
                for(w = 0; w < 10; w++){
                    if(iguais[w] == vetor[j])
                        flag = 1;
                }
                if(flag == 0){
                    iguais[a]= vetor[i];
                    a++;
                }
            }
        }
     }
     for(i = 0; i < a; i++){
        printf("\nExistem valores repetidos, sao eles: %d \n",iguais[i]);
     }
     getch();
     return 0;
}

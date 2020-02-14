#include <stdlib.h>
#include <stdio.h>

int main(){
    int certo[6], meus[6],cont = 0;
    srand(time(NULL));
    for(int i=0; i < 6; i++){
        certo[i] = rand() % 10+1;
    }
    printf("digit seus numeros:");
    for(int i=0; i< 6; i++){
        scanf("%d", &meus[i]);
    }

    for(int i=0; i < 6; i++){
        for(int x=0; x < 6; x++){
            if(meus[x]==certo[i]){
                cont++;
            }
                 
        }
    }
    if(cont == 4){
        printf("quadraa!!");
    }
    if(cont == 5){
        printf("quina!!");
    }
    if(cont == 6){
        printf("sena!!");
    }

    for(int i; i<6; i++){
        printf("%d,", certo[i]);
    }



    

    return 0;
}
#include <stdio.h>

int main (){
    int n,x,i,moyenne,somme,cpt;
    do{
       printf("saisir n entiers : ");
       scanf("%d",&n);
    }while(n<0);
    for(i=0;i<n;i++){
    do{
        puts("veuillez saisir un entier negatif : ");
        scanf("%d",&x);
    }while(n<0);
    for(i=0;i<n;i++){
        puts("veuillez saisir des entiers negatifs : ");
        scanf("%d",&x);
        somme=somme+x;
        cpt++;
       }
    }
     moyenne=somme/cpt;
      printf("La moyenne des nombres pairs est %d",moyenne);
return 0;
}

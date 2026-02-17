#include <stdio.h>

int main (){
    int n,x,i,moyenne,somme,cpt,somme1,moyenne1;
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
     moyenne1=somme1/n-cpt;
      printf("La moyenne des nombres pairs est %d",moyenne);
      printf("La moyenne des nombres impairs est : %d",moyenne1);
return 0;
}

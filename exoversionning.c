#include <stdio.h>

int main (){
    int n,x,i,somme=0,cpt=0;
    do{
       printf("saisir n entiers : ");
       scanf("%d",&n);
    }while(n<0);
    for(i=0;i<n;i++){
    do{
        puts("veuillez saisir un entier negatif : ");
        scanf("%d",&x);
    }while(n>0);
    if(x%2==0){
        somme+=x;
        cpt++;
    }
    }
    moyenne=somme/cpt
return 0;
}

#include <stdio.h>

int main (){
    int n,x,i;
    do{
       printf("saisir n entiers : ");
       scanf("%d",&n);
    }while(n<0);
    for(i=0;i<n;i++){
    do{
        puts("veuillez saisir un entier negatif : ");
        scanf("%d",&x);
    }while(n<0);
        printf("le nombre saisi est : %d",x);
        scanf("%d",&x);
    }
return 0;
}

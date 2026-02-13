#include <stdio.h>

int main(){
    int i,n,cpt;
    do{
        printf("veuillez saisir un entier positif : ");
        scanf("%d",&n);
    }while(n<0);
       cpt=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            cpt++;
            printf("%d\t",i);
    }
    }
return 0;
}

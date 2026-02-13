#include <stdio.h>

int main(){
    int i,n;
    do{
        printf("veuillez saisir un entier positif : ");
        scanf("%d",&n);
    }while(n<=0);
    printf("les nombres pairs entre 1 et %d sont : ",n);
    for(i=1;i<=n;i++){
        if(i%2==0)
            printf("%d\t",i);
    }


return 0;
}

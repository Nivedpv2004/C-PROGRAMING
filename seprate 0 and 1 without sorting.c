#include <stdio.h>

int main(){

    int i,b,c,d,f;
    printf("Enter the number of elements: ");
    scanf("%d",&c);

    int a[c];
    for(i=0;i<c;i++){
        scanf("%d",&b);
        a[i]=b;
    }
    for(i=0;i<c;i++){
        if(a[i]==1){
            d++;
        }
        else{
            f++;
        }
    }
    for (i=0;i<f;i++){
        printf("%d",0);
    }
    for (i=0;i<d;i++){
        printf("%d",1);
    }
}

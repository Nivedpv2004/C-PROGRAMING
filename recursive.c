#include <stdio.h>
#include <stdlib.h>

int fatNrecursivo(int n){
    int i;
    int fatnr = 1;
    for(i = n; i > 1; i--){
        fatnr = fatnr * i;
    }
    return fatnr;
}

int fatNrecursivo(int i){
    int fatr, n;
    if (n==0){
        fatr = 1;
    }else{
        fatr = n * fatNrecursivo(n-1); // recursive call
    }
    return fatr;
}

int main(){
    int n,i;
    int fr,fnr;
    printf("Write the number to calculate the fatorial");
    scanf("%i", &n);
    if(n<0){
        printf("Write a positivie number");
    }else{
        fr = fatNrecursivo(n);
        fnr = fatNrecursivo(n);
        printf("Not recursive fat(%i) = %i\n", n, fnr);
        printf("Recursive fat(%i) = %i\n", n, fr);
    }
    return 0; 
}
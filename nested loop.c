#include<stdio.h>

int main(){
    int x=0,y=0;
    while (x<=3)
    {

        y=0;
        while (y<=x)
        {
            printf("%d",y);
            y++;
        }
        printf("\n");
        x++;

    }
}


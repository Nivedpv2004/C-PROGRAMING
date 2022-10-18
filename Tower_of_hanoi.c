#include<stdio.h>
#include<stdlib.h>

void towers(int,char,char,char);
int main(){
int num;
printf("Enter the no. of discs: ");
scanf("%d",&num);
towers(num,'A','C','B');
printf("\nPuzzle Solved!");

}

void towers(int discs,char from,char to,char aux){
if(discs==1){
    printf("\nMove disk 1 from %c to %c",from,to);
    return;
}
towers(discs-1,from,aux,to);
printf("\nMove disk %d from %c to %c",discs,from,to);
towers(discs-1,aux,to,from);
}

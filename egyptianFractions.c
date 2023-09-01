#include <stdio.h>

/*Explanation of egyptian fraction from wikipidia:
    https://en.wikipedia.org/wiki/Egyptian_fraction#Applications
How to solve:
    1-> Greedy choice we start with the biggest fraction meaning 1/2
    2-> Check if: a/p - 1/2 = 2a-p/2p, if 2a>p then 1/2 is a valid fraction
    we subtract it from a/p and add one to i (2->3)
*/

int main(){
    int a=7, p=8, i=2; //We start from 2 because 1/2 is the biggest fraction 
    while(a!=0){
        if(a*i>=p){
            printf(" + 1/%d", i);
            a = a*i-p;
            p = p*i;
        }
        i++;
    }
}

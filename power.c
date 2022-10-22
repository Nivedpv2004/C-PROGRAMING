#include<stdio.h>
#include<math.h>

int main(){
    double a,b,ans;
    printf("Enter a:");
    scanf("%lf",&a);
    printf("Enter b:");
    scanf("%lf",&b);
    ans = pow(a,b);
    printf("%.2lf to the power of %.2lf is %.2lf",b,a,ans );

}

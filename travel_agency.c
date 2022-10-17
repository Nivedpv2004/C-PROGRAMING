#include<stdio.h>
#include<string.h>
struct agency{
    char name[32];
    char liscence[32];
    char route[32];
    int kms;
} d1,d2,d3;
int main(){
    printf("Enter name of driver 1\n");
    scanf("%s",d1.name);
 printf("Enter name of driver 2\n");
    scanf("%s",d2.name);
     printf("Enter name of driver 3\n");
    scanf("%s",d3.name);

    printf("Enter liscence num of driver 1\n");
     scanf("%s",d1.liscence);
      printf("Enter liscence num of driver 2\n");
     scanf("%s",d2.liscence);
      printf("Enter liscence num of driver 3\n");
     scanf("%s",d3.liscence);

    printf("Enter route name of driver 1\n");
    scanf(" %s",d1.route);
    printf("Enter route name of driver 2\n");
    scanf(" %s",d2.route);
    printf("Enter route name of driver 3\n");
    scanf(" %s",d3.route);

    printf("Enter kilometres of driver 1\n");
    scanf(" %d",&d1.kms);
     printf("Enter kilometres of driver 2\n");
    scanf(" %d",&d2.kms);
     printf("Enter kilometres of driver 3\n");
    scanf(" %d",&d3.kms);

printf("details for driver 1\n");
printf("Name is %s\n",d1.name);
printf("liscence is %s\n",d1.liscence);
 printf("route is %s\n",d1.route);
printf("kms is %d\n",d1.kms);

printf("details for driver 2\n");
printf("Name is %s\n",d2.name);
printf("liscence is %s\n",d2.liscence);
 printf("route is %s\n",d2.route);
printf("kms is %d\n",d2.kms);

printf("details for driver 3\n");
printf("Name is %s\n",d3.name);
printf("liscence is %s\n",d3.liscence);
 printf("route is %s\n",d3.route);
printf("kms is %d\n",d3.kms);
return 0;
}


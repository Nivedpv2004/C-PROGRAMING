// Write a program that reads different city-names that the traveler is moving; starting from the source to
// distinction and compute the total cost of his travel.
// Example
// How many cities the traveler will move: 5
// Enter the cities: City1 – Kolkata
// City2 – Kanpur
// City3 – Goa
// City4 – Pune
// City5 – Delhi
// The total cost of travel is 9720
#include<stdio.h>
#include<string.h>
//int strcmp(const char* x, const char* y);
int findcityindex(char* c, char list[6][10]);
void citycopy(char *x, char *y);
int main(){
	int costtable[6][6] = {
							{0,3525,2850,3000,2900,1500},
							{3525,0,3700,4000,3800,2500},
							{2850,3700,0,1800,870,2200},
							{3000,4000,1800,0,1025,2700},
							{2900,3800,870,1025,0,3500},
							{1500,2500,2200,2700,3500,0}
						};


	char citynames[6][10]={ "Delhi","Kolkata","Pune","Mumbai","Goa","Kanpur"};
	char current_city[10], next_city[10];
    int x,i,total=0;
	printf("Enter the number of city travelled \n");
    scanf("%d",&x);
    printf("Enter city 1 \n");
    scanf("%s",&current_city);
    for(i=0;i<x-1;i++)
    {
        printf("Enter city %d \n",(i+2));
        scanf("%s",&next_city);
        int x=findcityindex(current_city,citynames);
        int y=findcityindex(next_city,citynames);
        total=total+costtable[x][y];
       citycopy(next_city,current_city);
    }
	printf("Total is: %d",total);
	
           return 0;

}


void citycopy(char *des, char *sou)//copying destination to source
{
		strcpy(sou,des);
}
/*int strcmp(const char* x, const char* y){
	this block is not required for execution
}
*/
int findcityindex(char* c, char list[6][10]){
	int i;

	
	for(i=0;i<6;i++)
    {
		if(strcmp(c,list[i])==0) return i;
	}
	return -1;
}
#include<stdio.h>
#include<string.h>
char name[10][20] ={"Ananya","Bikramjit","Chityoraj","Dharmesh","Elen","Fatama","Ganasan","Harischandra","Intrajit","Jagdip"};
char roll[10][6] ={"CS101","CS102","CS103","CS104","CS105","CS106","CS107","CS108","CS109","CS110"};
int Marks[10][3] = {
{ 65,75,90},
{ 70,55,73},
{ 55,54,85},
{ 63,65,92},
{ 60,30,65},
{ 72,84,50},
{ 86,76,30},
{ 73,89,67},
{ 91,73,75},
{ 45,35,83},
};
char sub[3][10]={"English","Math","Science"};
int pos(char arr[])//function to get position of the Subject
{
    int i;
    for(i=0;i<3;i++)
    {
        if(strcmp(arr,sub[i])==0)//using string function
        return i;
    }
}
void details(char rollno[])//function to print details using rollnumber
{
int i;
for(i=0;i<10;i++)
{
if(strcmp(rollno,roll[i])==0)
    {
               printf("Marks in english is %d , Marks in math is %d , Marks in Science is %d \n",Marks[i][0],Marks[i][1],Marks[i][2]);
       break;
    }
}
return;
}
void less40(char subj[])//function to find details of students securing less than 40 
{
    int i,flag=0;
    int n=pos(subj);
    for(i=0;i<10;i++)
    {
        if(Marks[i][n]<40)
        {
            flag=1;
            printf("Name and Roll no of student with total less than 40 in %s are %s and %s\n",sub[n],name[i],roll[i]);
        }
    }
    if(flag==0)
    {
        printf("None have total less than 40 in %s\n",sub[n]);
    }
    return;
}
void avgg(char subject[])//function to compute average of a given subject
{
    float avg;
    int sum=0,i,count=0;
    int k=pos(subject);
    for(i=0;i<10;i++)
    {
        sum=sum+Marks[i][k];
    }
    avg=(float)sum/10;
    printf("The average of %s is %.2f\n",sub[k],avg);
    for(i=0;i<10;i++)
    {
    if(Marks[i][k]<avg)
    {
        count++;
    }
    }
    printf("No of students securing less than average in %s subject is %d",sub[k],count);
    return;
}
int main()
{
    char rollno[10];
    char subj[10];
    char subject[10];
    printf("Enter roll number of Students to get Marks\n");
    scanf("%s",rollno);
              details(rollno);
              printf("\n");
        printf("Enter Subject names to get details of students who got less than 40\n");
    scanf("%s",subj);
    less40(subj);
    printf("\n");
        printf("Enter Subject names to get average and no of students securing less than avg\n");
    scanf("%s",subject);
    avgg(subject);
    return 0;
}

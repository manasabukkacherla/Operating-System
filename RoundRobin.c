#include<stdio.h>
int main()
{
int wa[10],bu[20],tat[20],max,n,t,ct[20],j,i;
float awt=0,atat=0,temp=0;
printf("\nEnter no of processs   ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter the burst time of process %d  ",i+1);
scanf("%d",&bu[i]);
ct[i]=bu[i];
}
printf("\nEnter the time slice");
scanf("%d",&t);
max=bu[0];
for(i=1;i<n;i++)
if(max<bu[i])
max=bu[i];
for(j=0;j<(max/t)+1;j++)
for(i=0;i<n;i++)
if(bu[i]!=0)
if(bu[i]<=t)
{
tat[i]=temp+bu[i];
temp=temp+bu[i];
bu[i]=0;
}
else{
bu[i]=bu[i]-t;
temp=temp+t;
}
for(i=0;i<n;i++)
{
wa[i]=tat[i]-ct[i];
awt+=wa[i];
atat+=tat[i];
}
printf("\t PROCESS \tBURST TIME \t WAITING TIME \tTURN ARROUND TIME\n");
for(i=0;i<n;i++)
{
printf("\n P%d \t\t %d \t\t %d \t\t %d",i+1,ct[i],wa[i],tat[i]);
}
printf("\nAverage waiting time %f",awt/n);
printf("\nAverage turn aroundtime %f",atat/n);

}







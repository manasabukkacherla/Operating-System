#include<stdio.h>
int main()
{
int wt[20],bt[20],tat[20],i,n;
float wtavg,tatavg;
printf("\nEnter the no of processes  ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter the burst time of process %d   ",i+1);
scanf("%d",&bt[i]);
}
wt[0]=wtavg=0;
tat[0]=tatavg=bt[0];
for(i=1;i<n;i++)
{
wt[i]=wt[i-1]+bt[i-1];
tat[i]=tat[i-1]+bt[i];
wtavg=wtavg+wt[i];
tatavg=tatavg+tat[i];
}
printf("\t PROCESS \t BURST TIME \t WAITING TIME \tTURN ARROUND TIME\n");
for(i=0;i<n;i++)
{
printf("\n\t P%d \t\t %d \t\t %d \t\t %d",i+1,bt[i],wt[i],tat[i]);
}
printf("\nAverage waiting time %f",wtavg/n);
printf("\nAverage turn aroundtime %f\n",tatavg/n);
}

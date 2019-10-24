#include<iostream.h>
#include<conio.h>

int main()
{
clrscr();
int n, cc[20], wt[20], tat[20], i, j, art[20];
float avtat=0, arrival=0;
cout<<"Enter Number of Job: ";
cin>>n;

cout<<"\nEnter Process CPU Cycle:\n";
for (i=0; i<n; i++)
	{
	cout<<"Job ["<<i+1<<"]: ";
	cin>>cc[i];
	}

cout<<"\nEnter Arrival time of job:\n";
for (i=0; i<n; i++)
	{
	cout<<"Job ["<<i+1<<"]: ";
	cin>>art[i];
	}

wt[0]=0;

for (i=1; i<n; i++)
	{
	wt[i]=0;
	for (j=0; j<i; j++)
		wt[i]+=cc[j];
	}

cout<<"\nJob\t\tArrival Time\tWaiting Time\tCPU Cycle\tTurnaround Time";

for (i=0; i<n; i++)
	{
	tat[i]=art[0]+cc[i]+wt[i];
	arrival=tat[i]-art[i];
	avtat+=arrival;
	cout<<"\nJob ["<<i+1<<"]:"<<"\t"<<art[i]<<"\t\t"<<wt[i]<<"\t\t"<<cc[i]<<"\t\t"<<tat[i];
	}


avtat/=i;
cout<<"\n\nAverage Turnaround Time: "<<avtat;

getch();
}
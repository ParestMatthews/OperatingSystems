#include <conio.h>
#include <iostream.h>
#include <stdio.h>

void main()
{
clrscr();
int art[20], bt[20], p[20], wt[20], tat[20], i, j, n, total=0, pos, temp;
float avg_wt, avg_tat;
cout<<"Enter Number of Job: ";
cin>>n;

cout<<"\nEnter Job Size\n";
for (i=0; i<n; i++)
	{
	cout<<"Job "<<i+1<<": ";
	cin>>bt[i];
	p[i]=i+1;
	}
for (i=0; i<n; i++)
	{
	pos=i;
	for (j=i+1;j<n;j++)
		{
		if (bt[j]<bt[pos])
			pos=j;
		}
	temp=bt[i];
	bt[i]=bt[pos];
	bt[pos]=temp;

	temp=p[i];
	p[i]=p[pos];
	p[pos]=temp;
	}
cout<<"\nEnter Arrival Time of Job:\n";
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
		wt[i]+=bt[j];

	total+=wt[i];
	}
avg_wt=(float)total/n;
total=0;

cout<<"\nJob\tJob Size\tArrival Time\tWaiting Time\tTurnaround Time";
for (i=0; i<n; i++)
	{
	tat[i]=bt[i]+wt[i];
	total+=tat[i]-art[i];
	cout<<"\nJob "<<p[i]<<":\t"<<bt[i]<<"\t\t"<<art[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];
	}

avg_tat=(float)total/n;
cout<<"\n\nAverage Waiting Time: "<<avg_wt;
cout<<"\nAverage Turnaround Time: "<<avg_tat;
getch();

}


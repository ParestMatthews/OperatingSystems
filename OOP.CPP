#include<iostream.h>
#include<conio.h>

void main()
{
int memory[10], process[10], a1, a2, flag[10], allocate[10];
int i, j;
clrscr();

for (i=0; i<10; i++)
	{
	flag[i]=0;
	allocate[i]=-1;
	}

cout<<"\nEnter no. of Partitions: ";
cin>>a1;

cout<<"\nEnter each size of Partitions:\n";
for (i=0; i<a1; i++)
	cin>>memory[i];

cout<<"\nEnter no. of Processes: ";
cin>>a2;

cout<<"\nEnter size of each Process:\n";
for (i=0; i<a2; i++)
	cin>>process[i];

for (i=0; i<a2; i++)
	for (j=0; j<a1; j++)
		if (flag[j]==0 && memory[j]>=process[i])
			{
			allocate[j]=i;
			flag[j]=1;
			break;
			}

cout<<"\nPartition       Size	Process	    No. Size";
for (i=0; i<a1; i++)
	{
	cout<<"\n"<<i<<"       	"<<memory[i]<<"	";
	if (flag[i]==1)
		cout<<allocate[i]<<"	    "<<process[allocate[i]];
	else
		cout<<"Free----------------";
	}
getch();
}
#include <iostream.h>
#include <conio.h>

int main()

{
clrscr();

int fragment[20], b[20], p[20], i, j, nb, np, temp, lowest=9999;
static int barray[20], parray[20];

cout<<"Enter the no. of blocks: ";
cin>>nb;

cout<<"Enter the no. of processes: ";
cin>>np;

cout<<"\nEnter the size of the blocks:\n";
for (i=1; i<=nb; i++)
	{
	cout<<"Block no. "<<i<<": ";
	cin>>b[i];
	}

cout<<"\nEnter the size of the process:\n";
for (i=1; i<=np; i++)
	{
	cout<<"Process no. "<<i<<": ";
	cin>>p[i];
	}

for (i=1; i<=np; i++)
	{
	for (j=1; j<=nb; j++)
		{
		if (barray[j]!=1)
			{
			temp=b[j]-p[i];
			if (temp>=0)
				if(lowest>temp)
					{
					parray[i]=j;
					lowest=temp;
					}
			}
		}
	fragment[i]=lowest;
	barray[parray[i]]=1;
	lowest=10000;
	}

cout<<"\nProcess No.\tProcess Size\tBlock No.\tBlock Size\tFragment";
for (i=1; i<=np; i++)
	cout<<"\n"<<i<<"\t\t"<<p[i]<<"\t\t"<<parray[i]<<"\t\t"<<b[parray[i]]<<"\t\t"<<fragment[i];
	cout<<"\n"<<i<<"\t\t"<<"none"<<"\t\t"<<"free"<<"\t\t"<<b[parray[i]]<<"\t\t"<<b[i];
getch();
}

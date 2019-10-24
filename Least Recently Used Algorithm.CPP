#include <iostream.h>
#include <conio.h>

int main()
{
clrscr();

int p, f=2, page[20], i, frame[20], fcount[20], count=0;

cout<<"\nEnter the No. of Pages: ";
cin>>p;

cout<<"\nEnter the Value of jobs: \n";
for(i=0; i<p; i++)
	{
	cin>>page[i];
	}

for(i=0; i<f; i++)
	{
	frame[i]=-1;
	fcount[i]=0;
	}

i=0;
while (i<p)
	{
	int j=0, flag=0;
	while (j<f)
		{
		if (page[i]==frame[j])
			{
			flag=1;
			fcount[j]=i+1;
			}
		j++;
		}

	j=0;
	cout<<"\n-------------------\n";
	cout<<page[i];

	if (flag==0)
		{
		int k=0, min=0;
		while (k<f-1)
			{
			if (fcount[min]>fcount[k+1])
				{
				min=k+1;
				}
			k++;
			}
		frame[min]=page[i];
		fcount[min]=i+1;
		count++;

		while (j<f)
			{
			cout<<"\t"<<frame[j];
			j++;
			}
		}
	i++;
	}

cout<<"\n-------------------\n";

cout<<"\nPage Fault is: "<<count;

double fail, perc, a, b, succ;
a = count;
b = p;
fail = a/b;
perc = fail * 100;
succ = 100 - perc;

cout<<"\n\nFailure Rate: "<<perc<<"%";
cout<<"\n\nSuccess Rate: "<<succ<<"%";

getch();
return 0;

}
#include<iostream.h>
#include<conio.h>

int main ()
{
clrscr();

int a[20], i, j, k, m=2, count=0, n;

cout<<"Enter no. of pages: ";
cin>>n;

cout<<"\nEnter values of pages: ";
for (i=0; i<n; i++)
	{
	cout<<"\n";
	cin>>a[i];
	}

int count1[20];

for (i=0; i<m; i++)
	{
	count1[1]=-1;
	cout<<"\nDistributions:\n";
	for (i=0; i<n; i++)
		{
		k=0;
		for (j=0; j<m; j++)
			{
			if (a[i]==count1[j])
				{
				k++;
				count--;
				}
			}
		count++;
		if (count<=m && k==0)
			{
			count1[i]=a[i];
			}
		else if (k==0)
			{
			count1[(count-1)%m]=a[i];
			}
		cout<<"\n\t\t------------------\n";
		for (j=0; j<m; j++)
			{
			cout<<"\t\t";
			cout<<count1[j];
			}
		}


cout<<"\n\nTotal Pages Faults: "<<count;
double fail, perc, a, b, succ;
a = count;
b = n;
fail = a/b;
perc = fail * 100;
succ = 100 - perc;

cout<<"\n\nFailure rate: "<<perc<<"%";
cout<<"\n\nSuccess rate: "<<succ<<"%";


getch();
return 0;

}
}
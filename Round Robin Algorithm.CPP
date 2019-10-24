#include <iostream.h>
#include <conio.h>

int main (){
clrscr();
int count, j, n, time=0, remain, flag=0, tq;
float wt=0, tat=0, at[10], cput[10], rt[10];

cout<<"Enter Total Process: " ;
cin>>n;
remain = n;

cout<<endl<<"Enter Arrival Time(s): "<<endl<<endl;
for (count =0 ; count < n; count ++) {
cout<<"Arrival Time "<<count +1<<": ";
cin>>at[count];
}

cout<<endl<<"Enter CPU Cycle(s): "<<endl<<endl;
for (count = 0; count <n ; count ++){
cout<<"CPU Cycle "<<count +1<<": ";
cin>>cput[count];
rt[count]= cput[count];}

cout<<endl<<"Enter Time Quantum: ";
cin>>tq;

for(count=0; remain!=0;)
{
if(rt[count]<= tq && rt[count]>0)
{
time+=rt[count];
rt[count]=0;
flag=1;
}
else if (rt[count]>0)
{
rt[count]-=tq;
time+=tq;
}

if(rt[count]==0 && flag==1)
{
remain--;
wt+=time-at[count]-cput[count];
tat+=time-at[count];
flag=0;
}

if (count==n-1)
count=0;

else if (at[count+1]<=time)
count++;
}

cout<<endl<<"Average Turnaround Time: "<<tat/n;
getch ();
return 0;
}
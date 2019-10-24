#include <iostream.h>
#include <conio.h>

int main () {
int job, mr[99], rn[99], i, totald, z,g;
float x=0, da[99];
clrscr();

cout<<"Enter Number of Jobs: ";
cin>>job;

cout<<"Enter Devices Allocated per job: "<<endl;
for (i = 0; i<job; i++){
cin>>da[i];
}

cout<<"Enter Maximum required per Job: "<<endl;
for(i=0; i<job; i++){
cin>>mr[i];
}
cout<<"Enter the total number of devices: " <<endl;
cin>>totald;

for (i=0; i<job; i++){
rn[i] = mr[i]-da[i];
}

cout<<"Job nnumber:	Devices Allocated:	Maximum Required:	Remaining Needs:"<<endl;
for(i=0; i<job; i++){
cout<<"Job "<<i+1<<"		"<<da[i]<<" 			"<<mr[i]<<"			"<<rn[i]<<endl;
}

for (i=0;i<job;i++){
 x = x + da[i];
}
cout<<endl<<"Total number of devices allocated: "<<x;
cout<<endl<<"Total number of devices in system: "<<totald;

z = totald - x;

cout<<endl<<"Indication: ";
for (i=0;i<job;i++){
 if (z<rn[i])
 {
  g = 0;  //unsafe
 }
 else
 {
  g = 1;  //safe
 }
}

if (g==0)
{
 cout<<"Unsafe state";
}

else
{
 cout<<"Safe state";
}


getch ();
return 0;
}
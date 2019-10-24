#include <iostream.h>
#include <conio.h>

int main (){
clrscr();
int a[99], b[99], x[10], i, j, smallest, count=0, time, n;
float avg=0, tt=0, end;

cout<<"Enter number of Processes: ";
cin>>n;

cout<<endl<<"Enter Arrival Time(s): " <<endl<<endl;
for (i=0; i<n; i++){
cout<<"Arrivial Time "<<i+1<<": ";
cin>>a[i]; }

cout<<endl<<"Enter CPU Cycle(s) :"<<endl<<endl;
for (i=0; i<n; i++){
 cout<<"CPU Cycle "<<i+1<<": ";
 cin>>b[i];
}
for (i=0; i<n; i++) {
 x[i]=b[i];}

 b[9] = 9999;

 for (time=0; count!=n; time++){
 smallest = 9;
 for(i=0; i<n; i++){
 if(a[i]<=time && b[i]<b[smallest] && b[i]>0)
 smallest = i; }

 b[smallest] --;
 if (b[smallest]==0){
 count++;
 end = time + 1;
 avg = avg + end - a[smallest] - x[smallest];
 tt = tt + end - a[smallest];}
}

cout<<endl<<endl<<"Average Turnaround Time: "<<tt/n;
getch ();
return 0;
}
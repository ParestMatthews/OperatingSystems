#include <iostream.h>
#include <conio.h>

int main (){
clrscr();
int a[99], et[99], d[10], x[10], i, j, smallest, count=0, time, n;
float avg=0, tt=0, end;

cout<<"Enter number of processes: ";
cin>>n;

cout<<endl<<"Enter Arrival Time(s): " <<endl<<endl;
for (i=0; i<n; i++){
cout<<"Arrivial Time "<<i+1<<": ";
cin>>a[i]; }

cout<<endl<<"Enter Execution Time(s): "<<endl<<endl;
for (i=0; i<n; i++){
 cout<<"Execution Time "<<i+1<<": ";
 cin>>et[i];
}
cout<<endl<<"Enter Deadline(s): "<<endl<<endl;
for(i=0; i<n; i++){
 cout<<"Deadline: "<<i+1<<": ";
 cin>>d[i] ;
 }

for (i=0; i<n; i++) {
 x[i]=d[i];}

 d[9] = 9999;

 for (time=0; count!=n; time++){
 smallest = 9;
 for(i=0; i<n; i++){
 if(a[i]<=time && d[i]<d[smallest] && et[i]>0)
 smallest = i; }

 et[smallest] --;
 if (et[smallest]==0){
 count++;
 end = time + 1;
 avg = avg + end - a[smallest] - x[smallest];
 tt = tt + end - a[smallest];}
}

cout<<endl<<endl<<"Average Turnaround Time: "<<tt/n;
getch ();
return 0;
}
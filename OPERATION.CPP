#include <iostream.h>
#include <conio.h>

int main () {
clrscr();
float a,b,c,d,e;

cout<<"G = (A+C^2)*(E-1)^3 / D+B"<<endl;

cout<<"Enter your Inputs: "<<endl;
cout<<"A: ";
cin>>a;
cout<<endl<<"B: ";
cin>>b;
cout<<endl<<"C: ";
cin>>c;
cout<<endl<<"D: ";
cin>>d;
cout<<endl<<"E: ";
cin>>e;

float t1,t2,t3;
t1 = (a+(c*c));
t2 = (e-1)*(e-1)*(e-1);
t3 = d+b;

cout<<endl<<"First Process: "<<endl;
cout<<"T1: (A+C^2) = "<<t1<<endl;
cout<<"T2: (E-1)^3 = "<<t2<<endl;
cout<<"T3: D+B = "<<t3<<endl;

float t4;

t4 = t1*t2;
cout<<endl<<"Second Process: "<<endl;
cout<<"T4: T1*T2 = "<<t4<<endl;

float g;

g = t4/t3;

cout<<endl<<"Third Process: "<<endl;
cout<<"G: T4/T3 = "<<g;



getch ();
return 0;

}

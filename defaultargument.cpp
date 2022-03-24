//#include<iostream.h>
#include<stdio.h>
mainQ
{
float amount;
float value(float p,int n,float r=0.15);
void printline(char ch=’*’,int len=40);
printline( );
amount=value(5000.00,5);
cout<<”\n final value=”<<amount<<endl;
printline(‘=’);
//function definitions
float value (float p,int n, float r)
{
float si;
si=(p*n*r)/100;
 return(si);
}
void printline (char ch,int len)
{
for(inti=l;i<=len;i++)
cout<<ch<<endl;
}


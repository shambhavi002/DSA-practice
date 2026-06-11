#include<iostream>
using namespace std;
int main(){
int num=5;
int *p=&num;
//adress of operator-&
cout<<"value is "<<*p<<endl;
cout<<"adress of num is "<<&num<<endl;
num=num+1;
char ch='a';
char *pr=&ch;
cout<<"adress of char is "<<&ch<<endl;
double d=4.777;
double *p1=&d;
cout<<"adress is "<<&p1<<endl;
cout<<sizeof(*p1)<<endl;
cout<<sizeof(d)<<endl;
cout<<sizeof(*p)<<endl;
cout<<sizeof(num)<<endl;
cout<<sizeof(*pr)<<endl;
cout<<sizeof(ch)<<endl;
int i=5;
int *r=&i;
cout<<r<<endl;
cout<<*r<<endl;
int *q=0;
q=&i;
cout<<q<<endl;
cout<<*q<<endl;
int count=88;
int a=count;
a++;
int *o=&num;
cout<<"before num "<<num<<endl;
(*o)++;
cout<<"after num "<<num<<endl;
// copying a pointer
int *m=o;
cout<<o<<" "<<m<<endl;
cout<<*o<<" "<<*m<<endl;
// important concept
int j=3;
int *t=&j;
cout<<(*t)<<endl;
*t=*t+1;



}

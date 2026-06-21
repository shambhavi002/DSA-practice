#include<iostream>
using namespace std;
class A {
public:
void sayHello(){
cout<<"Hello you"<<endl;
}
int sayHello(string name, int n){
cout<<"Hello me"<<endl;
return n;
}
};
class D{
public:
int e;
int f;
public:
int add(){
return e+f;
}
void operator+(D & obj){
int value1=this->e;
int value2=obj.e;
cout<<"output "<<value2-value1<<endl;
}
};
//Run time polymorphism
class Joy{
public:
void happy(){
cout<<"is happy "<<endl;
}
};
class Rat:public Joy{
public:
void happy(){
cout<<"Joyful"<<endl;
}
};
int main(){
A obj;
obj.sayHello();
D obj1,obj2;
obj1.e=4;
obj2.f=7;
obj1+obj2;
Rat orm;
orm.happy();

}

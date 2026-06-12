#include<iostream>
using namespace std;
class Animal{
public:
int age;
int weight;
public:
void bark(){
cout<<"Barking"<<endl;
}
};
class Human{
public:
string color;
public:
void speak(){
    cout<<"Speaking"<<endl;
}
};
// multiple inheritence
class Hybrid:public Animal, public Human{

};
//Heirachical inheritence
class A {
public:
void  func1(){
cout<<"inside fun 1"<<endl;
}
};
class B:public A{
public:
void func2(){
cout<<"inside fun 2"<<endl;
}
};
class C :public A {
public:
void func(){
cout<<"inside fun 2"<<endl;
}
};
int main(){
 A object1;
 object1.func1();
 B object2;
 object2.func1();
 object2.func2();
 C object3;
 object3.func1();

Hybrid obj1;
obj1.speak();
obj1.bark();
}







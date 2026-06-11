#include<iostream>
using namespace std;
int getLength(char name[]){
    int count=0;
    for(int i=0; name[i]!='/0'; i++){
    count++;
    }
    return count;
}
int main(){
char name[30];
cin>>name;
//name[2]={'\0'};
cout<<name<<endl;
cout<<"length"<<getLength(name)<<endl;
}

#include<iostream>
using namespace std;
void update(int arr[], int n){
cout<<"inside function"<<endl;
arr[0]=120;
for(int i=0; i<2; i++){
cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"going back to main function"<<endl;
}
int main(){
int arr[2]={0,1};
update(arr,2);
for(int i=0; i<3; i++){
cout<<arr[i]<<endl;
}
cout<<endl;
cout<<endl;
}
//avoid using update in array as it changes the original array

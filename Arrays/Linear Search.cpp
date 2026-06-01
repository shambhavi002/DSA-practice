#include<iostream>
using namespace std;
boolSearch(int arr[],int size, int key){
for(int i=0; i<size; i++){
if (arr[i]==key){
return 1;
}
else{
return 0;
}
}
}
int main(){
int arr[4]={4,5,6,7};
cout<<"no to be searched"<<endl;
int key;
cin>>key;
if(boolSearch(arr,4,key)){
cout<<"found"<<endl;
}
else{
cout<<"not found"<<endl;
}
}
// time complexity O(n)
// space complexity 

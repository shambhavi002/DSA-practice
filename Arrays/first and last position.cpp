#include<iostream>
using namespace std;
int firstOccurence(int arr[], int n, int key){
int s=0;
int e=n-1;
int ans=-1;
while(s<=e){
    int m=s+(e-s)/2;
if(arr[m]==key){
ans=m;
e=m-1;
}
else if(arr[m]<key){
s=m+1;
}
else{
e=m-1;
}
}
return ans;
}
int lastOccurence(int arr[], int n, int key){
int s=0;
int e=n-1;
int ans=-1;
while(s<=e){
    int m=s+(e-s)/2;
if(arr[m]==key){
ans=m;
s=m+1;
}
else if(arr[m]<key){
s=m+1;
}
else{
e=m-1;
}
}
return ans;
}
int main(){
int brr[5]={1,2,3,3,5};
int firstindex=firstOccurence(brr,5,3);
cout<<"first occurence is at index "<<firstindex<<endl;
int lastindex=lastOccurence(brr,5,3);
cout<<"last occurence ia at index "<<lastindex<<endl;
}

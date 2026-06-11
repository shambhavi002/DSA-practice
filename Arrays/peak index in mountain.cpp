#include<iostream>
using namespace std;
int peakIndex(int arr[], int size){
int s=0;
int e=size-1;
while(s<e){
int mid=s+(e-s)/2;
if(arr[mid]<arr[mid+1]){
s=mid+1;
}
else{
e=mid;
}
}
return s;
}
int main(){
int brr[6]={5,6,7,8,9,10};
int peak=peakIndex(brr,6);
cout<<peak<<endl;
}

#include<iostream>
using namespace std;
// time complexity O(n^2)
void insertionSort(int arr[], int n){
for(int i=0; i<n-1; i++){
int temp=arr[i];
int j=i-1;
while(j>=0 && arr[j]>temp){
arr[j+1]=arr[j];
j--;
}
arr[j+1]=temp;
}
}
int main(){
int brr[5]={7,8,889,34,5444};
int n=5;
insertionSort(brr,n);
for(int i=0; i<n; i++){
cout<<brr[i]<<" ";
}

}

#include<iostream>
#include<stdio.h>

using namespace std;


int firstOcc(int arr[],int n,int i,int key){

    if(i == n){
        return -1;
    }

    if(arr[i] == key){
        return i;
    }

    return firstOcc(arr,n,i+1,key);
}


int lastOcc(int arr[],int n,int i,int key){

    if(i == n){
        return -1;
    }

    int restarr = lastOcc(arr,n,i+1,key);

    if(restarr != -1){
        return restarr;
    }

    if(arr[i] == key){
        return i;
    }

    return -1;
}



int main(){
    int arr[] = {1,2,3,2,5};
    cout << firstOcc(arr,5,0,2)<<endl;
    cout << lastOcc(arr,5,0,2)<<endl;  
}



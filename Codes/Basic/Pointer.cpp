#include<bits/stdc++.h>
using namespace std;

void func(int arr[]);

int main(){
    //usual variable declaration
    int num = 100;

    //pointer variable dec
    int *n = &num;

    char b = 'a';

    //pointer
    char *c = &b;

    //n == memory location
    //*n 

    cout<<"Num : "<<num<<endl;

    *n = 10;

    cout<<"Num : "<<num;

    int arr[] = {1 , 2 , 3 ,4 ,5};

    for(int i=0 ;i<5;i++){
        cout<<arr[i]<<" ";
    }

    func(arr);

    for(int i=0 ;i<5;i++){
        cout<<arr[i]<<" ";
    }

    // arr - storing memory location of first element
    // arr + 4 - storing memory location of fourth element

    cout<<endl<<endl<<"arr[3] : "<<arr[3]<<endl;
    cout<<"arr[3] : "<<*(arr+3)<<endl;
    


    return 0;
}

void func(int arr[]){
    arr[0] = 100;
    arr[2] = 200;
}
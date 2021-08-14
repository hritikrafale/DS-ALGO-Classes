#include<bits/stdc++.h>
using namespace std;

//call by reference
//call by value


//call by value
int sum1(int a , int b){
    return a + b;
}

//call by ref
int sum2(int *num1 , int *num2){

}

// &num 

int main(){
    int num1 , num2;

    cin>>num1>>num2;

    cout<<sum1(num1 , num2)<<endl;


    // num1 = 5
    // int *num = &num1
    // *num = 5
    // num =  address
    // &num = address of num 


    cout<<sum2(&num1 , &num2)<<endl;

    int a = 5;
    cout<<a;

    int *num;

    num = &a;

    *num = 10;

    //* reference variable
    //& deference

    return 0;
}
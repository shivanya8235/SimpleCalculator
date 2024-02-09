#include<iostream>
using namespace std;

int main(){
    double num1,num2;
    char op;
    cout<<"Enter Two Numbers and choose the Operator(+,-,*,/) to perform the operation you like to:"<<endl;
    cin>>num1>>op>>num2;
    
    double summation=num1+num2,substraction=num1-num2,multiplication=num1*num2,division=num1/num2;

    switch(op){
        case '+':
        cout<<summation<<endl;
        break;

        case '-':
        cout<<substraction<<endl;
        break;

        case '*':
        cout<<multiplication<<endl;
        break;

        case '/':
        if(num2==0.0){
            cout<<"Not Defined situation."<<endl;
        }
        else{
        cout<<division<<endl;
       }
        break;

        default:
        cout<<"Invalid Operator"<<endl;
    }

    return 0;
}

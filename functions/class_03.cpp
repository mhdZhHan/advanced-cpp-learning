#include<iostream>
using namespace std;

// function return statement
bool is_primenumber(int number){
    for(int i=2;i<number;i++){
        if(number % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int number;
    cout<<"Entaer a number: ";
    cin>>number;
    bool is_prime = is_primenumber(number);
    if(is_prime)
        cout<<number<<" Is a prime number."<<endl;
    else
        cout<<number<<" Is not a prime number"<<endl;
    return 0;
}
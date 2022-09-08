#include<iostream>
using namespace std;

void my_func(){ // function declaration + definition
    cout<<"Hello world from my_func()"<<endl;
}

void new_func(); // function declaration

// main function
int main(){
    cout<<"Hello world from main()"<<endl;
    my_func(); // function calling

    new_func(); // 
    return 0;
}

void new_func(){ // function definition
    cout<<"Hello world from new_func()"<<endl;
}

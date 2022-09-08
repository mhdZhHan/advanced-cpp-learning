// void pointer
#include<iostream>
using namespace std;

void printNumber(int* numberPtr){
    cout<<"Address: "<<numberPtr<<endl;
    cout<<"Value: "<<*numberPtr<<endl;
}

void printLetter(char* letterPtr){
    cout<<"Address: "<<letterPtr<<endl;
    cout<<"Value: "<<*letterPtr<<endl;
}

// void pointer function
void print(void* ptr, char type){
    switch(type){
        case 'i': // handle int*
            cout<<"Value: "<<(*(int*)ptr)<<endl;
            cout<<"Address: "<<((int*)ptr)<<endl;
            break;
        case 'c': // handle char*
            cout<<"Value: "<<*((char*)ptr)<<endl;
            cout<<"Address: "<<((char*)ptr)<<endl;
            break;
        default:
            cout<<"Wrong input :) try again input should be (i / c)"<<endl;
            break;
    }
}

int main(){
    int number = 5;
    int letter = 'a';

    // printNumber(&number);
    // printNumber(&letter);

    cout<<"First: "<<&number<<endl;
    cout<<"Second: "<<&letter<<endl;

    print(&letter, 'c');
    print(&number, 'i');

    return 0;
}

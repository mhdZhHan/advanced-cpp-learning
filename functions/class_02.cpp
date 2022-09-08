#include<iostream>
using namespace std;

// Function with parameters / arguments
void introduce_me(string name, string city, int age=0){
    cout<<"My name is: "<<name<<endl;
    cout<<"I'am from: "<<city<<endl;
    if(age!=0)
        cout<<"I'am "<<name<<" Years old"<<endl;
}

int main(){
    introduce_me("Mohammed", "Keral", 18);
    cout<<"==================================================="<<endl;
    introduce_me("Jane", "London");

    return 0;
}
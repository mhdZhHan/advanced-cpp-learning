#include<iostream>
using namespace std;
// introduction to pointer
int main(){
    int n = 5;
    cout<<n<<endl; // print the value of 'n'
    cout<<&n<<endl; // print the address of variable 'n'

    int* ptr = &n; // the 'ptr' variable store address of variable 'n' 
    cout<<ptr<<endl; // print the address of variable 'n'

    cout<<*ptr<<endl; // print the value of the 'ptr' variable strored address

    *ptr = 10; // add new value to the 'ptr' variable stored address
    cout<<*ptr<<endl; 

    cout<<n<<endl; // print the new value


    // Another example
    int v;
    int* ptr2 = &v;
    *ptr2 = 7;
    cout<<"V = "<<v<<endl;

    return 0;
}

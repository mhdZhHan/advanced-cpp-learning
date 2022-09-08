// Pointers and array
#include<iostream>
using namespace std;

int main(){
    int myArray[5] = {1, 2, 3, 4, 5};
    cout<<myArray<<endl; // print the addres of array first element (myArray[0])
    cout<<&myArray[0]<<endl;

    cout<<myArray[2]<<endl;
    cout<<*(myArray + 2)<<endl; // print the value of myArray[2]

    // ===============================
    int newArray[5];
    // read array elements
    for(int i=0;i<=4;i++){
        cout<<"Number: ";
        cin>>newArray[i];
    }

    cout<<"New Array elements are: "<<endl;
    for(int i=0;i<=4;i++){
        cout<<*(newArray + i)<<endl;
    }

    return 0;
}

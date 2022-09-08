// create/change arrays at runtime (Dynamic arrays)
#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter array size: ";
    cin>>size;
    // int myArray[size];
    
    // Dynamic memory (runtime memory allocation)
    int* myArray = new int[size];

    cout<<"myArray first element address: "<<myArray<<endl;

    // read elements to myArray[]
    for(int i=0;i<=size;i++){
        cout<<"myArray["<<i<<"]: ";
        cin>>myArray[i];
    }

    // display array elements
    cout<<"Array elements are: "<<endl;
    for(int i=0;i<=size;i++){
        cout<<myArray[i]<<", ";
    }

    // Deallocate myArray memory
    delete[]myArray;
    myArray = NULL;

    cout<<endl;

    return 0;
}

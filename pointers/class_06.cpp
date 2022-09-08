// Dynamic two-dimensional array (Multidimensional dynamic array)
#include<iostream>
using namespace std;

int main(){
    int rows, cols;
    cout<<"Rows, Cols: "<<endl;
    cin>>rows>>cols;

    int** table = new int*[rows];
    for(int i=0;i<rows;i++){
        table[i] = new int[cols];
    }

    table[1][2] = 99;
    cout<<table[1][2];

    // deallocate memory
    for(int i=0;i<rows;i++){
        delete[] table[i];
    }

    delete[] table;
    table = NULL;

    cout<<endl;
    return 0;
}

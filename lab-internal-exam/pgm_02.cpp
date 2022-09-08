// Arithemetic operations on matrix using class
#include<iostream>
using namespace std;

class Matrix{
    int a[3][3], b[3][3], c[3][3], i, j, k;
    public:
    void insert();
    void add();
    void sub();
    void mult();
};

void Matrix::insert(){
    // matrix A
    cout<<"Enter matrix A(3X3): "<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>a[i][j];
        }
    }

    // matrix B
    cout<<"Enter matrix B(3X3): "<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>b[i][j];
        }
    }
}

void Matrix::add(){
    cout<<"Matrix A + Matrix B = "<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j] += a[i][j] + b[i][j];
            cout<<c[i][j]<<"\t";
        }
        cout<<"\n";
    }
}

void Matrix::sub(){
    cout<<"Matrix A - Matrix B = "<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j] -= a[i][j] - b[i][j];
            cout<<c[i][j]<<"\t";
        }
        cout<<"\n";
    }
}

void Matrix::mult(){
    int r1, r2, c1, c2;
    cout<<"Enter the order of Matrix a: ";
    cin>>r1>>c1;
    cout<<"Enter the order of Matrix b: ";
    cin>>r2>>c2;
    if(c1 == c2){
        cout<<"Enter the matrix A: \n";
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                cin>>a[i][j];
            }
        }

        cout<<"Enter the matrix B: \n";
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++){
                cin>>b[i][j];
            }
        }

        // multiple Matrix A & B
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                c[i][j] = 0;
                for(k=0;k<c1;k++){
                    c[i][j] += a[i][k] * b[k][i];
                }
            }
        }

        // product
        cout<<"Matrix A * B = "<<endl;
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                cout<<c[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }else {
        cout<<"Matrix not possible :)";
    }
}

int main(){
    int n;
    Matrix m;
    cout<<"Enter your choice: ";
    cout<<"\n 1. Addition \n 2. Subtraction \n 3. Multipluication: \n 4. Exit"<<endl;
    cin>>n;
    do {
        switch(n){
            case 1: 
                m.insert();
                m.add();
                break;
            case 2: 
                m.insert();
                m.sub();
                break;
            case 3: 
                m.mult();
                break;
            default: cout<<"Wrong choice :)"<<endl;
            break;
        }
    }while(n!=4);
    return 0;
}
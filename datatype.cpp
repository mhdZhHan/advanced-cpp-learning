#include<iostream>
using namespace std;

// Strcucture
struct demo_struct {
    int val1;
    double val2;
};

typedef struct demo_struct d_struct;

class Demo{
    public:
        string name;
        Demo(string n){
            name = n;
        }
        void print_name(){
            cout<<"Name is: "<<name<<endl;
        }
};

typedef Demo dem;

int main(){
    // Primitive data types
    int num = 10;
    int num2 = 11;
    char ch = 'a';
    bool val = false;
    float dec = 11.2;
    double dec2 = 11.2;

    // Derived data type
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10};
    int *ptr = &num;
    int &numRef = num;

    // User defined data types
    enum days {
        Sunday = 1,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };

    // calling enum
    days d = Sunday;
    cout<<"Day is :"<<d<<endl;

    // structure obj

    d_struct s = {1, 2};
    cout<<"Value1: "<<s.val1<<endl;
    cout<<"Value2: "<<s.val2<<endl;
    
    // class obj
    dem demo_obj("Mohammed");
    demo_obj.print_name();

    return 0;
}
// Area of circle or area of rectangle
#include<iostream>
using namespace std;
int main(){
    float a, b, r, area;
    int ch;
    cout<< "********Menu********"<< endl;
    cout<<"1.Area of Circle"<<endl;
    cout<<"2.Area of Rectangle"<<endl;
    cout<< "********************"<< endl;
    cin>>ch;
    switch(ch){
        case 1: cout<<"Enter radius of circle: ";
                cin>>r;
                area = 3.14 * r * r;
                cout<<"Area = "<<area<<endl;
                break;
        case 2: cout<<"Enter the length and breadth: ";
                cin>>a>>b;
                area = a * b;
                cout<<"Area = "<<area<<endl;
                break;
        default: cout<<"Wrong choice. :)"<<endl;
                 break;
    }
    return 0;
}
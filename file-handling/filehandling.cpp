#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    // Create or Open a File and Write Something.
    fstream my_file;
    my_file.open("sample.txt", ios::out); // write
    if(my_file.is_open()){
        my_file<<"Hello\n";
        my_file<<"This is serrcond line.\n";
        my_file.close();
    }

    // Create or Open a File and Append Something
    fstream my_file;
    my_file.open("sample.txt", ios::app); // append
    if(my_file.is_open()){
        my_file<<"This is append method";
        my_file.close();
    }

    // Create or Open a File and Read the Content Inside the File
    fstream my_file;
    my_file.open("sample.txt", ios::in);
    if(my_file.is_open()){
        string content;
        while(getline(my_file, content)){
            cout<<content<<endl;
        }
        my_file.close();
    }

    return 0;
}
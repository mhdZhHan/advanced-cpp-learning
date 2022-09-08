// Return multiple values from a function using pointers
#include<iostream>
using namespace std;

int getMin(int array[], int size){
    int min = array[0];
    for(int i=0;i<size;i++){
        if(array[i] < min)
            min = array[i];
    }
    return min;
}

int getMax(int array[], int size){
    int max = array[0];
    for(int i=0;i<size;i++){
        if(array[i] > max)
            max = array[i];
    }
    return max;
}

// get min and max
void getMinAndMax(int array[], int size, int* min, int* max){
    for(int i=0;i<size;i++){
        if(array[i] < *min)
            *min = array[i];
        if(array[i] > *max)
            *max = array[i];
    }
}

int main(){
    int myArray[5] = {2, -2, 29, 5, 786};
    // cout<<myArray[4]<<endl;

    cout<<"Min is "<<getMin(myArray, 5)<<endl;
    cout<<"Max is "<<getMax(myArray, 5)<<endl;

    cout<<"==============================="<<endl;

    int min = myArray[0];
    int max = myArray[0];

    getMinAndMax(myArray, 5, &min, &max);

    cout<<"Min is "<<min<<endl;
    cout<<"Max is "<<max<<endl;


    return 0;
}

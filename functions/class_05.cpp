// Recursion
#include<iostream>
using namespace std;

int recursive_sum(int m, int n){
    if(m == n)
        return m;
    return m + recursive_sum(m+1, n); // 2+(3+(4))
}

// sum numbers between m-n
int main(){
    int m = 2, n = 4, sum = 0;

    cout<<"Sum = "<<recursive_sum(m, n)<<endl;

    // using forloop

    // for(int i=m;i<=n;i++){
    //     sum += i;
    // }

    // cout<<"Sum = "<<sum<<endl;

    return 0;
}
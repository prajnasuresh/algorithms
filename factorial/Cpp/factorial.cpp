#include <iostream>
using namespace std;
int factorial(int n){
    return n<2?1:n*factorial(n-1);
}
int main(){
    int a = 6;
    cout<<factorial(a)<<endl;
    return 0;
}
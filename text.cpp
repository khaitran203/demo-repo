#include <iostream>
using namespace std;

int total(int& a, int& b){
    return a + b;
}

int main(){
    int a = 10;
    int b = 20;
    cout << a + b << endl;
    cout << total(a,b);
    return 0;
}
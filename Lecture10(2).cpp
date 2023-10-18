#include <iostream>
using namespace std;
void swap1(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"inside "<<a<<" "<<b<<endl;
}
int main() {
    int a=3,b=5;
    swap1(a,b);
    cout<<"outside "<<a<<" "<<b;
   
}

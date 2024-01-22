#include<iostream>
using namespace std;

int fact(int num) {
return num * fact(num -1);
}
int main() {
int num = 5;
cout<< fact(num);
return 0;
}

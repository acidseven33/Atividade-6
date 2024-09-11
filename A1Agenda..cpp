#include <iostream> 
using namespace std; 

void parametro1 (int *b, int *a){
    int num1 = *a;
    int num2 = *b;
    if(num1 < num2){
        *a= 
        *b=
    } else {
        cout << "Error"<< endl;
    }
}
  
int main () {
    int num1, num2;
    cin >> num1 >> num2; 
    cout << "num1" << " " << "num2";
    parametro1(&num1, &num2);
}

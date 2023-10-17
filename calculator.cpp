#include<iostream>
using namespace std;
class calculator {
    public:
    
   int num1 = 10;
   int num2 = 20;
    void addition(){
        int result = num1 + num2;
        cout << result << endl;
    }

};
int main(){
    calculator add ;
    add.addition();
    return 0 ;

}
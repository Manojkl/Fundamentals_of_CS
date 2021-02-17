#include <iostream>

using namespace std;

int main(){
    int A;
    int B;
    int SUM;
    char input[14];
    unsigned char input_new;
    const char in = 9;
    string myotherstring("Give input:");
    const string myMessage("Hello");
    bool flag;
    const bool flag1 = 0;
    cout << flag1 <<"\n";
    cout << "Enter number of boys in class: " ;
    cin >> A;
    cout << "Enter number of girls in class: ";
    cin >> B;
    SUM = A+B;
    cout << "Total number of students in the class:" << SUM <<endl;
}
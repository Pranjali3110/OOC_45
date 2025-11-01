#include <iostream>
using namespace std;

class construct {
public:
    float area;
    construct() {
        area = 0;
    }

    construct(int a, int b) {
        area = a * b;
    }

    void disp() {
        cout << area << endl;
    }
};

int main() {
    cout << "Name  : Pranjali Shankar Patil\n";
    cout << "Roll No : 45\n";
    cout << "Class : S.Y. B. CSE\n";

    construct o1;          
    construct o2(10, 20);  
    o1.disp();  
    o2.disp();  
    return 0;
}

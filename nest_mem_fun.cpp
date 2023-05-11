#include <iostream>
using namespace std;

class OuterClass {
public:
    void outerFunction() {
        cout << "This is the outer function." << endl;
        
        innerFunction();  // Calling the nested function
    }
    
    void innerFunction() {
        cout << "This is the inner function." << endl;
    }
};

int main() {
    OuterClass myObject;
    myObject.outerFunction();  // Calling the outer function
    
    return 0;
}


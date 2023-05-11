#include <iostream>
using namespace std;
                   

void character(char = 'a', int = 3);
                                  
int main() {
    int count = 4;
                                  
    cout << "No argument passed: ";
    character(); 
                                      
    cout << "First argument passed: ";
    character('j'); 
                                      
    cout << "Both arguments passed: ";
    character('k', count); 
                                  
    return 0;
}
                                  
void character(char d, int count) {
    for(int i = 1; i <= count; ++i)
    {
        cout << d;
    }
    cout << endl;
}

/* write basic class and output */
#include <iostream>
using namespace std;

class Test1 {
public:
    Test1() {
        cout << "Test1 constructor" << endl;
    }
    ~Test1() {
        cout << "Test1 destructor" << endl;
    }
};

int main() {
    Test1 t1;
    return 0;
}
/* 
Output:

Test1 constructor
Test1 destructor

 */

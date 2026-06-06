#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string q[3]={
        "Never Give Up",
        "Keep Learning",
        "Stay Strong"
    };

    cout<<q[rand()%3];
}

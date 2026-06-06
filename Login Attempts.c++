#include <iostream>
using namespace std;

int main() {

    string pass;

    for(int i=0;i<3;i++) {

        cin>>pass;

        if(pass=="1234") {
            cout<<"Success";
            return 0;
        }
    }

    cout<<"Blocked";
}

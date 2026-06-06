#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    string s = "abcdefghijklmnopqrstuvwxyz0123456789";
    for(int i=0;i<10;i++)
        cout << s[rand()%s.size()];
}

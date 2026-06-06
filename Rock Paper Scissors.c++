#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int user;
    cin >> user;
    int bot = rand()%3+1;
    cout << "Bot: " << bot;
}

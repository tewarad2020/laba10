#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main () {
    srand(time(0));
    string grade[9] = {"A","B+","B","C+","C","D+","D","F","W"};
    cout << "Press Enter 3 times to reveal your future.";
    for (int i=0;i<3;i++) cin.get();
    cout << "You will get " << grade[rand() % 9] << " in this 261102.";
}
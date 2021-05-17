#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    int num01;
    int num02;
    int num03;
    int num04;

    srand(time(NULL));

    num01 = rand () % 9;
    num02 = rand () % 9;
    num03 = rand () % 9;
    num04 = rand () % 9;
    cout << "Pin: " << num01 << num02 << num03 << num04 << endl;
}
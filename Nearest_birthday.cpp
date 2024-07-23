#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int datas[5] = {102, 527, 529, 617, 911};
    int data = 528, com = 0;
    int temp = data;
    for(int i = 0; i < 5; i++){
        com = abs(data - datas[i]);
        if (com < temp) {
            temp = com;
        }
    }
    //cout << temp << endl;
    for(int i = 0; i < 5; i++){
        if(temp == abs(data - datas[i])){
            cout << datas[i] << endl;
        }
    }
}

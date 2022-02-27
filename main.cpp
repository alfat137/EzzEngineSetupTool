#include <iostream>

using namespace std;

int main(){
    string komut;

    system("title EzzEngine Setup Tool");

    cout << "EzzEngine Setup Tool v0\n";

    for(; ;){
        cin >> komut;
        
        system(komut.c_str());
    }
}

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ifstream fin("input.txt");
    int n;
    fin >> n;
    string maxWord;
    for (int i = 0; i < n; i++) {
        string x;
        fin >> x;
        if (x.size() > maxWord.size()) {
            maxWord = x;
        }
    }
    cout << "Max slovo = " << maxWord << endl;
}
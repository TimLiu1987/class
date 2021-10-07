#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
stringstream ss;

vector<int> parseInts(string str) {
    vector<int> poi;
    ss << str;
    int n;
    char c;
    while (!ss.eof())
    {
        ss >> n;
        poi.push_back(n);
        ss >> c;
    }
    return poi;
}

int main(int argc, char* argv[]) {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}

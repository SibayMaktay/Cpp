#include <iostream>
#include <string>

using namespace std;

int main() {
    string t = "Sunny day, birds sing in the forest jjijii khk nhk vyjv.";
    int a = 0;
    string w;
    for (char c : t) {
        if (c == ' ' or c == '.' or c == ',') {
        if (!w.empty()) {
            if (w.length() == 3) {
                cout << w << endl;
                a ++;
            }
        }
        w.clear();
    } else {
        w += c;
    }
    }
  if (!w.empty()) {
    if (w.length() == 3) {
        cout << w << endl;
        a ++;
    }
  }
  cout << a << endl;
  return 0;
}

#include "A/index.h"

int main() {
    map < string, string > a;
    a["script"] = ".py";
    a["index"] = ".h";
    a["main"] = ".cpp";
    for (auto it : a) {
        cout << it.first << it.second << endl;
    }
}

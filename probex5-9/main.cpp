#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    map<string, string> m;
    string s = "";

    m[""] = "apple";
    m["apple"] = "eat";
    m["eat"] = "trap";
    m["trap"] = "pork";
    m["pork"] = "kind";
    m["kind"] = "dog";
    m["dog"] = "given";
    m["given"] = "neighbor";
    m["neighbor"] = "room";
    m["room"] = "money";
    m["money"] = "yellow";
    m["yellow"] = "wonderful";

    map<string, string>::iterator it;
    for (int i = 0; i < m.size(); i++) {
        it = m.find(s);
        cout << it->second << " ";
        s = it->second;
    }

    cout << endl;
}

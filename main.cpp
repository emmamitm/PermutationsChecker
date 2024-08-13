#include <iostream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool arePermutations(vector<string> strs) {
    if(strs.size()==0)
        return false;
    if(strs.size()==1)
        return true;
    string string1 = strs.at(0);
    sort(string1.begin(), string1.end());
    for(int i=1; i< strs.size(); i++){
        sort(strs.at(i).begin(), strs.at(i).end());
        if(strs.at(i) != string1) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> strs = {"abba", "bbaa", "aabb"};
    bool b = arePermutations(strs);
    cout<< b;
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

vector<string> split(string s, string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find(delimiter, pos_start)) != string::npos) {
        token = s.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (token);
    }

    res.push_back (s.substr (pos_start));
    return res;
}

int main(int argc, char **argv) {
	string s = "abra|kadabra|hokus|pokus";
	string delimiter = "|";
	
	vector<string> S = split(s, delimiter);
	for(string sp : S)
        cout << sp << endl;

    return 0;
}
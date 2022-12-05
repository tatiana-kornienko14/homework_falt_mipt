#include <iostream>
#include <string>
#include <vector>
#define vector_string std::vector<std::string>

vector_string split_string(const std::string &s) {
    vector_string v;
    std::string tmp = "";

    for (auto c : s) {
        if (c != ' ') {
            tmp += c;
            continue;
        }

        if (tmp != "") {
            v.push_back(tmp);
            tmp = "";
        }
    }

    if (tmp != "") {
        v.push_back(tmp);
    }

    return v;
}

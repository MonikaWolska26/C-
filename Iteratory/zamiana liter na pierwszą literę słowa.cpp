#include <cctype>
#include <iostream>
#include <string>

std::string::iterator function(std::string::const_iterator b,
                               std::string::const_iterator e,
                               std::string::iterator it) {


for (auto i = b; i < e; ++i)
{
    char pom;
    auto k = i-1;

    if (i == b && isspace(*i))
    {
        *it = *i;
        it++;
    }

    else if ((i == b && isspace(*i) == 0) || (i > b && isspace(*i) == 0 && isspace(*k) != 0))
    {
        *it = *i;
        pom = *it;
        it++;
    }

    else if((i > b && isspace(*i) == 0 && isspace(*k) == 0))
    {
        *it = pom;
        it++;
    }

    else if((i > b && isspace(*i) != 0))
    {
        *it = *i;
        it++;
    }
}

return it;
}

int main() {
    std::string in = "peppermint 1001 bubbles balloon gum", out(100, '*');
    auto e = function(in.cbegin(), in.cend(), out.begin());
    int n = e - out.begin();
    std::string s = out.substr(0, n);
    bool b = (s == "pppppppppp 1111 bbbbbbb bbbbbbb ggg");
    std::cout << std::boolalpha << b << std::endl; }

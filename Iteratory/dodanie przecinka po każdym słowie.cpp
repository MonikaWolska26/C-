#include <cctype>
#include <iostream>
#include <string>

std::string::iterator function(std::string::const_iterator b,
                               std::string::const_iterator e,
                               std::string::iterator it) {


for (auto i = b; i < e; ++i)
{
    if ( i <= (e-2))
    {
        if(isspace(*i) == 0)
        {
            auto k = i+1;
            if(isspace(*k) != 0)
            {
                *it = *i;
                it++;
                *it = ',';
                it++;
            }
            else if (isspace(*k) == 0)
            {
                *it = *i;
                it++;
            }

        }
        else
        {
            *it = *i;
            it++;
        }
    }
    else if(i == (e-1))
    {
        if(isspace(*i) == 0)
        {
            *it = *i;
            it++;
            *it = ',';
            it++;
        }
        else
        {
            *it = *i;
            it++;
        }
    }
}

    return it;
}


int main() {
    std::string in = "peppermint 1001 bubbles balloon gum", out(100, '*');
    auto e = function(in.cbegin(), in.cend(), out.begin());
    int n = e - out.begin();
    std::string s = out.substr(0, n);
    bool b = (s == "peppermint, 1001, bubbles, balloon, gum,");
    std::cout << std::boolalpha << b << std::endl; }

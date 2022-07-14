#include <iostream>
#include <map>
#include <string>
#include <cstdlib>

int main(int argc, char *argv[])
{
    std::string text;
    std::map<std::string, int> tab;
    std::getline (std::cin, text);
    int number = atoi(argv[1]);
    int len = text.length() - number+1;
    std::string phrase;
    int k=0;
    if (text.length() < number)
    {exit;}

    for (int i = 0; i < text.length(); i++)
  	{text[i] = tolower(text[i]);}

    for( int i = 0; i < len; i++)
    {
        std::string phrase = text.substr(i,number);
        if(tab.find(phrase) == tab.end())
        {tab[phrase] = 0;}

        tab[phrase]++;
    }

    for (auto itr = tab.begin(); itr != tab.end(); ++itr)
    {
        if(itr->second > k){k = itr -> second;}
    }
    for (auto itr = tab.begin(); itr != tab.end(); ++itr)
    {
        if(itr->second == k){std::cout << itr->first << std::endl;}
    }

    std::cout << k;
}

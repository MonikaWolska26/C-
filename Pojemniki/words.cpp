#include <iostream>
#include <map>
#include <string>
#include <utility>


int main ()
{
    std::string word;
    std::string test;
    std::map<std::string, int> tab;
    int number = 0;

    while (std::cin >> test)
    {
        word = test;

        if(tab.find(word) == tab.end())
        {tab[word] = 0;}

        tab[word]++;
        number++;
    }

    for (int i = 1; i <= number; i++)
    {
        for (auto itr = tab.begin(); itr != tab.end(); ++itr)
        {
            if (i == itr -> second)
            {
                std::cout << itr -> first << " " << i << std::endl;
            }
        }
    }

}


/*
int i = tab.size();
    std::string tab_1[i];
    int tab_2[i];
    int k = 0;

    for (auto itr = tab.begin(); itr != tab.end(); ++itr)
    {
        tab_1[k] = itr->first;
        tab_2[k] = itr->second;
        k++;
    }

    for (int a = 0; a < number; a++)
    {
        for (int b = 0; b < k; b++)
        {
            if (a == tab_2[b])
            {
                std::cout << tab_1[b] << " " << tab_2[b] << std::endl;
            }
        }
    }
*/

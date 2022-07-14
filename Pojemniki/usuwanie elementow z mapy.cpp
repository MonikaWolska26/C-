#include <iostream>
#include <map>

void function(std::map<int, int> &map, int number)
{
  std::map<int, int> finalmap = std::map<int, int>();

  for (auto pair: map)
  {
      if(pair.first >= number)
      {
          finalmap.insert(pair);
      }
  }

  map = finalmap;
}

int main() {
  std::map<int, int> map{{7, 1}, {3, 8}, {5, 7}, {1, 4}, {4, 5}, {8, 3}};
  function(map, 5);
  for (auto pair : map) {
    std::cout << pair.first << " " << pair.second << std::endl;
  }
}



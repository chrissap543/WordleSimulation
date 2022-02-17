#include "../includes/fileio.hpp"

int main() {
  readFile();
  for (auto &elem : g_wordFrequencies)
    std::cout << elem.first << " " << elem.second << std::endl;
}
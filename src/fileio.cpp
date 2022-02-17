#include "../includes/fileio.hpp"

map<string, long long> g_wordFrequencies;

void readFile() {
  string line;
  ifstream data("dat/unigram_freq.csv");
  getline(data, line); // skip the first line
  for (int i = 0; i < 30000; i++) {
    getline(data, line);
    // split at the comma
    string word = line.substr(0, line.find(','));
    if (word.size() != 5)
      continue;
    long long frequency = stoll(line.substr(line.find(',') + 1));
    g_wordFrequencies.insert(pair<string, long long>(word, frequency));
  }
}
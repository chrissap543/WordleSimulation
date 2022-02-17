#pragma once

#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

extern map<string, long long> g_wordFrequencies;

void readFile();

vector<string> split(const std::string &s);
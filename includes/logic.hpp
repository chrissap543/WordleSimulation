#pragma once

#include <string>

class Decoder {
public:
  Decoder(std::string answer);

  std::string decoded(std::string guess);

private:
  std::string answer_;
};
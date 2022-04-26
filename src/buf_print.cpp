#include "buf_print.hpp"
#include <cstdio>

bufPrint::bufPrint() {
  buffer_.clear();
  buffer_.resize(kBufferSize);
}

void bufPrint::print(const std::string& message) {
  for (char symbol : message) {
    if ((symbol != '\n') && (buffer_.size() < kBufferSize)) {
      buffer_.push_back(symbol);
    } else {
      printf("%s\n", buffer_.c_str());
      buffer_.clear();
    }
  }
}

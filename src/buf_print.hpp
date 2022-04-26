#include <string>

const int kBufferSize = 1024;

class bufPrint {
  private:
    std::string buffer_;
  public:
    bufPrint();
    void print(const std::string& message);
};

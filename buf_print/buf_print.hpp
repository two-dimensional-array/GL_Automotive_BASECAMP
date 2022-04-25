#include <string>

const int KBufferSize = 1024;

class BufPrint
{
private:
    std::string buffer_ = "";
public:
    BufPrint();
    void Print(const std::string& string);
};

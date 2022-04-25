#include "buf_print.hpp"
#include <cstdio>

BufPrint::BufPrint()
{
    buffer_.resize(KBufferSize);
}

void BufPrint::Print(const std::string& string)
{
    for (char ch : string)
    {
        if ((ch != '\n') && (buffer_.size() < KBufferSize))
        {
            buffer_.push_back(ch);
        }
        else
        {
            printf("%s\n", buffer_.c_str());
            buffer_.clear();
        }
    }
}

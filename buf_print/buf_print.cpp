#include "buf_print.hpp"
#include <cstdio>
#include <cstring>

BufPrint::BufPrint()
{
    buffer_ = new char[KBufferSize];
    memset(buffer_, '\0', (KBufferSize * sizeof(char)));
    counter_ = 0;
}

void BufPrint::Print(const char* string)
{
    while (*string != '\0')
    {
        if ((*string != '\n') && (counter_ < (KBufferSize - 1)))
        {
            buffer_[counter_++] = *string;
        }
        else
        {
            printf("%s\n", buffer_);
            memset(buffer_, '\0', (counter_ * sizeof(char)));
        }
        string++;
    }    
}

BufPrint::~BufPrint()
{
    delete[] buffer_;
}

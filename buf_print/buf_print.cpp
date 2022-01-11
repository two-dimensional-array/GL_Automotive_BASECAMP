#include "buf_print.hpp"
#include <cstdio>

BufPrint::BufPrint()
{
    this->buffer = new char[PRINT_BUFFER_SIZE + 1];
    this->buffer[PRINT_BUFFER_SIZE] = '\0';
    this->counter = 0;
}

void BufPrint::Print_Buffer()
{
    printf("%s\n", this->buffer);
}

void BufPrint::Print(const char* string)
{
    while (*string != '\0')
    {
        if ((*string != '\n') && (counter < PRINT_BUFFER_SIZE))
        {
            this->buffer[this->counter++] = *string;
        }
        else
        {
            this->Print_Buffer();
            this->Flush();
        }
        string++;
    }    
}

void BufPrint::Flush()
{
    for(this->counter; this->counter >= 0; this->counter--)
    {
        this->buffer[this->counter] = '\0';
    }
}

BufPrint::~BufPrint()
{
    delete buffer;
}

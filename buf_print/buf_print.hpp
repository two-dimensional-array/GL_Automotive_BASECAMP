#define PRINT_BUFFER_SIZE 1024

class BufPrint
{
private:
    char* buffer;
    int counter;
    void Write_Char_to_Buffer(char symbol);
    void Print_Buffer();
public:
    BufPrint();
    void Print(const char* string);
    void Flush();
    ~BufPrint();
};

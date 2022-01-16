const int KBufferSize = 1024;

class BufPrint
{
private:
    char* buffer_;
    int counter_;
public:
    BufPrint();
    void Print(const char* string);
    ~BufPrint();
};

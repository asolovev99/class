#include <iostream>
class String
{
    char *data;
    int lenght;
    public:
        String (){
            data = new char[1];
            data[0] ='\0';
            lenght = 0;
        }
        String (char* copy){
            lenght = 1;
            data = new char[2];
            data[0] = *copy;
            data[1] = '\0';
        }
        String (String& copy)
        {
            data = copy.data;
            lenght = copy.lenght;
        }
        ~String()
        {
            delete data;
        }
        String& operator=(String &orig)
        {
            data = orig.data;
            lenght = orig.lenght;
            return *this;
        }
        operator const char *() const {
            return (const char *)data;
        }
};
int main()
{
    char *copy;
    copy = new char[10];
    char *data;
    String a;
    char b;
    const char *god;
    copy[2] = b;
    copy = data;
    String f(copy);
    String g(a);
    delete a;
    g = f;
    god = f;
    return 0;
}
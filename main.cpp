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
            int i;
            lenght = sizeof (*copy) / sizeof (copy[0]);
            data = new char[sizeof copy / sizeof copy[0]+2];
            for (i = 0; i <= sizeof copy / sizeof copy[0]; i++){

            }
        }
        String (String& copy)
        {
            data = copy.data;
            lenght = copy.lenght;
        }
        ~String()
        {
            delete data;
            delete lenght;
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
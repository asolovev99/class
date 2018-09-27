#include <iostream>
using namespace std;
class String
{
    char *data;
    int lenght;
    public:
        String (){
            data = new char;
            *data ='\0';
            lenght = 0;
		//	printf("made empty\n");
        }
        String (char* copy){
			int i;
			lenght = 0;
			while (*(copy + lenght) != '\0'){
				lenght = lenght + 1;
			}
			data = new char[lenght+1];
			for (i = 0; i < lenght + 1; i++){
				data[i] = copy[i];
			}
		//	printf("made char*\n");
        }
        String (String& copy)
        {
			int i;
            lenght = copy.lenght;
			data = new char[lenght + 1];
			for (i = 0; i < lenght + 1; i++){
				data[i] = copy.data[i];
			}
		//	printf("copy\n");
        }
        ~String()
        {
            delete[] data;
		//	printf("delete\n");
        }
        String& operator=(String &orig)
        {
			int i;
            lenght = orig.lenght;
			data = new char[lenght + 1];
			for (i = 0; i < lenght + 1; i++){
				data[i] = orig.data[i];
			}
		//	printf("=\n");
            return *this;
        }
        operator const char *() const {
		//	printf("change\n");
            return (const char *)data;
        }
};
int main()
{
	String e;
	std::cout << e<< "\n";
	char *copy = "1244";
	const char * change;
	String test(copy);
	std::cout << copy << "\n";	
	String copy1(test);
	std::cout << copy1 << "\n";
	String c(copy1);	
	c = copy1;
	std::cout << c << "\n";
	change = copy1;
	std::cout << change << "\n";
	system("pause");
    return 0;
}
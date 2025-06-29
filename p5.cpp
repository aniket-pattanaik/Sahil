#include <iostream>
using namespace std:
class string
{
    char* str;
    public:
    string()
    {
        str = new char[1];
        str[0] = '\0';
    }
    string(const char* s)
    {
        str = new char[strlen(s) + 1];
        strcpy(str,s);
    }
    string()
    {
        ~string()
        {
        delete[] str;
        }
        string& operator=(const String& s)
        {
            if(this != &s)
            {
                delete[] str;
                str = new char[strlen(s.str) + 1];
                strcpy(str,s.str);
            }
            return *this;
        }
        String operator+(const String& s)
        {
            String temp;
            delete[] temp.str;
            temp.str = new char[strlen(str) + strlen(s.str) + 1];
            strcpy(temp.str,str);
            strcat(temp.str,s,str);
            return temp;
        }
        void display() const
        {
            cout << str << endl;
        }
    }
};
int main()
{
    String s1;
    String s2("well done!");
    String s3("you did it!");
    cout << "String s1:";
    s1.display();
    cout << "String s2:";
    s2.display();
    cout << "String s3";
    s3.display();
    String s4 = s2 + s3;
    cout << "Concatenated String s4 = s2 + s3:";
    s4.display();
    s1 = s4;
    cout << "After s1 = s4,String s1:";
    s1.display();
    return 0;
}

#include <iostream>
#include <string>

class Telephone {
public:
    Telephone()
    {
        getline(std::cin,str);
        show();
    }
    void show()
    {
        for (int i = 0; i < str.length(); i++)
        {
            std::cout << (str[i] - 'A' - str[i] / 'S' - str[i] / 'Z') / 3 + 2;
        }
    }
private:
    std::string str;
};
int main() 
{
    Telephone t;
    return 0;
}
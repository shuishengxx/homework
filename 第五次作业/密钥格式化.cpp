#include <vector>
#include <iostream>
#include <string>

class Reset {
public:
    Reset()
    {
        getline(std::cin,str);
        for (int i = 0; i <= str.length(); i++)
        {
            if (str[i] != '-')
            {
                if (str[i] <= 'z' && str[i] >= 'a')
                    str[i] += 'A' - 'a';
                restr.push_back(str[i]);
            }
        }
        std::cin >> k;
        show();
    }
    void show()
    {
        std::vector<char>::iterator it = restr.begin();
        n = restr.size() - 1;
        if (n % k != 0)
        {
            for (; it < restr.begin() + n % k; it++)
            {
                std::cout << *it;
            }
            std::cout << '-';
        }
        while(1)
        {
            for (int j = 1; j <= k; it++, j++)
            {
                std::cout << *it;
            }
            if (it == restr.end() - 1)
                break;
            std::cout << '-';
        }
    }
private:
    int n = 0,k;
    std::string str;
    std::vector<char> restr;
};
int main() 
{
    Reset t;
    return 0;
}

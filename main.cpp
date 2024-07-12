#include <iostream>

int simple_string_hash(std::string &str)
{
  int hash = 0;

    for(int i = 0; i < str.length(); i++)
    {
        hash += static_cast<int>(str[i]);
    }
    return hash;
}



int main()
{
std::string str;
while(true)
{
    std::cout << "Enter str\n";
    std::cin >> str;
    std::cout << "Your hash " << str << " = " << simple_string_hash(str) << std::endl;
    if(str == "exit")
    {
        break;
    }
}

    return 0;
}
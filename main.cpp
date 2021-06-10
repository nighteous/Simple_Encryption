#include <iostream>
#include <cstdlib>
#include <string>
#define r '\n'
int main()
{
    int n;
    std::string str_org, str_en="";
    
    std::getline(std::cin, str_org);

    int length = str_org.length();

    srand(time(0));
    
    for (int i=0 ; i<length ; i++)
    {
        n = rand()%15;
    	str_en += char(int(str_org[i]) + n);
    	char a = n+60;
    	str_en += a;
    }

    std::cout << str_en << r;

    std::string str_de = "";

    int length1 = str_en.length();
    
    for (int j=1 ; j<length1 ; j+=2)
    {
    	str_de += char(int(str_en[j-1]) - (int(str_en[j])-60));
    }

    std::cout << str_de << r;
    
    return 0;
}

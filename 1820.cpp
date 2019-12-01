#include <string>
#include <vector>
#include <iostream>

void main()
{
    int a, radix;
    std::vector<std::string> results;

    while (!std::cin.eof())
    {
        std::cin >> a >> radix;
        // std::cout << a << " " << radix << std::endl;
        if (std::cin.fail())
        {
            continue;
        }

        std::string res;  
        do
        {
            int divided; 
            int remain; 
            if (a >= 0)
            {
                divided = a / radix;
                remain = a - divided * radix;
            }
            else
            {
                divided = a / radix;
                remain = a - divided * radix;
                if (remain < 0)
                {
                    divided++;
                    remain = remain - radix;
                }
            }
            
            char c; 
            if (remain >= 10)
            {
                c = 'A' + remain - 10;
            } 
            else
            {
                c = '0' + remain;
            }
            
            res.push_back(c);
            a = divided;
        }
        while (a != 0);

        std::reverse(res.begin(), res.end());
        results.push_back(res);
    }

    for (std::vector<std::string>::iterator it = results.begin(); it != results.end(); it++)
    {
        std::cout << *it << std::endl;
    }

}
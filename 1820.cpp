#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int a, radix;
    vector<string> results;

    while (!cin.eof())
    {
        cin >> a >> radix;
        // cout << a << " " << radix << endl;
        if (cin.fail())
        {
            continue;
        }

        string res;  
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

        reverse(res.begin(), res.end());
        results.push_back(res);
    }

    for (vector<string>::iterator it = results.begin(); it != results.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;
int common_char(string s1, string s2);

main()
{
    cout << "Enter string 1:";
    string a;
    string b;
    cin >> a;
    cout << "Enter string 2:";
    cin >> b;
    int out = common_char(a, b);
    cout << out;
}
int common_char(string s1, string s2)
{
    int i = 0;
    int count = 0;
    while (s1[i] != '\0')
    {
        int j = 0;
        while (s2[j] != '\0')
        {
            if (s1[i] == s2[j])
            {
                s2[j] = -1;
                count = count + 1;
                break;
            }
            j++;
        }
        i++;
    }
    return count;
}

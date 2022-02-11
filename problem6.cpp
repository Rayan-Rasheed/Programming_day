#include <iostream>
using namespace std;
int how_long();
string A[] = {"blue", "blue", "blue", "red", "red", "red"};
main()
{

    int time = how_long();
    cout << "Total time:" << time;
}
int how_long()
{
    int count = 0;
    int length = sizeof(A) / sizeof(A[0]);
    int colour_time = length * 2;
    for (int i = 0; i < length - 1; i++)
    {
        if (A[i] != A[i + 1])
        {
            count = count + 1;
        }
    }
    int switch_time = count * 1;
    int total_time = colour_time + switch_time;
    return total_time;
}
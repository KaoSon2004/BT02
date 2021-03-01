#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >>n;
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<=(i+11);j++)
        {
            if (j>10)

                cout <<j-10<<" ";

            else
                cout <<j<<" ";

        }
        cout <<endl;
    }
    return 0;
}

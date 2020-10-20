#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int count;
    vector<int> oddV;
    vector<int> evenV;
    vector<int> numbers;
    cin >> count;
    for(auto i = 0; i<count; i++)
    {
        int temp;
        cin >> temp;
        if(temp%2==0)
            evenV.push_back(temp);
        else
            oddV.push_back(temp);
        numbers.push_back(temp);
        if(i>=2&&oddV.size()==1)
        {
            cout << distance(numbers.begin(), find(numbers.begin(),numbers.end(),oddV.at(0))) + 1 << endl;
            break;
        }
        else if(i>=2&&evenV.size()==1)
        {
            cout << distance(numbers.begin(), find(numbers.begin(),numbers.end(),evenV.at(0))) + 1 << endl;
            break;
        }
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{

    int arr[]{40, 50, 60, 70, 80, 90, 100};
    for (auto element : arr)
    {
        cout << element << " ";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    for (vector<int>::iterator it = v.begin();
         it != v.end(); it++)
    {
        cout << *it << "\t";
    }
    return 0;
}

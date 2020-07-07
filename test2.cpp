#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <array>
#include <deque>
#include <stack>
#include <forward_list>
#include <list>
using namespace std;

int main(void)
{
    // ifstream in("./s.txt", ifstream::in);
    // deque<int> a;
    // forward_list<int> aa;
    // array<int, 5> vf{1, 2, 3, 4, 5};
    // for (auto i : vf)
    // {
    //     cout << i << endl;
    // }
    // auto op = aa.begin();
    // op--;

    // list<int> as;
    // auto op = as.begin() - as.end();

    // list<int> ass;
    // vector<double> x(ass.begin(), ass.end());
    // // ass.assign();

    // string sd;
    // deque<string> wq;
    // wq.push_back(sd);
    // list<string> la{"1", "2", "3"};

    // for (auto i : la)
    // {
    //     cout << i << endl;
    // }
    // stack<string,vector<string>> s{wq};
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    auto p1 = a;
    auto p2 = *(a + 1)[1];
    cout << p2 << endl;
    cout << (a + 1) << endl;
    return 0;
}
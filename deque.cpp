#include <iostream>
#include <deque>

using namespace std;

void showdq(deque <int> g)
{
    deque <int> :: iterator itr;
    for(itr = g.begin(); itr < g.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << "\n";
}

int main()
{

    deque <int> gquiz;
    gquiz.push_back(10);
    gquiz.push_front(20);
    gquiz.push_back(30);
    gquiz.push_front(15);
    cout << "The deque gquiz is :";
    showdq(gquiz);
    cout << "\n size" << gquiz.size();
    cout << "\n" << gquiz.max_size();
    cout << "\n" << gquiz.at(2);
    cout << "\n" << gquiz.front();
    cout << "\n" << gquiz.back();
    gquiz.pop_front();
    showdq(gquiz);
    gquiz.pop_back();
    showdq(gquiz);

    return 0;
}

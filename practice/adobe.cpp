#include <iostream>
#include <queue>

using namespace std;

class pair_
{
public:
    int age;
    int wt;

    pair_(int age, int wt)
    {
        this->age = age;
        this->wt = wt;
    }

    bool operator < (pair_ const &p1) const
    {
        return this->age < p1.age;
    }
};

int main()
{
    priority_queue<pair_> pq;

    pair_ p1(10, 10);
    pq.push(p1);

    pair_ p2(2, 16);
    pq.push(p2);

    pair_ p3(5, 560);
    pq.push(p3);

    pair_ p4(20, 2340);
    pq.push(p4);

    pair_ p5(-8, 340);
    pq.push(p5);

    while (pq.size() != 0)
    {
        cout << pq.top().wt << " " <<  pq.top().age;
        pq.pop();
        cout<<endl;
    }

    return 0;
}
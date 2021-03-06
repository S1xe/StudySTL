#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>
#include"../print.hpp"
using namespace std;

class IntSequence{
private:
    int value;
public:
    IntSequence(int initialValue): value(initialValue) {}
    int operator() (){
        return ++value;
    }
};


int main()
{
    list<int> coll;

    generate_n(back_inserter(coll),9,IntSequence(1));
    print(coll);

    generate(next(coll.begin()), prev(coll.end()), IntSequence(42));

    print(coll);

    return 0;
}

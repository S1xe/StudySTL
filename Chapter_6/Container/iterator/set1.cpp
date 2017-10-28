#include<set>
#include<iostream>

int main()
{
	typedef std::set<int> IntSet;

	IntSet coll;
	coll.insert(3);
	coll.insert(4);
	coll.insert(5);
	coll.insert(10);
	coll.insert(1);

	IntSet::const_iterator pos;
	for(pos = coll.begin(); pos!=coll.end(); ++pos)
	{
		std::cout << *pos << ' ';
	}
	std::cout << std::endl;

	return 0;
}

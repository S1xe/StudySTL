#include<unordered_set>
#include<iostream>

int main()
{
	std::unordered_multiset<int> coll;

	coll.insert({1,3,5,7,9,11,13,15});
	for(auto elem : coll)
	{
		std::cout << elem << ' ';
	}

	std::cout << std::endl;

	coll.insert(25);
	for(auto elem : coll){
		std::cout << elem << ' ';
	}
	std::cout << std::endl;

	return 0;
}

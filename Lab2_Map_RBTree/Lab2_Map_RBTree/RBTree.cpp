#include "RBTree.h"
#include "List.h"

	int main()
	{
		Map<int, int>MapInteger;
		cout << "entering 3 elements"<<endl;
		cout << "4,5" << endl;
		cout << "1,9" << endl;
		cout << "62,2" << endl;
		MapInteger.insert(4, 5);
		MapInteger.insert(1, 9);
		MapInteger.insert(62, 2);
		cout <<"amount of nodes: "<< MapInteger.get_size()<<endl;
		cout << "keys: " << MapInteger.get_keys() << endl;
		cout << "values: " << MapInteger.get_values() << endl;
		cout << "trying to remove 1 element (key = 2): "<<endl;
		MapInteger.remove(2);
		cout << "amount of nodes after removing: "<< MapInteger.get_size()<<endl;
		cout << "keys: " << MapInteger.get_keys() << endl;
		cout << "values: " << MapInteger.get_values() << endl;
		MapInteger.clear();
		cout << "size after clear: " << MapInteger.get_size() << endl;
		system("pause");
	};



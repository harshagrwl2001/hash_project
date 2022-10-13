#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
#ifndef HASH_H
#define HASH_H

class Hash
{
	private:
		static const int tableSize=10;
	
		struct item{
		
			string name;
			string drink;
			item* next;
			public:
			item(string name,string drink){
				this->name=name;
				this->drink=drink;
				next=NULL;
			}
		};
		item *HashTable[tableSize];
	
	public:
			Hash();
		int HashFun(string key);
		void AddItem(string name,string drink);
		int NumberOfItemInIndex(int index);
		void PrintTable();
		void PrintItemsInIndex(int index);
		void SearchDrink(string name);
		void RemoveItem(string name);
		int size();
};
	static int totalelements=0;
#endif

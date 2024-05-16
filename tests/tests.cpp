#include <gtest/gtest.h>
#include "functions.cpp"
#include <stdexcept>
#include <iostream>

using namespace hash_table;
using namespace std;

TEST(UnorderedMapTest, HashTableInsert) {
	UnorderedMap <char, int> a;
	a.insert('N', 15);
	a.print();
}

TEST(UnorderedMapTest, HashTableInsert2) {
	UnorderedMap <int, int> a(10);
	a.insert(1, 15);
	a.insert(1, 9);
	a.print();
}

TEST(UnorderedMapTest, HashTableSearch) {
	UnorderedMap <char, int> a;
	a.insert('N', 15);
	int res = *a.search('N');
	EXPECT_EQ(res, 15);
}

TEST(UnorderedMapTest, HashTableInsertOrAssign) {
	UnorderedMap <char, int> a;
	a.insert('N', 15);
	a.insert('M', 1);
	a.print();
	a.insert_or_assign('X', 14);
	cout << "------------" << endl;
	a.print();
}

TEST(UnorderedMapTest, HashTableContains) {
	UnorderedMap <char, int> a;
	a.insert('N', 15);
	a.insert('M', 14);
	a.insert('A', 1);
	EXPECT_TRUE(a.contains(1));
}

TEST(UnorderedMapTest, HashTableSize) {
	UnorderedMap<int, int> a(10);
	cout << a.size() << endl;
}

TEST(UnorderedMapTest, HashTableErase) {
	UnorderedMap<int, int> a;
	a.insert(1, 1);
	a.insert(2, 148);
	a.insert(3, -5);
	a.insert(4, 15);
	a.print();
	a.erase(2);
	cout << "------------" << endl;
	a.print();
}

TEST(UnorderedMapTest, CountSameNumbers) {
	vector<int> arr{ 1, 2, 3, 3, 3, 4, 5, 6 };
	int a = CountSame(arr);
	cout << a << endl;
}
#pragma once
#pragma once
#include <iostream>

using namespace std;

template <class K, class V>

struct El
{
	K key;
	V value;
	int index;
};

template <class K, class V>

class Map
{
	El<K, V> el[100];
	int nr_el, u;

public:
	Map()
	{
		this->nr_el = 0;
		this->u = 0;
	}

	El<K, V>* begin();
	El<K, V>* end();
	V& operator[](K);

	static void Set(K, V);
	/*bool Get(const K&, V& value);
	int Count();
	void Clear();
	bool Delete(const& K);
	bool Includes(const Map<K, V>&);*/
};

template <class K, class V>

El<K, V>* Map<K, V>::begin()
{
	return &(el[0]);
}

template <class K, class V>

El<K, V>* Map<K, V>::end()
{
	return &(el[this->nr_el]);
}

template <class K, class V>

V& Map<K, V>:: operator[](K key)
{
	for (int i = 0; i < el[this->nr_el].index; i++)
	{
		if (el[i].key == key)
		{
			return el[i].value;
			this->nr_el++;
		}
	}

	this->nr_el++;
	this->el[nr_el - 1].key = key;
	this->el[nr_el - 1].index = this->nr_el - 1;
	return el[this->nr_el - 1].value;
}

template <class K, class V>

static void Map<K, V>::Set(K key, V value)
{
	for (int i = 0; i < el[nr_el].index; i++)
	{
		if (el[i].key == key)
			el[i].key = value;
	}
}
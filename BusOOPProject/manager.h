#pragma once
#include"main.h"
#include"bus.h"

class Manager {
public:
	Bus find_bus_with_first_min_price(Bus *buses, int size) {
		Bus min = buses[0];

		for (int i = 1; i < size; i++)
		{
			if (min.price / min.capacity > buses[i].price / buses[i].capacity) {
				min = buses[i];
			}
		}
		return min;
	}
};
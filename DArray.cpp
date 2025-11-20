#include "Darray.h"
#include <iostream>

DArray::DArray()
{
	capacity = 50;
	a = new int[capacity];
	numOfElements = 0;
}
DArray::DArray(int newCapacity)
{
	capacity = newCapacity;
	a = new int[capacity];
	numOfElements = 0;
}
DArray::DArray(const DArray& other)
{
	capacity = other.capacity;
	numOfElements = other.numOfElements;

	a = new int[capacity];

	if (a == nullptr)
	{
		std::cout << "Error: Memory allocation failed DArray copy constructor.\n";
		exit(1);

	}
	for (int i = 0; i < numOfElements; i++)
	{
		a[i] = other.a[i];
	}
}
DArray& DArray::operator=(const DArray& other)
{
	if (this == &other)
	{
		return *this;
	}

	delete[] a;
	a = nullptr;

	capacity = other.capacity;
	numOfElements = other.numOfElements;

	a = new int[capacity];

	if (a == nullptr)
	{
		std::cout << "Error: Memory Allocation failed in DArray copy assingment operator. \n";
		exit(1);
	}
	for (int i = 0; i < numOfElements; i++)
	{
		a[i] = other.a[i];
	}


	return *this;
}
DArray::~DArray()
{
	delete[] a;
	a = nullptr;
}

void DArray::addElement(int newElement)
{
	a[numOfElements] = newElement;
	numOfElements++;
}
int DArray::getNumOfElements() const
{
	return numOfElements;
}
int DArray::getCapacity() const
{
	return capacity;
}
void DArray::printArray() const
{
	for (int i = 0; i < numOfElements; i++)
	{
		std::cout << a[i] << " " << std::endl;
	}
}
void DArray::replaceElementAt(int newElement, int indx) const
{
	a[indx] = newElement;
}
bool DArray::compareArrays(const DArray& otherArray) const
{
	for (int i = 0; i < numOfElements; i++)
	{
		if (a[i] != otherArray.a[i])
		{
			return false;
		}
	}

	return true;
}
void DArray::changeCapacity(int newCapacity)
{
	capacity = newCapacity;
}

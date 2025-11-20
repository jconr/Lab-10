#ifndef DARRAY_H
#define DARRAY_H

class DArray
{
private:
	int* a;
	int capacity;
	int numOfElements;

public:
	DArray();
	DArray(int newCapacity);
	DArray(const DArray& other);
	DArray& operator=(const DArray& other);
	~DArray();

	void addElement(int newElement);
	int getNumOfElements() const;
	int getCapacity() const;
	void printArray() const;
	void replaceElementAt(int newElement, int idx) const;
	bool compareArrays(const DArray& otherArray) const;
	void changeCapacity(int newCapacity);

};

#endif

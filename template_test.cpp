#include <iostream>
using namespace std;
template <class Type>
class dataList{
public:
	dataList(int size = 10):arraySize(size),Element(new dataList[size]){}
	~dataList(){delete [] Element;}
	void sort() const;
	friend ostream &operator <<(ostream &out, const dataList<Type> &outList);
	friend istream &operator >> (istream &in, const dataList<Type> &inList);
private:
	Type *Element;
	int arraySize;
	int maxKey(const int low, const int high);
	void swap(const int mark1, const int mark2);

};

template <class Type>
void dataList <Type>::swap(const int mark1, const int mark2)
{
	Type temp = Element[mark1];
	Element[mark1] = Element[mark2];
	Element[mark2] = Element[mark1];
}

template <class Type>
int dataList<Type>::maxKey(const int low,const int high)
{
	int max = low;
	for(int i = low + 1; i < high; i++)
		if(Element[max] < Element[i])
			max = i;
	return max;
}

template< class Type >
ostream &operater << (ostream &out, const dataList<Type> &outList)
{
	out << " Srray Content: \n";
	for(int i = 0; i < outList.size; i++)
		out << Element[i] << ' ';
	out << endl;
	out << "array current size: " << outList.arraySize << endl;
	return out;
}

template <class Type>
istream &operator >> (istream &in, const dataList<Type> &inList)
{

}

template < class Type >
void dataList <Type> ::sort()
{

}
int main(int argc, char **argv) {

	return 0;
}


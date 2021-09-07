
// C++ program to flatten a
// Vector of Vectors or 2D Vector

#include <iostream>
#include <vector>
using namespace std;

// Class to flatten the 2d vector
class FlattenVector {

public:
	int n;

	vector<vector<int>::iterator> iStart;
	vector<vector<int>::iterator> iEnd;
	int currIndex;

	// Store ending and starting iterators.
	FlattenVector(vector<vector<int> >& v)
	{

		// Get the number
		// of rows in 2d vector
		n = v.size();
		currIndex = 0;
		iStart.resize(n);
		iEnd.resize(n);

		for (int i = 0; i < n; i++) {
			iStart[i] = v[i].begin();
			iEnd[i] = v[i].end();
		}
	}

	// Returns true if any element is left.
	bool hasNext()
	{
		for (int i = 0; i < n; i++) {
			if (iStart[i] != iEnd[i])
				return true;
		}
		return false;
	}

	int next()
	{
		// Vector at currIndex is printed,
		// increment currIndex.
		if (iStart[currIndex]
			== iEnd[currIndex]) {
			currIndex++;
			return next();
		}

		// Increment iterator
		// and return the value.
		else
			return *iStart[currIndex]++;
	}
};

// Driver code
int main()
{
	vector<vector<int> >
		v{ { 1, 7, 4},
		   { 2, 3, 5 },
		   { 9, 8, 6}};
	FlattenVector iter(v);

	while (iter.hasNext())
		cout << iter.next() << " ";

	return 0;
}

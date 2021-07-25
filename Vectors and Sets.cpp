Vectors and Sets
// Trying out various operations in vectors and sets.
#include <bits/stdc++.h>
using namespace std;
int main() {
	set<int> s;
	s.insert(1);
	s.insert(4);
	s.insert(2);
	s.insert(3);
	s.insert(5);
	s.insert(2);
	bool b=binary_search(s.begin(),s.end(),3);
	cout<<b<<endl;
	for(int x : s)
	{
	    cout<<x<<" ";
	}
	cout<<endl;
	vector<int> m;
	m.push_back(1);
	m.push_back(2);
	m.push_back(3);
	m.push_back(4);
	m.push_back(5);
	m.push_back(6);
	bool c=binary_search(m.begin(),m.end(),5);
	cout<<c<<endl;
	for(int x : m)
	{
	    cout<<x<<" ";
	}
	cout<<endl<<m[2]<<endl;
	vector<int>::iterator it=upper_bound(m.begin(),m.end(),3); // or use auto it 
	cout<<*it<<endl;
	return 0;
}
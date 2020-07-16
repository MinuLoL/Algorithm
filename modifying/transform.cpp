#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Func(int n)
{
	return n+5;
}

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	cout<<"v: ";
	for(vector<int>::size_type i=0;i<v.size();++i)
		cout<<v[i]<<" ";
	cout<<endl;
	
	vector<int>::iterator iter_end;
	
	iter_end=transform(v.begin(),v.end(),v.begin(),Func);
	cout<<"v: ";
	for(vector<int>::size_type i=0;i<v.size();++i)
		cout<<v[i]<<" ";
	cout<<endl;
	cout<<"iter_end-1: "<<*(iter_end-1)<<endl;
	return 0;
}

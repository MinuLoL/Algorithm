#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(20);
	
	cout<<"[v원본]: ";
	for(vector<int>::size_type i=0;i<v.size();++i)
		cout<<v[i]<<" ";
	cout<<endl;
	
	sort(v.begin(),v.end());
	cout<<"[v:less정렬]:";
	for(vector<int>::size_type i=0;i<v.size();++i)
		cout<<v[i]<<" ";
	cout<<endl;
	
	cout<<"비교 less찾기: "<<binary_search(v.begin(),v.end(),20,less<int>())<<endl;
	
	sort(v.begin(),v.end(),greater<int>());
	cout<<"[v:greater정렬]: ";
	for(vector<int>::size_type i=0;i<v.size();++i)
		cout<<v[i]<<" ";
	cout<<endl;
	
	cout<<"비교 greater찾기: "<<binary_search(v.begin(),v.end(),20,greater<int>())<<endl;
	
	return 0;
	
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class student
{
        public:
        student(int x):marks(x){}
        int marks;
};

void print( vector<student> &v )
{
  for( auto i : v )
    cout<<i.marks<<"  ";
  cout<<endl;
}

int main()
{
  vector<student> v;
  int a=5;
  v.push_back (student (70));
  v.push_back (student (10));
  v.push_back (student (36));
  v.push_back (student (90));
  v.push_back (student (0));
  print( v );
  vector<student>::iterator it = remove_if( v.begin(), v.end(), [&a](student x){
	a++;
	cout<<a<<endl;
	return (x.marks<35);
  } );
  v.erase( it, v.end() );
  print( v );
}

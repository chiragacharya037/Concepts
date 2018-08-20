#include <algorithm>
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
const int name_max=30;

struct member
{
	char name[name_max];
	int age;
	char sex[1];
};

bool MatchMember(member m1, member m2)
{
	return strcmp(m1.name, m2.name) == 0 &&
			m1.age == m2.age &&
			m1.sex[0] == m2.sex[0];
}

int main(int argc, char* argv[])
{
	member memb[6]={{"an", 6,'m'},{"ben", 60,'f'},{"carl", 26,'f'},{"dan", 36,'m'},{"el", 8,'m'},{"findy", 77,'f'}};
	
	vector<member> vec(memb,memb+6);
	
	for(vector<member>::const_iterator it=vec.begin(); it!=vec.end(); it++)
	{
		cout<<(*it).name<<"\t"<<(*it).age<<"\t"<< (*it).sex[0] << "\n";
	}
	
	member mi={"ben", 60,'f'};
	vector<member> searchlist;
	searchlist.push_back(mi);
	vector<member>::iterator flag = std::search(vec.begin(),vec.end(),searchlist.begin(),searchlist.end(),MatchMember);
	
	if(flag != vec.end())
	{
		cout << "member found" << endl;
	}
	else
	{
		cout << "member not found" << endl;
	}
	
	return 0;
}

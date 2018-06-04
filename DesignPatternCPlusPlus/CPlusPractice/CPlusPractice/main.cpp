//#include <iostream>
//#include <string>
//#include <vector>
//#include <iterator>
//
//using std::string;
//using std::cout;
//using std::endl;
//using namespace std;
//
//
//
//int main(){
//	/*string a = "hello";
//	string b = "world";
//	string c = a + ' ' + b;
//	cout<<c<<endl;*/
//	std::vector<int> a;
//	a.push_back(1);
//	a.push_back(2);
//	copy(a.begin(), a.end(), ostream_iterator<int>(cout, " ")); 
//	cout<<endl;
//	for(int i = 0; i < a.size(); ++i){
//		cout<<a[i]<<endl;
//	}
//}
//

//***************************************************************
//**
//**				map related
//**
//****************************************************************

//#include <map>
//#include <string>
//#include <iostream>
//
//using namespace std;
//int main(){
//
//	map<string, string> city; //= {{1, "shanghai"},{2, "beijng"},{3,"shenzhen"}};
//
//	pair<string, string> p3("SH", "shanghai");
//	pair<string, string> p4("SZ", "shenzhen");
//	pair<string, string> p5("BJ", "beijing");
//	city.insert(p3);
//	city.insert(p4);
//	city.insert(p5);
//	cout<<city["SH"]<<endl;
//	cout<<city["BJ"]<<endl;
//	
//	return 0;
//}

//#include <iostream>
//#include <list>
//using namespace std;
//
//int main(){
//	
//	list<int> l1;
//	l1.push_front(1);
//	l1.push_back(5);
//	l1.insert(l1.begin(),3);
//	l1.insert(l1.end(), 2);
//	list<int>::iterator iter = l1.begin();
//	for(; iter != l1.end();iter++){
//		cout<< *iter<<" ";
//	}
//	cout<<endl;
//}


#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void printElement(int& elem){
	cout<<elem;
}

int main(){
	int ia[] = {0,1,2,3,4,5};

	for_each(ia,ia + sizeof(ia)/sizeof(int),printElement);
	cout<<endl;
	return 0;
}
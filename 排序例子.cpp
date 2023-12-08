//#include<iostream>
//#include<list>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//class person {
//public:
//	person(string name,int age,int height) {
//		m_name = name;
//		m_age = age;
//		m_height = height;
//	}
//	string m_name;
//	int m_age;
//	int m_height;
//};
//bool comp( person &p1,person &p2) {
//	//按年龄 从小到大
//	if (p1.m_age == p2.m_age) {
//		return p1.m_height < p2.m_height;
//	}
//	return p1.m_age < p2.m_age;
//}
//void printfperson(list<person>& l) {
//	for (list<person>::iterator it = l.begin(); it != l.end(); it++) {
//		cout << (*it).m_age << " " << it->m_height << " " << it->m_name << endl;
//	}
//}
//void text1() {
//	list<person> L;
//	person p1("a", 35, 175);
//	person p2("b", 45, 174);
//	person p3("c", 32, 190);
//	person p4("d", 37, 160);
//	person p5("e", 35, 200);
//	L.push_back(p1);
//	L.push_back(p2);
//	L.push_back(p3);
//	L.push_back(p4);
//	L.push_back(p5);
//	for (list<person>::iterator it = L.begin(); it != L.end(); it++) {
//		cout << (*it).m_name << "  " << it->m_age << "  "
//			<< it->m_height << endl;
//	}
//	L.sort(comp);
//	printfperson(L);
//
//}
//int main() {
//	text1();
//}
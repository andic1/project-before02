//#include <iostream>
//#include<string>
//#include<vector>
//#include<deque>
//#include<algorithm>
//using namespace std;
//
////残缺版
//class person {
//public:
//	string m_name;
//	int m_score;
//
//	person(string name, int score) {
//		m_name = name;
//		m_score = score;
//	}
//	
//};
//void createperson(vector<person>& v) {
//	string A = "ABCDE";
//	
//	for (int i = 0; i < 5; i++) {
//		string name = "选手";
//		name += A[i];
//		int score = 0;
//		person p(name, score);
//
//		v.push_back(p);
//	}
//	
//	cout << "成功！" << endl;
//}
//void setscore(vector<person>& v) {
//	for (vector<person>::iterator it = v.begin(); it != v.end(); it++) {
//		deque<int> d;
//		for (int i = 0; i < 10; i++) {
//			int score = rand() % 10 + 60;
//			//0~10     +60
//			d.push_back(score);
//		}
//		sort(d.begin(), d.end());
//		d.pop_front();
//		d.pop_back();
//	}
//}
//
//void text1() {
//	vector<person> v;
//	createperson(v);
//	vector<person>::iterator it;
//	for (it = v.begin(); it != v.end(); it++) {
//		cout << (*it).m_name << "  " << (*it).m_score << endl;
//	}
//	
//}
//int main() {
//	text1();
//}
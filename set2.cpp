#include<iostream>
#include<set>
//set multisetֻ����һ����������������
#include<string>
#include<algorithm>
using namespace std;
//������
//set���������ظ�Ԫ��
//multiste�������ظ�Ԫ��
void printfset(set<int>& s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
void text1() {
	set<int> s1;
	//��������ֻ��insert

	s1.insert(120);
	s1.insert(10);
	s1.insert(30);
	//����ʱ���ᱻ�Զ�����
	printfset(s1);
	//int n = s1.find(30);  ����� ֻ��string �Ĳŷ���int��
	set<int>::iterator pos = s1.find(30);
	if (pos != s1.end()) {//pos!=��
		cout << "�ҵ�Ԫ�أ�" << *pos << endl;
	}
	else {
		cout << "δ�ҵ�Ԫ��" << endl;
	}
	int num = s1.count(30);
	//ͳ�ƣ�30���ĸ��� 1
	//set�� ֻ��0 1
	cout << num << endl;

}
int main() {
	
	text1();
}
//#include <iostream>
//#include<string>
//#include<deque>
////˫�����飬���Զ�ͷ����β�����в���ɾ��
////vectorֻ����β��βɾ���������飩
////deque����ͷβ��ɾ
//using namespace std;
////������ֹ�����汻�޸�
//void printfdeque(const deque<int>& d) {
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		//*it = 100;������
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void text1() {
//	deque<int> d1;
//	for (int i = 0; i < 10; i++) {
//		d1.push_back(i);
//	}
//	//����������ͬ
//	//����dequeû����������
//	deque<int> d2(d1); 
//	d1.push_back(12);
//	d1.push_front(223);
//	printfdeque(d1);
//	d1.insert(d1.begin(), d2.begin(), d2.end());
//	//��d1.begin()�����뷶ΧԪ��
//	//vectorͨ��
//	printfdeque(d1);
//}
//int main() {
//	text1();
//	cout << endl;
//	system("pause");
//}
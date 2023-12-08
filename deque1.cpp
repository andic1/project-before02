//#include <iostream>
//#include<string>
//#include<deque>
////双端数组，可以对头部，尾部进行插入删除
////vector只可以尾插尾删（单端数组）
////deque可以头尾插删
//using namespace std;
////这样防止在里面被修改
//void printfdeque(const deque<int>& d) {
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		//*it = 100;不可以
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void text1() {
//	deque<int> d1;
//	for (int i = 0; i < 10; i++) {
//		d1.push_back(i);
//	}
//	//基本操作相同
//	//但是deque没有容量概念
//	deque<int> d2(d1); 
//	d1.push_back(12);
//	d1.push_front(223);
//	printfdeque(d1);
//	d1.insert(d1.begin(), d2.begin(), d2.end());
//	//在d1.begin()处插入范围元素
//	//vector通用
//	printfdeque(d1);
//}
//int main() {
//	text1();
//	cout << endl;
//	system("pause");
//}
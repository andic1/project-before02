//#include<iostream>
//#include<list>
//#include<string>
//using namespace std;
////双向链表
////可以尾头删插
////不支持随机访问
//void text1() {
//	list<int> l;
//	list<int>::iterator it;
//	l.push_back(10);
//	l.push_front(23);//头插
//	list<int> l2;
//	l2.assign(l.begin(),l.end());
//	l.swap(l2);
//	l.insert(l.begin()++,3);
//	l.remove(3);//特有 移除元素3
//	//l[7],l.at(3)    不可以 因为链表是非连续地址
//	it++;
//	it--;
//	//不可以it+2，3跨级的，不是连续储存的
//	l.reverse();//反转      特有
//
//
//	//所有不支持随机访问的，都不可以用标准算法（比如sort）（全局）
//	//但是容器内部有的会提供
//
//
//	l.sort();//排序
//}
//int main() {
//	text1();
//}
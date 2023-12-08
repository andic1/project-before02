#include<iostream>
#include<set>
//set multiset只包含一个就两个都可以用
#include<string>
#include<algorithm>
using namespace std;
//二叉树
//set不允许有重复元素
//multiste允许有重复元素
void printfset(set<int>& s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
void text1() {
	set<int> s1;
	//插入数据只有insert

	s1.insert(120);
	s1.insert(10);
	s1.insert(30);
	//插入时都会被自动排序
	printfset(s1);
	//int n = s1.find(30);  错误的 只有string 的才返回int型
	set<int>::iterator pos = s1.find(30);
	if (pos != s1.end()) {//pos!=空
		cout << "找到元素：" << *pos << endl;
	}
	else {
		cout << "未找到元素" << endl;
	}
	int num = s1.count(30);
	//统计（30）的个数 1
	//set下 只有0 1
	cout << num << endl;

}
int main() {
	
	text1();
}
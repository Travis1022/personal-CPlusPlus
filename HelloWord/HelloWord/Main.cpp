#include "iostream"
#include "cstring"

using namespace std;

/************************************************************************/
/*                  Hello Word                                          */
/************************************************************************/


void printBook(struct Book book);




struct Book{
	char name[50];
	char author[15];
	int price;
	int bookId;
};



int main(){
	cout << "HelloWord！" << endl;
	cout << "bool类型所占字节数为:"<< sizeof(bool) << endl;


	Book javaBook;
	Book androidBook;

	strcpy_s(javaBook.name,"Spring Boot 实战");
	strcpy_s(javaBook.author,"汪云飞");
	javaBook.bookId= 978787012;
	javaBook.price = 60;

	printBook(javaBook);



	system("pause");
	return 0;
};


void printBook(Book book){
	cout << "书名："<< book.name << endl;
	cout << "作者："<< book.author << endl;
	cout << "ISBN："<< book.bookId << endl;
	cout << "价格："<< book.price << endl;
}
























/*调试快捷键
//https://www.cnblogs.com/9999/archive/2011/11/09/2242588.html 
F6: 生成解决方案

Ctrl+F6: 生成当前项目

F7: 查看代码

Shift+F7: 查看窗体设计器

F5: 启动调试

Ctrl+F5: 开始执行(不调试)

Shift+F5: 停止调试

Ctrl+Shift+F5: 重启调试

F9: 切换断点

Ctrl+F9: 启用/停止断点

Ctrl+Shift+F9: 删除全部断点

F10: 逐过程

Ctrl+F10: 运行到光标处

F11: 逐语句
*/
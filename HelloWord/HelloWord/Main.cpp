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
	cout << "HelloWord��" << endl;
	cout << "bool������ռ�ֽ���Ϊ:"<< sizeof(bool) << endl;


	Book javaBook;
	Book androidBook;

	strcpy_s(javaBook.name,"Spring Boot ʵս");
	strcpy_s(javaBook.author,"���Ʒ�");
	javaBook.bookId= 978787012;
	javaBook.price = 60;

	printBook(javaBook);



	system("pause");
	return 0;
};


void printBook(Book book){
	cout << "������"<< book.name << endl;
	cout << "���ߣ�"<< book.author << endl;
	cout << "ISBN��"<< book.bookId << endl;
	cout << "�۸�"<< book.price << endl;
}
























/*���Կ�ݼ�
//https://www.cnblogs.com/9999/archive/2011/11/09/2242588.html 
F6: ���ɽ������

Ctrl+F6: ���ɵ�ǰ��Ŀ

F7: �鿴����

Shift+F7: �鿴���������

F5: ��������

Ctrl+F5: ��ʼִ��(������)

Shift+F5: ֹͣ����

Ctrl+Shift+F5: ��������

F9: �л��ϵ�

Ctrl+F9: ����/ֹͣ�ϵ�

Ctrl+Shift+F9: ɾ��ȫ���ϵ�

F10: �����

Ctrl+F10: ���е���괦

F11: �����
*/
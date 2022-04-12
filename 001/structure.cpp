#include<iostream>
#include<cstring>
using namespace std;

void structure(struct Books book);

struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;  
};

int main(){
    Books book1;
    Books book2;

    strcpy(book1.title,"C++教程");
    strcpy(book1.author,"Runoob");
    strcpy(book1.subject,"前端技术");
    book1.book_id = 12345;

    strcpy(book2.title,"变形记");
    strcpy(book2.author,"Kafka");
    strcpy(book2.subject,"城堡");
    book2.book_id = 123456;
    structure(book1);
    structure(book2);
    return 0;
}

void structure(struct Books book){
    cout << book.title << endl;
    cout << book.author << endl;
    cout << book.subject << endl;
    cout << book.book_id << endl;
}
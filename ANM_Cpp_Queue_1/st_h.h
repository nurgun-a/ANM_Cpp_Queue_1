#include <iostream>
#include <iomanip>
#include <string.h>
#include <string>
#include <vector>
#include <Windows.h>
#include <conio.h>

using namespace std;

class Student;
class Queue
{
	Student* Wait;
	int MaxQueueLength;
	int QueueLength;
public:
	Queue(int m);
	~Queue();
	void Add(Student _st);
	int Extract();
	void Clear();
	bool IsEmpty();
	bool IsFull();
	int GetCount();
	void Show();
	void Show1();
	friend Student;
	Student Get_st(int _c);
	
};

//*************************
class Student
{
	string Name;
	string Surname;
	static int raund;
	int ball[3] = {};
public:
	Student();	
	Student(string _n, string _s);
	int Get_raund();
	int Get_ball(int _n);
	void Set_ball(int _n);
	friend ostream& operator <<(ostream& os, Student& _st);
	friend istream& operator >>(istream& is, Student& _st);
	friend void cout_ball(Student _st);
	static void raund_n(int n);
	static void raund_null();
	Student rand_ball(Student &_st);
	friend void pp(Student& _st);
};
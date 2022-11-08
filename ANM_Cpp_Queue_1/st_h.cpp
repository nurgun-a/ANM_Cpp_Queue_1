#include "st_h.h"
int Student::raund = 0;

Student::Student()
{	
	Name = "Name";
	Surname = "Surname";	
}

Student::Student(string _n, string _s)
{
	Name = _n;
	Surname = _s;
}

int Student::Get_raund()
{
	return raund;
}

int Student::Get_ball(int _n)
{
	return ball[_n];
}

void Student::Set_ball(int _n)
{
	ball[raund] = _n;
}

void Student::raund_n(int n)
{
	raund = n;
}

void Student::raund_null()
{
	raund = 0;
}

Student Student::rand_ball(Student &_st)
{
	int n = rand() % 9 + 4;
	_st.ball[raund] = n;
	return _st;
}

void Queue::Show()
{
	if (!IsEmpty())
	{
		cout << "\n------------------------------------------\n";
		cout << "       Имя      Фамилия    Баллы:";
		cout << "\n------------------------------------------\n";
		for (int i = 0; i < QueueLength; i++)
		{
			cout << Wait[i]; cout_ball(Wait[i]); cout  << endl;
		}
		cout << "\n------------------------------------------\n";
	}
	else cout << "Empty!!!" << endl;
	
}
void Queue::Show1()
{
	if (!IsEmpty())
	{
		cout << "\n-----------------------------------------------------\n";
		cout << "       Имя      Фамилия    Баллы:      Результаты:";
		cout << "\n-----------------------------------------------------\n";
		for (int i = 0; i < QueueLength; i++)
		{
			cout << Wait[i]; cout_ball(Wait[i]); pp(Wait[i]); cout << endl;
		}
		cout << "\n-----------------------------------------------------\n";
	}
	else cout << "Empty!!!" << endl;
}
Student Queue::Get_st(int _c)
{
	if (!IsEmpty())
	{
		return Wait[_c];;		
	}	
}
Queue::~Queue()
{
	delete[]Wait;
}
Queue::Queue(int m)
{
	MaxQueueLength = m;
	Wait = new Student[MaxQueueLength];
	QueueLength = 0;
}
void Queue::Clear()
{
	QueueLength = 0;
}
bool Queue::IsEmpty()
{
	return QueueLength == 0;
}
bool Queue::IsFull()
{
	return QueueLength == MaxQueueLength;
}
int Queue::GetCount()
{
	return QueueLength;
}
void Queue::Add(Student _st)
{
	if (!IsFull())
	{
		Wait[QueueLength++] = _st;		
	}
		
}
int Queue::Extract()
{
	if (!IsEmpty())
	{
		Student temp = Wait[0];
		int n = temp.Get_raund();		
		for (int i = 1; i < QueueLength; i++)
		{
			Wait[i - 1] = Wait[i];
		}
		if (temp.Get_ball(n) >= 7)
		{
			Wait[QueueLength - 1] = temp;	
			return 1;
		}
		else 
		{
			QueueLength--;
			return 0;
		}		
	}
}

ostream& operator<<(ostream& os, Student& _st)
{
	os << setw(12) << _st.Name << setw(12) << _st.Surname;
	return os;
}

istream& operator>>(istream& is, Student& _st)
{
	cout << "Enter name: "; is >> _st.Name;
	cout << "Enter surname: "; is >> _st.Surname;
	return is;
}

void cout_ball(Student _st)
{
	cout << setw(4) << _st.ball[0] << setw(4) << _st.ball[1]
		<< setw(4) << _st.ball[2];
}

void pp(Student& _st)
{
	if (_st.ball[0] < 7 || _st.ball[1] < 7 || _st.ball[2] < 7)
	{
		cout << "   Не поступил(а)";
	}
	else cout << "   Поступил(а)";
}

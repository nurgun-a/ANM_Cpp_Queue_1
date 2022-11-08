#include "st_h.h"

void main()
{
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Queue Q(25),Q1(25);
	
	int key = 0,n=0;
	bool key_1 = 1;
	int size = 20;

	Student st1("Name1", "Surname1");Student st2("Name2", "Surname2");
	Student st3("Name3", "Surname3");Student st4("Name4", "Surname4");
	Student st5("Name5", "Surname5");Student st6("Name6", "Surname6");
	Student st7("Name7", "Surname7");Student st8("Name8", "Surname8");
	Student st9("Name9", "Surname9");Student st10("Name10", "Surname10");
	Student st11("Name11", "Surname11");Student st12("Name12", "Surname12");
	Student st13("Name13", "Surname13");Student st14("Name14", "Surname14");
	Student st15("Name15", "Surname15");Student st16("Name16", "Surname16");
	Student st17("Name17", "Surname17");Student st18("Name18", "Surname18");
	Student st19("Name19", "Surname19");Student st20("Name20", "Surname20");

	Student *gr_p = new Student [size]
	{ st1,st2,st3,st4,st5,st6,st7,st8,st9,st10,
	st11,st12,st13,st14,st15,st16,st17,st18,st19,st20};

	do
	{
		system("cls");
		cout << "1 - Студенты с 0 по 5" << endl;
		cout << "2 - Студенты с 5 по 10" << endl;
		cout << "3 - Студенты с 10 по 15" << endl;
		cout << "4 - Студенты с 15 по 20" << endl;
		cout << "5 - Показать весь список" << endl;
		cout << "6 - Показать тех, кто поступил" << endl;
		cout << "0 - Выйти" << endl;
		cout << "Enter: "; cin >> key; cout << endl;
		switch (key)
		{
		case 1:
		{
			for (int i = 0; i < 5; i++)
			{
				Q.Add(gr_p[i].rand_ball(gr_p[i]));

			}
			for (int i = 0; i < 5; i++)
			{
				Q.Extract();
			}
			n = Q.GetCount();

			Student::raund_n(1);
			Q.Clear();
			for (int i = 0; i < 5; i++)
			{
				if (gr_p[i].Get_ball(0) >= 7)
				{
					Q.Add(gr_p[i].rand_ball(gr_p[i]));
				}
			}
			for (int i = 0; i < n; i++)
			{
				Q.Extract();
			}
			n = Q.GetCount();
			Student::raund_n(2);
			Q.Clear();
			for (int i = 0; i < 5; i++)
			{
				if (gr_p[i].Get_ball(0) >= 7 && gr_p[i].Get_ball(1) >= 7)
				{
					Q.Add(gr_p[i].rand_ball(gr_p[i]));
				}
			}
			for (int i = 0; i < n; i++)
			{
				Q.Extract();
			}
			Q.Clear();
			for (int i = 0; i < 5; i++)
			{
				Q.Add(gr_p[i]);

			}
			Q.Show1();
			cout << "\n\t\tНажмите пробел, чтобы продолжить!" << endl;
			_getch();
		}break;
		case 2:
		{
			Student::raund_null();
			for (int i = 5; i < 10; i++)
			{
				Q.Add(gr_p[i].rand_ball(gr_p[i]));

			}
			for (int i = 0; i < 5; i++)
			{
				Q.Extract();
			}
			n = Q.GetCount();

			Student::raund_n(1);
			Q.Clear();
			for (int i = 5; i < 10; i++)
			{
				if (gr_p[i].Get_ball(0) >= 7)
				{
					Q.Add(gr_p[i].rand_ball(gr_p[i]));
				}
			}
			for (int i = 0; i < n; i++)
			{
				Q.Extract();
			}
			n = Q.GetCount();
			Student::raund_n(2);
			Q.Clear();
			for (int i = 5; i < 10; i++)
			{
				if (gr_p[i].Get_ball(0) >= 7 && gr_p[i].Get_ball(1) >= 7)
				{
					Q.Add(gr_p[i].rand_ball(gr_p[i]));
				}
			}
			for (int i = 0; i < n; i++)
			{
				Q.Extract();
			}
			Q.Clear();
			for (int i = 5; i < 10; i++)
			{
				Q.Add(gr_p[i]);

			}
			Q.Show1();
			cout << "\n\t\tНажмите пробел, чтобы продолжить!" << endl;
			_getch();
		}break;
		case 3:
		{
			Student::raund_null();
			for (int i = 10; i < 15; i++)
			{
				Q.Add(gr_p[i].rand_ball(gr_p[i]));

			}
			for (int i = 0; i < 5; i++)
			{
				Q.Extract();
			}
			n = Q.GetCount();

			Student::raund_n(1);
			Q.Clear();
			for (int i = 10; i < 15; i++)
			{
				if (gr_p[i].Get_ball(0) >= 7)
				{
					Q.Add(gr_p[i].rand_ball(gr_p[i]));
				}
			}
			for (int i = 0; i < n; i++)
			{
				Q.Extract();
			}
			n = Q.GetCount();
			Student::raund_n(2);
			Q.Clear();
			for (int i = 10; i < 15; i++)
			{
				if (gr_p[i].Get_ball(0) >= 7 && gr_p[i].Get_ball(1) >= 7)
				{
					Q.Add(gr_p[i].rand_ball(gr_p[i]));
				}
			}
			for (int i = 0; i < n; i++)
			{
				Q.Extract();
			}
			Q.Clear();
			for (int i = 10; i < 15; i++)
			{
				Q.Add(gr_p[i]);

			}
			Q.Show1();
			cout << "\n\t\tНажмите пробел, чтобы продолжить!" << endl;
			_getch();
		}break;
		case 4:
		{
			Student::raund_null();
			for (int i = 15; i < 20; i++)
			{
				Q.Add(gr_p[i].rand_ball(gr_p[i]));

			}
			for (int i = 0; i < 5; i++)
			{
				Q.Extract();
			}
			n = Q.GetCount();

			Student::raund_n(1);
			Q.Clear();
			for (int i = 15; i < 20; i++)
			{
				if (gr_p[i].Get_ball(0) >= 7)
				{
					Q.Add(gr_p[i].rand_ball(gr_p[i]));
				}
			}
			for (int i = 0; i < n; i++)
			{
				Q.Extract();
			}
			n = Q.GetCount();
			Student::raund_n(2);
			Q.Clear();
			for (int i = 15; i < 20; i++)
			{
				if (gr_p[i].Get_ball(0) >= 7 && gr_p[i].Get_ball(1) >= 7)
				{
					Q.Add(gr_p[i].rand_ball(gr_p[i]));
				}
			}
			for (int i = 0; i < n; i++)
			{
				Q.Extract();
			}
			Q.Clear();
			for (int i = 15; i < 20; i++)
			{
				Q.Add(gr_p[i]);

			}
			Q.Show1();
			cout << "\n\t\tНажмите пробел, чтобы продолжить!" << endl;
			_getch();
		}break;
		case 5:
		{
			int count = 0;
			Q.Clear();
			for (int i = 0; i < 20; i++)
			{
				Q.Add(gr_p[i]);
				if (gr_p[i].Get_ball(0) >= 7 && gr_p[i].Get_ball(1) >= 7 
					&& gr_p[i].Get_ball(2) >= 7)
				{
					count++;
				}

			}
			Q.Show1();
			cout << "\nПоступило:  " <<count<< endl;
			cout << "\n\t\tНажмите пробел, чтобы продолжить!" << endl;
			_getch();
		}break;

		case 6:
		{
			int count = 0;
			Q.Clear();
			for (int i = 0; i < 20; i++)
			{
				
				if (gr_p[i].Get_ball(0) >= 7 && gr_p[i].Get_ball(1) >= 7
					&& gr_p[i].Get_ball(2) >= 7)
				{
					Q.Add(gr_p[i]);
					count++;
				}

			}
			Q.Show1();
			cout << "\nПоступило:  " << count << endl;
			cout << "\n\t\tНажмите пробел, чтобы продолжить!" << endl;
			_getch();
		}break;

		case 0:
		{
			key_1 = 0;
		}break;

		default:
			break;
		}
	} while (key_1);

}

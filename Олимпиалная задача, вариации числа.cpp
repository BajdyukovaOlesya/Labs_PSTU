#include <iostream> 
#include <clocale>
using namespace std;
int x, a, b, c,a1,b1,c1,a2,b2,c2 ;
bool f = false;
int main()
{
	setlocale(LC_ALL, "ru");
  cout<<"введите число"\n;
  cin>>x;
  while ((x < 100) || (x > 999)) { cout << "Число не трехзначное. Введите новое число.\n"; cin >> x; };
  a = x % 10;
  x = x / 10;
  b = x % 10;
  c = x / 10;
  while (f == false)
  {
	  if ((a == b) || (b == c) || (a == c)) {
		  cout << "Цифры в числе не могут повторяться. Введите новое число\n"; cin >> x;
		  a = x % 10;
		  x = x / 10;
		  b = x % 10;
		  c = x / 10;
	  }
	  else f = true;
  }
  cout << a << b << c<< endl ;
  cout << a << c << b << endl;
  cout << b << a << c << endl;
  cout << b << c << a << endl;
  cout << c << a << b << endl;
  cout << c << b << a << endl;
  a1 = a * 100 + b * 10 + c;
  a2 = a * 100 + c * 10 + b;
  b1 = b * 100 + a * 10 + c;
  b2 = b * 100 + c * 10 + a;
  c1 = c * 100 + a * 10 + b;
  c2 = c * 100 + b * 10 + a;
  int array[6] = { a2, a1, b2, b1, c2, c1 };
  int max = array[0];
  for (int i = 0; i <5; i++) {
	  if (array[i]> max) { max = array[i]; };
  }
  cout << "самое большое число " << max;
  return 0;
}

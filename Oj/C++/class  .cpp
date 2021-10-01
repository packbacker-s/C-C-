#include <iostream>
#include <cstring>
using namespace std;


class Person {

public:
	void setName(string name) {
		m_Name = name;

	}
	string getName() {
		return m_Name;

	}

  int getAge() {
    m_Age = 18;
    return m_Age;
  }

private:
	string m_Name;
	int m_Age;
	string m_Lover;

};

int main() {

	Person p;
	p.setName("1234");
	cout << "name is： " << p.getName() << endl;
  cout << "age is " << p.getAge() <<endl;
	system("pause");
	return 0;
}

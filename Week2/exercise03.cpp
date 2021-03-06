#include <string>
#include <iostream>
using namespace std;

class Namelist {
private:
	int size;
	string* p;
public:
	Namelist() { size = 0; p = 0; }
	Namelist(const string[], int);
	void set(const string&, int);
	void set(const char*, int);
	void dump() const;
};
Namelist::Namelist(const string s[], int si) {
	p = new string[size = si];
	for (int i = 0; i < size; i++) {
		p[i] = s[i];
	}
}
void Namelist::set(const string& s, int i) {
	p[i] = s;
}
void Namelist::set(const char*s, int i) {
	p[i] = s;
}
void Namelist::dump() const{
	for (int i = 0; i < size; i++)
		cout << p[i] << '\n';
}
int main() {
	string list[] = { "Lab", "Husky", "Collie" };
	Namelist d1(list, 3);
	d1.dump();
	Namelist d2(d1);
	d2.dump();
	d2.set("Great Dane", 1);
	d2.dump();
	d1.dump();
	system("pause");
	return 0;
}
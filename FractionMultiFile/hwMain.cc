int main() {
	const Fraction a(1,2); // 1/2
	const Fraction b(3);   // 3/1
	Fraction c;      // 0/1

	Fraction d  = a + b;	// use friend
	Fraction e  = a - b;	// use member operator
	Fraction f = -a;			// use friend
	Fraction g = +b;			// use member operator (note, this one just returns b!)
	Fraction h = a.add(b);
	cout << d << '\n';
	cout << e << '\n';
	cout << f << '\n';
	cout << g << '\n';
	cout << h << '\n';
	cout << Fraction::getCount() << '\n'; // how many
}

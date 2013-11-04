#include <iostream>
using namespace std;

// should be in header file
struct Im {
  float r,i;
  Im(float r, float i);
  Im add(const Im&);
  Im sub(const Im&);
  Im operator+(int); // imaginary + real
  friend Im operator+(int,Im&); // real + imaginary
};

// should be in cpp file
Im::Im(float r, float i) {
  this->r = r;
  this->i = i;
}

Im Im::add(const Im& x) {
  return Im(r+x.r, i+x.i);
}

Im Im::sub(const Im& x){
  return Im(r-x.r, i-x.i);
}

// global operator
Im operator+(const Im& a, const Im& b) {
  return Im(a.r+b.r, a.i+b.i);
}

// member function operator
Im Im::operator+(int x) {
	return Im(r+x, i);
}

// friend function operator
Im operator+(int x, Im& y) {
	return Im(x+y.r, y.i);
}

// friend function operator
// enables cout << imaginary 
ostream& operator<<(ostream& o, Im const& x){
  return o << '(' << x.r << '+' << x.i << "i)";
}

// program
int main() {
  Im x(5,3), y(2,1);
//  cout << x << " + " << y << " = " << (x+y);

	cout << x+3; // member function, alternative: x.operator+(3);
	cout << 3+x; // friend function, because can't write 3.operator+(x);
  cin.get();
  return 0;
}
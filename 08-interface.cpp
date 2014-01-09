#include <stdio.h>
#include <math.h>

// --- Point -----------------------------------
struct Point {
  int x;
  int y;
  
  Point(int _x, int _y) {
    x = _x;
    y = _y;
  }
  
  double dist(Point* p) {
    double dx = (double)p->x - x;
    double dy = (double)p->y - y;
    return sqrt(dx*dx+dy*dy);
  }
};

struct Shape {
  virtual double Circ()=0;
  virtual double Area()=0;
};

// --- Triangle --------------------------------
struct Triangle : Shape {
  Point *a, *b, *c;
  
  Triangle(Point* _a, Point* _b, Point* _c) {
    a = _a;
    b = _b;
    c = _c;
  }
  
  double Circ() {
    return a->dist(b) + b->dist(c) + c->dist(a);
  }
  
  double Area() {
    double s = Circ() / 2;
    double _a = b->dist(c);
    double _b = a->dist(c);
    double _c = a->dist(b);
    return sqrt(s*(s-_a)*(s-_b)*(s-_c));
  }
};

// --- Rectangle -------------------------------
struct Rectangle : Shape {
  Point *a, *b;
  
  Rectangle(Point* _a, Point* _b) {
    a = _a;
    b = _b;
  }

  double Circ() {
    Point c(a->x,b->y);
    return 2 * ( c.dist(a)+c.dist(b) );
  }

  double Area() {
    Point c(a->x,b->y);
    return c.dist(a) * c.dist(b);
  }
};

int main() {

  Point* a = new Point(1,5);
  Point* b = new Point(3,8);
  Point* c = new Point(2,2);
  
  Shape* t = new Triangle(a, b, c);
  Shape* r = new Rectangle(a, b);
  printf("obvod: %.2f, obsah: %.2f\n", t->Circ(), t->Area());
  printf("obvod: %.2f, obsah: %.2f\n", r->Circ(), r->Area());
  getchar();
  return 0;
}

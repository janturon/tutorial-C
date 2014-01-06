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

// --- Triangle --------------------------------
struct Triangle {
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

// --- Program ---------------------------------
// napý.:
// triangle 0 0 3 0 3 4
// obvod: 12, obsah 6
int main(int argc, char** argv) {
  if(argc!=7) {
    puts("Syntax: triangle ax ay bx by cx cy");
    return 1;
  }
  
  int ax, ay, bx, by, cx, cy;
  sscanf(argv[1],"%d",&ax);
  sscanf(argv[2],"%d",&ay);
  sscanf(argv[3],"%d",&bx);
  sscanf(argv[4],"%d",&by);
  sscanf(argv[5],"%d",&cx);
  sscanf(argv[6],"%d",&cy);

  Point* p = new Point(ax,ay);
  Point* q = new Point(bx,by);
  Point* r = new Point(cx,cy);
  
  Triangle* t = new Triangle(p, q, r);
  printf("obvod: %.2f, obsah: %.2f", t->Circ(), t->Area());
  return 0;
}

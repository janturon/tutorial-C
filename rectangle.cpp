Rectangle::Rectangle(float a, float b) {
  this->a = a;
  this->b = b;
}

float Rectangle::Area() {
  return a*b;
}

float Rectangle::Circ() {
  return 2*(a+b);
}

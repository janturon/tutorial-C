/**
 * header file of struc Rectangle 
 */ 

// include only once
#ifndef __Rectangle__
#define __Rectangle__

struct Rectangle {
  float a,b;
  Rectangle(float a, float b);
  float Area();
  float Circ();
};

#endif
#include <iostream>
#include <vector>
#include <string.h>
#include <math.h>

using namespace std;

#include "classes.h"

int main() {
  Point point(0,0);
  Circle circle(point, 10);
  Point p1(0, 10);
  Point p2(10, 0);
  Point p3(-10, 0);
  Point p4(0,-10);
  vector <Point> vertexes;
  vertexes.push_back(p1);
  vertexes.push_back(p2);
  vertexes.push_back(p3);
  vertexes.push_back(p4);
  Polygon polygon(vertexes);

  int result = polygon.relation(circle);

  if(result == 0) {
    cout << "OUTSIDE" << endl;
  }
  if(result == 1) {
    cout << "INSIDE" << endl;
  }
  if(result == 2) {
    cout << "TOUCH" << endl;
  }

  return 0;
}

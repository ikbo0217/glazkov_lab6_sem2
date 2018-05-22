#ifndef CLASSES_H
#define CLASSES_H

/* Figure */
class Figure {
  public:
    string type;
};

/* Point */
class Point {
  public:
    int x;
    int y;
    Point(int = 0, int = 0);
};

Point::Point(int X, int Y) {
  x = X;
  y = Y;
};

/* Circle */
class Circle: public Figure {
  public:
    Point center;
    int r;
    Circle(Point, int);
};

Circle::Circle(Point CENTER, int R) {
  type = "Circle";
  center = CENTER;
  r = R;
};

/* Polygon */
class Polygon: public Figure {
  public:
    vector <Point> vertexes;
    int relation(Circle);
    Polygon(vector<Point>);
};

Polygon::Polygon(vector <Point> VERTEXES) {
  type = "Polygon";
  vertexes = VERTEXES;
};

int Polygon::relation(Circle circle) {
  int result = 2;

  for(int i = 0; i < vertexes.size(); i++) {
    int a = pow(vertexes[i].x - circle.center.x, 2) + pow(vertexes[i].y - circle.center.y, 2);
    int b = pow(circle.r, 2);

    if(a < b) {
      result = 1;
      break;
    }

    if(a > b) {
      result = 0;
      break;
    }
  }

  return result;
};

#endif

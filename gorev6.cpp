#include <iostream>

class RegularPolygon {
  private:
  int n(int x);
  int angle(int x); 
};
int RegularPolygon::n(int x) {
return n ;
}
int RegularPolygon::angle(int x) {
return 180-(360/n) ; 
}
int main {
RegularPolygon square;
std::cout<< square.n(4)<<square.angle(4) ;
}

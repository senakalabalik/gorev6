#define _USE_MATH_DEFINES // M_PI
#include <iostream>
#include <cmath>
class RegularPolygon {
  private:
    int n;
    int angle;
    RegularPolygon(int x) {
      n=x ;
      angle=π-(2π/x) ; 
    }
  public:
    int area(int L);
    int length(int A);  
};

int RegularPolygon::area(int L) {
return L*L ; //kare için 
}
int RegularPolygon::length(int A) {
return sqrt(A) ; //kare için
}
int main() {
RegularPolygon square(4);
int sidelentgh;
std::cin>> sidelength;
std::cout<<square.area(sidelength) ;
int thearea;
std::cin>> thearea;
std::cout<<square.length(thearea) ;
  
  

}

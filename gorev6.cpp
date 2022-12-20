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
    area=L*L ; // sadece kare için alan formülü
    int lentgh(int A);
    length=sqrt(A) ; //kare için 
  
};

int main() {
RegularPolygon square(4);
std::cin>> int l;
std::cout<<square.area(l) ;
std::cin>> int a;
std::cout<<squarae.length(a) ;
  
  

}

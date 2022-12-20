#define _USE_MATH_DEFINES // M_PI
#include <iostream>
#include <cmath>
class RegularPolygon {
  private:
    int n;
    int angle;
  public:
    int area(int L);
    int length(int A);  
    int setN(int x){
      n=x; 
    }
    int setAngle(int x){
      angle=π-(2π/x);
    
};

int RegularPolygon::area(int L) {
return L*L ; //kare için 
}
int RegularPolygon::length(int A) {
return sqrt(A) ; //kare için
}
int main() {
RegularPolygon square;
square.setN(4);
square.setAngle(4);
int sidelength;
std::cin>> sidelength;
std::cout<<square.area(sidelength) ;
int thearea;
std::cin>> thearea;
std::cout<<square.length(thearea) ;
  
  

}

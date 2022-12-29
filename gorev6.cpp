#define _USE_MATH_DEFINES // M_PI
#include <iostream>
#include <cmath>



class RegularPolygon {
  private:
    int n;
    int angle;
    int count ;
  public:
    int area(int L);
    int length(int A);  
    RegularPolygon(int n) {		
    this->n=n;		
    this->angle=2*(double)M_PI/n;
    count=count+1
       }
    ~RegularPolygon() {
      count=count-1 
      }
};

int RegularPolygon::area(int L) {
return L*L ; //kare için 
}
int RegularPolygon::length(int A) {
return sqrt(A) ; //kare için
}
count=0 ; //yeri doğru mu idk
int main() {
RegularPolygon square(4);

int sidelength;
std::cin>> sidelength;
std::cout<<square.area(sidelength) ;
int thearea;
std::cin>> thearea;
std::cout<<square.length(thearea) ;
std::cout << square.count ;
   
  

}

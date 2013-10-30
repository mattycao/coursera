#include <iostream>
#include <complex>
using std::cout;
using std::endl;
using std::complex;
// the error happen when using this using namespace std giving the ambigious error,
// is because that the std has another function called swap, so that is the problem.
// You can tell the compiler to use your function by using the scope resolution operator without a namespace:
//::swap(m, n);
template <class T> 
inline void swap(T& d, T& s) 
{ 
 T temp = d; 
 d = s; 
 s = temp; 
}
/*
• Prescription: Take a normal function and 
 - Add template <class T> //T is id 
 
 - Now for int or double or whatever use T when called as in swap(a, b); 
 
 - The compiler uses a signature matching routine to infer what the code should use for type. 
*/
int main() 
{ 
 int m = 5, n =10; 
 double x = 5.3, y =10.6; 
 complex<double> r(2.4, 3.5), s(3.4, 6.7); 
 cout << "inputs: " << m << " , " << n << endl; 
 swap(m, n); 
 cout << "outputs: " << m << " , " << n << endl; 
 cout << "outputs: " << m << " , " << n << endl; 
 cout << " double inputs: " << x << " , " 
 << y << endl; 
 swap(x, y); 
 cout << "double outputs: " << x << " , " << y << endl; 
 cout << "complex inputs: " << r << " , " << s << endl; 
 ::swap(r, s); 
 cout << "complex outputs: " << r << " , " << s << endl; 
} 

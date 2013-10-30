/*  Convert this program to C++
*   change to C++ io
*   change to one line comments
*   change defines of constants to const
*   change array to vector<>
*   inline any short function
*/

#include <iostream>
#include <vector>
using namespace std;
const int N = 4;

template <class T, class summable>
inline void sum(T& p, const summable& d)
{
  p = 0;
  for(auto const &it : d)
     p = p + it;
}
int main()
{
  int accum = 0;
  vector<int> data(N);
  for(int i = 0; i < N; ++i) {
    data[i] = i;
  }
  sum(accum, data);
  cout << "Sum is:" << accum << endl;
	return 0;
}
#include "mysqrt.h"

#include <iostream>

namespace mathfunctions {
namespace detail {
// a hack square root calculation using simple operations
double mysqrt(double x)
{
  if (x < 0) 
    return 0;
  if (x == 0 || x == 1)
    return x;

  double start = 0, end = std::max(x,1.0d), ans = 0;
  while (start <= end) {
    double mid = (start + end) / 2;
    std::cout << "start = "<<start << " | mid = " << mid << " | end = " << end << std::endl;
    double sqr = mid * mid;
    if (sqr == x)
        return mid;

    if (sqr <= x) {
        start = mid;
        ans = mid;
    }
    else // If mid*mid is greater than x
        end = mid;
    if ((end-start)<0.000001) break;
  }
  return ans;
}
}
}

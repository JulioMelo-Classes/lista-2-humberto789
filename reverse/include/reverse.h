#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 * TODO: documentação no estilo doxygen
 */
 /*
 80%
 */
template<class BidirIt>
void reverse(BidirIt first, BidirIt last)
{
  double aux;

  while ((first!=last)&&(first!=--last)) {
    aux = *first;
    *first = *last;
    *last = aux;
    first++;
  }
}

}
#endif

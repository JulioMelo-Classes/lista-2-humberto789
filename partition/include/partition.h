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
template<class ForwardIt, class UnaryPredicate>
ForwardIt partition(ForwardIt first, ForwardIt last, UnaryPredicate p)
{
  
    for(ForwardIt i = first; i!=last; i++){
      if(p(*i)){
        int aux = *i;
        *i = *first;
        *first = aux;
        first++;
      }
    }

    return first;
}

}
#endif

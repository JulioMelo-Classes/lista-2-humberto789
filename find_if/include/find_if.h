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
template<class InputIt, class UnaryPredicate>
InputIt find_if(InputIt first, InputIt last, UnaryPredicate p)
{
    int contador=0;
    for(InputIt i = first; i!=last; i++){
      if(p(*(first+contador))){
        return (first+contador);
      }
      contador++;
    }

    return last;
}

}
#endif

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
template<class InputIt>
InputIt copy(InputIt first, InputIt last, InputIt d_first)
{
  int contador= 0;
  for(InputIt i = first; i!=last; i++){
    *(d_first+contador) = *i;
    contador++;
  }
  
  contador++;

  return d_first+contador;
}

}
#endif

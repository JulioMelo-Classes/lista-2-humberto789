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
template<class ForwardIt, class Comparison>
void sort(ForwardIt first, ForwardIt last, Comparison cmp)
{
    for(ForwardIt i=first ; i!=last ; i++){

      for(ForwardIt j=i+1 ; j!=last ; j++){
          int aux=*i;

          if(cmp(*j,*i)){
            *i = *j;
            *j = aux;
          }
      }
    }
}

}
#endif

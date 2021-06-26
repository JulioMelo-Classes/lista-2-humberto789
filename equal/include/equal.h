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
template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, Equal eq)
{
    int contador = 0;
    bool resultado = true;
    InputIt1 valor_range = first2 + (last1 - first1);

    while(first2+contador != valor_range){
      if(!eq(*(first1+contador), *(first2+contador))){
        resultado=false;
      }
      contador++;
    }

    return resultado;
}

template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1,
           InputIt2 first2, InputIt2 last2,
           Equal eq )
{

    int contador=0;
    bool resultado=true;

    for(InputIt1 i = first1; i!=last1; i++){
      if(!eq(*(first1+contador), *(first2+contador))){
        resultado=false;
      }
      contador++;
    }

    return resultado;
}

}
#endif

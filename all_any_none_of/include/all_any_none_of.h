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
 80% faltou a documentação
 */
template<class InputIt, class UnaryPredicate>
bool all_of(InputIt first, InputIt last, UnaryPredicate p)
{
    int contador=0;
    bool resultado = true;

    if(first == last){
      return false;
    }

    for(InputIt i = first; i!=last; i++){
      if(!p(*(first+contador))){
        resultado = false;
      }
      contador++;
    }

    return resultado;
}

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class InputIt, class UnaryPredicate>
bool any_of(InputIt first, InputIt last, UnaryPredicate p)
{
    int contador=0;
    bool resultado = false;

    if(first == last){
      return false;
    }

    for(InputIt i = first; i!=last; i++){
      if(p(*(first+contador))){
        resultado = true;
      }
      contador++;
    }

    return resultado;
}

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class InputIt, class UnaryPredicate>
bool none_of(InputIt first, InputIt last, UnaryPredicate p)
{
    int contador=0;
    bool resultado = true;

    if(first == last){
      return true;
    }

    for(InputIt i = first; i!=last; i++){
      if(p(*(first+contador))){
        resultado = false;
      }
      contador++;
    }

    return resultado;
}

}
#endif

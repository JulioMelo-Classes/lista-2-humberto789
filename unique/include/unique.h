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
template<class InputIt, class Equal>
InputIt unique( InputIt first, InputIt last, Equal eq )
{
    int contador = 0;

    InputIt vetor_auxiliar = first;
    int contador_aux = 0;
    bool resultado = true;

    for(InputIt i = first; i!=last; i++){
      for(InputIt j = first; j!=last; j++){
        if(eq(*i, *j)){
          resultado = false;
        }
        contador++;
      }

      if(resultado==true){
        *(vetor_auxiliar+contador_aux) = *i;
        contador_aux++;
      }

      resultado = true;
      contador = 0;

    }

    return first+contador_aux;
}

}
#endif

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
 80% boa solução, mesmo o retorno não estando correto..
 */
template<class ForwardIt>
ForwardIt rotate(ForwardIt first, ForwardIt n_first, ForwardIt last)
{
    ForwardIt novo_range = n_first;
    int aux;

    while (first!=novo_range){

      aux = *first;
      *first = *novo_range;
      *novo_range = aux;

      first++;
      novo_range++;

      if (novo_range==last){ 
        novo_range=n_first;
      }
      else if (first==n_first){ 
        n_first=novo_range;
      };//!!!
    }

    return last;//retornar last não faz sentido de acordo com a especificação
}

}
#endif

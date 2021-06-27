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
template<class BidirIt>
void reverse(BidirIt first, BidirIt last)
{
    // TODO
    // for (int i = 0; i < (arr.size()/2); i++){
    //     std::swap(arr[i],arr[arr.size()-i-1]);
    // }
    //BidirIt a;
    // while (first!=(last/2)) {
    //     a = *last;
    //     *last = *first;
    // }
    // BidirIt temp=0;
    // while(first!=last){
    //     temp++;
    //     first++;

    // }
    BidirIt temp = last;
    for(BidirIt i=first; i!=last; i++){
        std::swap(*first, *last);
        first++;
        last--;
    }
    // for(BidirIt i=first; i!=(temp); i++){
    //     std::swap(*first, *last);
    // }

    // for(BidirIt i = first; i < last; i++){
    //     for(BidirIt j = i; j < last; j++){
    //         if(cmp(*i,*j) == false){
    //             std::swap(*i, *j);
    //         }
    //     }
    // }

}

}
#endif

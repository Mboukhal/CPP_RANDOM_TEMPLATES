#pragma once

// erase if exist
template <typename T1, typename T2>
void    tryToErase( T1 container ,T2 element ) {

    typename T1::iterator it;

    it = std::find( container.begin(), container.end(), element );
    if ( it != container.end() )
        container.erase( it );
}

// add non existed elemant
template <typename T1, typename T2>
void    tryPushBackNonDuplicate( T1 container ,T2 element ) {

    typename T1::iterator it;

    it = std::find( container.begin(), container.end(), element );
    if ( it == container.end() )
        container.push_back( element );
}

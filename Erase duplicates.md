set<int> s( vec.begin(), vec.end() );
vec.assign( s.begin(), s.end() );
  
sort( vec.begin(), vec.end() );
vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
  

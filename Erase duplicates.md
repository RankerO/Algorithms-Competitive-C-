### fast for large number of duplicates
set<int> s( vec.begin(), vec.end() );
vec.assign( s.begin(), s.end() );
  
### fast for low number of duplicates
sort( vec.begin(), vec.end() );
vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
  

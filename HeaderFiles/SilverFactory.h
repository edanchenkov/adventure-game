////////////////////
/// Advanced C++
/// Adventure Game 2 
/// Malkov/Danchenkov
////////////////////
#ifndef __SilverFactory_h__
#define __SilverFactory_h__
////////////////////////////////////////////////////////////////////////////////
#include <cstdlib>
class Silver;
////////////////////////////////////////////////////////////////////////////////
class SilverFactory
{
public:
  Silver * Create( size_t amount); 
};
////////////////////////////////////////////////////////////////////////////////
#endif

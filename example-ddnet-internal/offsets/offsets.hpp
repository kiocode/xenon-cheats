#define CLIENTTYPEDDNET
//#define CLIENTTYPEDDPER

#if defined(CLIENTTYPEDDNET)
	#include "offsetsDDNet.hpp"
#elif defined(CLIENTTYPEDDPER)
	#include "offsetsDDPer.hpp"
#endif

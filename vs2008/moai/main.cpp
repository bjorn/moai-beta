//----------------------------------------------------------------//
// Copyright (c) 2010-2011 Zipline Games, Inc. 
// All Rights Reserved. 
// http://getmoai.com
//----------------------------------------------------------------//

#include <aku/AKUGlut.h>
#include <stdio.h>

//----------------------------------------------------------------//
int main ( int argc, char** argv ) {

	#ifdef _DEBUG
		printf ( "MOAI-OPEN DEBUG\n" );
	#endif

	return AKUGlut ( argc, argv );
}

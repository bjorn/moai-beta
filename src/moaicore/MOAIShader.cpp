// Copyright (c) 2010-2011 Zipline Games, Inc. All Rights Reserved.
// http://getmoai.com

#include "pch.h"
#include <moaicore/MOAIEaseDriver.h>
#include <moaicore/MOAILogMessages.h>
#include <moaicore/MOAIShader.h>

//================================================================//
// local
//================================================================//

//----------------------------------------------------------------//

//================================================================//
// MOAIShader
//================================================================//

//----------------------------------------------------------------//
void MOAIShader::Bind () {
}

//----------------------------------------------------------------//
MOAIShader::MOAIShader () {
	
	RTTI_BEGIN
		RTTI_EXTEND ( MOAINode )
	RTTI_END
}

//----------------------------------------------------------------//
MOAIShader::~MOAIShader () {
}

//----------------------------------------------------------------//
STLString MOAIShader::ToString () {

	STLString repr;

	return repr;
}

add_library(uslscore STATIC
    pch.cpp
    pch.h
    STLArray.h
    STLIteration.h
    STLList.h
    STLMap.h
    STLSet.h
    STLString.cpp
    STLString.h
    USAccessors.h
    USBase64Cipher.cpp
    USBase64Cipher.h
    USByteStream.cpp
    USByteStream.h
    USCanary.cpp
    USCanary.h
    USCipher.cpp
    USCipher.h
    USCipherStream.cpp
    USCipherStream.h
    USDeflater.cpp
    USDeflater.h
    USDeviceTime_apple.cpp
    USDeviceTime.h
    USDeviceTime_posix.cpp
    USDeviceTime_win32.cpp
    USDirectoryItr.h
    USDirectoryItr_posix.cpp
    USDirectoryItr_win32.cpp
    USFactory.h
    USFilename.cpp
    USFilename.h
    USFileStream.cpp
    USFileStream.h
    USFileSys.cpp
    USFileSys.h
    USFloat.h
    USGlobals.cpp
    USGlobals.h
    USInflater.cpp
    USInflater.h
    USLeanArray.h
    USLeanList.h
    USLeanPool.h
    USLeanStack.h
    USList.h
    uslscore.cpp
    uslscore.h
    USLua.h
    USLuaObject.cpp
    USLuaObject.h
    USLuaObject-impl.h
    USLuaRef.cpp
    USLuaRef.h
    USLuaRuntime.cpp
    USLuaRuntime.h
    USLuaSerializer.cpp
    USLuaSerializer.h
    USLuaState.cpp
    USLuaState.h
    USLuaStateHandle.cpp
    USLuaStateHandle.h
    USLuaState-impl.h
    USMemStream.cpp
    USMemStream.h
    USObject.cpp
    USObject.h
    USRect.h
    USRef.h
    USRtti.cpp
    USRtti.h
    USStream.cpp
    USStreamFormatter.cpp
    USStreamFormatter.h
    USStream.h
    USTypeID.h
    USUnion.h
    USVec2D.h
    USVec3D.h
    USWeak.h
    USZip.cpp
    USZipFile.cpp
    USZipFile.h
    USZip.h
    )

target_link_libraries(uslscore
    ${LUA_LIBRARIES}
    ${ZLIB_LIBRARIES}
    )

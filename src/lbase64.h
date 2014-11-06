/*
* lbase64.c
* base64 encoding and decoding for Lua 5.1
* Luiz Henrique de Figueiredo <lhf@tecgraf.puc-rio.br>
* 23 Mar 2010 22:22:38
* This code is hereby placed in the public domain.
*/


#ifndef __LBASE64
#define __LBASE64

#include "lua.h"
#include "lauxlib.h"

LUALIB_API int luaopen_base64(lua_State *L);

#endif

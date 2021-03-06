#include "LuaKeyboard.h"

LuaKeyboard::LuaKeyboard()
{
}

LuaKeyboard::~LuaKeyboard()
{
}

const luaL_Reg LuaKeyboard::luaBinds[] = {
	{"KeyDown", lua_KeyDown},
	{NULL, NULL}
};

int LuaKeyboard::lua_KeyDown(lua_State* L)
{
	LuaBinder binder(L);
	return Keyboard::get(binder.checkstring(1));
}
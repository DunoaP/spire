#ifndef LUASTATE_H
#define LUASTATE_H

#include <core/SceneManager.h>
#include <core/Scene.h>

#include "../../GAME/Sokoban.h"

#include <binds/LuaClass.h>

class LuaState : public LuaClass{
public:
	LuaState();
	~LuaState();

	//luadata
	//State requests
	static int lua_Create(lua_State*);
	static int lua_Destroy(lua_State*);
	static int lua_AddEntity(lua_State*);
	static int lua_AddCamera(lua_State*);
	static int lua_GetDirectionalLight(lua_State*);
	static int lua_AddPointLight(lua_State*);
	static int lua_AddScript(lua_State*);

	static int lua_CreateSokoban(lua_State*);



	//StateManager requests
	static int lua_GetState(lua_State*);
	static int lua_RequestPriority(lua_State*);
	static int lua_Deprioritise(lua_State*);

	static const luaL_Reg luaBinds[];
};
#endif;
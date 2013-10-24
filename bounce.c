#include "g_local.h"

void PlayerBounce (edict_t *ent, float x, float y, float z){

	vec3_t		tempvec;
	
	VectorSet(tempvec, x,y,z);
	VectorAdd(ent->velocity,tempvec,ent->velocity);
	
}
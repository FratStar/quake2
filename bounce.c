#include "g_local.h"//pmt9 do you need this include

void PlayerBounce (edict_t *ent, float x, float y, float z){

	vec3_t		tempvec;
	
	VectorSet(tempvec, x,y,z);
	VectorAdd(ent->velocity,tempvec,ent->velocity);
	//z * bounce; //pmt9 get rid of this
	
}
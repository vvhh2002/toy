#include <infra/Api.h>
#include <jobs/Api.h>
#include <type/Api.h>
#include <tree/Api.h>
#include <pool/Api.h>
#include <refl/Api.h>
#include <ecs/Api.h>
#include <srlz/Api.h>
#include <math/Api.h>
#include <geom/Api.h>
#include <noise/Api.h>
#include <wfc/Api.h>
#include <fract/Api.h>
#include <lang/Api.h>
#include <ctx/Api.h>
#include <ui/Api.h>
#include <uio/Api.h>
#include <bgfx/Api.h>
#include <gfx/Api.h>
#include <gfx-pbr/Api.h>
#include <gfx-obj/Api.h>
#include <gltf/Api.h>
#include <gfx-gltf/Api.h>
#include <gfx-ui/Api.h>
#include <gfx-edit/Api.h>
#include <tool/Api.h>
#include <wfc-gfx/Api.h>
#include <frame/Api.h>
#include <util/Api.h>
#include <core/Api.h>
#include <visu/Api.h>
#include <edit/Api.h>
#include <block/Api.h>
#include <shell/Api.h>
#include <blocks/Api.h>

#ifdef MUD_PLATFORM_EMSCRIPTEN
#include <emscripten.h>
#define DECL EMSCRIPTEN_KEEPALIVE
#else
#define DECL
#endif


extern "C" {
	
	// Camp
	mud::Type* DECL Camp__type() {
		return &mud::type<Camp>();
	}
	Camp* DECL Camp_Camp_0() {
		return new Camp();
	}
	Camp* DECL Camp_Camp_3(toy::HSpatial spatial, const mud::vec3* position, Faction* faction) {
		return new Camp(spatial, *position, *faction);
	}
	mud::vec3* DECL Camp__get_position(Camp* self) {
		static mud::vec3 temp;
		return (temp = self->m_position, &temp);
	}
	void DECL Camp__set_position(Camp* self, mud::vec3* value) {
		self->m_position = *value;
	}
	Faction* DECL Camp__get_faction(Camp* self) {
		return self->m_faction;
	}
	void DECL Camp__set_faction(Camp* self, Faction* value) {
		self->m_faction = value;
	}
	void DECL Camp__destroy(Camp* self) {
		delete self;
	}
	// Faction
	mud::Type* DECL Faction__type() {
		return &mud::type<Faction>();
	}
	Faction* DECL Faction_Faction_2(uint32_t id, const mud::Colour* colour) {
		return new Faction(id, *colour);
	}
	uint32_t DECL Faction__get_id(Faction* self) {
		return self->m_id;
	}
	void DECL Faction__set_id(Faction* self, uint32_t value) {
		self->m_id = value;
	}
	mud::Colour* DECL Faction__get_colour(Faction* self) {
		static mud::Colour temp;
		return (temp = self->m_colour, &temp);
	}
	void DECL Faction__set_colour(Faction* self, mud::Colour* value) {
		self->m_colour = *value;
	}
	void DECL Faction__destroy(Faction* self) {
		delete self;
	}
	// Player
	mud::Type* DECL Player__type() {
		return &mud::type<Player>();
	}
	void DECL Player__destroy(Player* self) {
		delete self;
	}
	// Shield
	mud::Type* DECL Shield__type() {
		return &mud::type<Shield>();
	}
	Shield* DECL Shield_Shield_0() {
		return new Shield();
	}
	Shield* DECL Shield_Shield_4(toy::HSpatial spatial, toy::HEmitter emitter, Faction* faction, float radius) {
		return new Shield(spatial, emitter, *faction, radius);
	}
	Faction* DECL Shield__get_faction(Shield* self) {
		return self->m_faction;
	}
	void DECL Shield__set_faction(Shield* self, Faction* value) {
		self->m_faction = value;
	}
	float DECL Shield__get_radius(Shield* self) {
		return self->m_radius;
	}
	void DECL Shield__set_radius(Shield* self, float value) {
		self->m_radius = value;
	}
	float DECL Shield__get_charge(Shield* self) {
		return self->m_charge;
	}
	void DECL Shield__set_charge(Shield* self, float value) {
		self->m_charge = value;
	}
	float DECL Shield__get_discharge(Shield* self) {
		return self->m_discharge;
	}
	void DECL Shield__set_discharge(Shield* self, float value) {
		self->m_discharge = value;
	}
	void DECL Shield__destroy(Shield* self) {
		delete self;
	}
	// Slug
	mud::Type* DECL Slug__type() {
		return &mud::type<Slug>();
	}
	mud::vec3* DECL Slug__get_source(Slug* self) {
		static mud::vec3 temp;
		return (temp = self->m_source, &temp);
	}
	void DECL Slug__set_source(Slug* self, mud::vec3* value) {
		self->m_source = *value;
	}
	mud::vec3* DECL Slug__get_velocity(Slug* self) {
		static mud::vec3 temp;
		return (temp = self->m_velocity, &temp);
	}
	void DECL Slug__set_velocity(Slug* self, mud::vec3* value) {
		self->m_velocity = *value;
	}
	float DECL Slug__get_power(Slug* self) {
		return self->m_power;
	}
	void DECL Slug__set_power(Slug* self, float value) {
		self->m_power = value;
	}
	void DECL Slug__destroy(Slug* self) {
		delete self;
	}
	// Tank
	mud::Type* DECL Tank__type() {
		return &mud::type<Tank>();
	}
	Tank* DECL Tank_Tank_0() {
		return new Tank();
	}
	Tank* DECL Tank_Tank_5(toy::HSpatial spatial, toy::HMovable movable, toy::HEmitter emitter, toy::HReceptor receptor, Faction* faction) {
		return new Tank(spatial, movable, emitter, receptor, *faction);
	}
	void DECL Tank__destroy(Tank* self) {
		delete self;
	}
	// BlockWorld
	mud::Type* DECL BlockWorld__type() {
		return &mud::type<BlockWorld>();
	}
	BlockWorld* DECL BlockWorld_BlockWorld_2(const char* name, mud::JobSystem* job_system) {
		return new BlockWorld(name, *job_system);
	}
	toy::World* DECL BlockWorld__get_world(BlockWorld* self) {
		return &self->m_world;
	}
	toy::BulletWorld* DECL BlockWorld__get_bullet_world(BlockWorld* self) {
		return &self->m_bullet_world;
	}
	toy::Navmesh* DECL BlockWorld__get_navmesh(BlockWorld* self) {
		return &self->m_navmesh;
	}
	mud::uvec3* DECL BlockWorld__get_block_subdiv(BlockWorld* self) {
		static mud::uvec3 temp;
		return (temp = self->m_block_subdiv, &temp);
	}
	void DECL BlockWorld__set_block_subdiv(BlockWorld* self, mud::uvec3* value) {
		self->m_block_subdiv = *value;
	}
	mud::vec3* DECL BlockWorld__get_tile_scale(BlockWorld* self) {
		static mud::vec3 temp;
		return (temp = self->m_tile_scale, &temp);
	}
	void DECL BlockWorld__set_tile_scale(BlockWorld* self, mud::vec3* value) {
		self->m_tile_scale = *value;
	}
	mud::vec3* DECL BlockWorld__get_block_size(BlockWorld* self) {
		static mud::vec3 temp;
		return (temp = self->m_block_size, &temp);
	}
	void DECL BlockWorld__set_block_size(BlockWorld* self, mud::vec3* value) {
		self->m_block_size = *value;
	}
	mud::vec3* DECL BlockWorld__get_world_size(BlockWorld* self) {
		static mud::vec3 temp;
		return (temp = self->m_world_size, &temp);
	}
	void DECL BlockWorld__set_world_size(BlockWorld* self, mud::vec3* value) {
		self->m_world_size = *value;
	}
	void DECL BlockWorld__destroy(BlockWorld* self) {
		delete self;
	}
	
}



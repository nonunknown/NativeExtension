#include "register_types.h"

#include <godot/gdnative_interface.h>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/godot.hpp>

// Please dont remove the INCLUDES comment bellow, its used by the Extension addon to locate/include files
// INCLUDES
#include "CLASS_FILE_NAME.h"

using namespace godot;

void initialize_module_name_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}

	// Please dont remove the CLASS_REGISTERS comment bellow, its used by the Extension addon to locate/include files
	//CLASS_REGISTERS

	ClassDB::register_class<CLASS_NAME>();




}

void uninitialize_module_name_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
}

extern "C" {
// Initialization.
GDNativeBool GDN_EXPORT module_name_library_init(const GDNativeInterface *p_interface, const GDNativeExtensionClassLibraryPtr p_library, GDNativeInitialization *r_initialization) {
	godot::GDExtensionBinding::InitObject init_obj(p_interface, p_library, r_initialization);

	init_obj.register_initializer(initialize_module_name_module);
	init_obj.register_terminator(uninitialize_module_name_module);
	init_obj.set_minimum_library_initialization_level(MODULE_INITIALIZATION_LEVEL_SCENE);
	

	return init_obj.init();
}
}

/* godot-cpp integration testing project.
 *
 * This is free and unencumbered software released into the public domain.
 */

#ifndef HEADER_NAME_REGISTER_TYPES_H
#define HEADER_NAME_REGISTER_TYPES_H

#include <godot_cpp/core/class_db.hpp>

using namespace godot;

void initialize_module_name_module(ModuleInitializationLevel p_level);
void uninitialize_module_name_module(ModuleInitializationLevel p_level);

#endif // HEADER_NAME_REGISTER_TYPES_H

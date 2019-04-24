#ifndef MAP_HPP
#define MAP_HPP

#include <map>

namespace godot {
	template <typename K, typename V>
	using Map = std::map<K, V>;
} // namespace godot
#endif /* !MAP_HPP */
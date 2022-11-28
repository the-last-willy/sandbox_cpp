add_executable(example_ms_asan_allocation_size_too_big)

target_sources(example_ms_asan_allocation_size_too_big
	PRIVATE
		example1.cpp)

target_compile_options(example_ms_asan_allocation_size_too_big
	PRIVATE
		/fsanitize=address /Zi)

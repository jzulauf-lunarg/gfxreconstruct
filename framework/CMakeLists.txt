add_subdirectory(util)
add_subdirectory(plugin)
add_subdirectory(graphics)
add_subdirectory(format)
add_subdirectory(encode)
add_subdirectory(schema)
add_subdirectory(decode)
add_subdirectory(application)

option(GFXRECON_ENCODE_ORACLE_TESTS "Build the generated encode oracle tests (test-only; retired after encode inversion)" ON)

if (${RUN_TESTS})
    add_executable(gfxrecon_framework_test "")
    target_sources(gfxrecon_framework_test PRIVATE
            ${CMAKE_CURRENT_LIST_DIR}/test/main.cpp
            $<$<BOOL:${GFXRECON_ENABLE_VULKAN}>:${CMAKE_CURRENT_LIST_DIR}/test/test_arm_data_graph_structs.cpp>
            $<$<BOOL:${GFXRECON_ENABLE_VULKAN}>:${CMAKE_CURRENT_LIST_DIR}/test/test_vulkan_schema.cpp>
            $<$<BOOL:${GFXRECON_ENABLE_VULKAN}>:${GFXRECON_SOURCE_DIR}/framework/generated/generated_vulkan_schema_checks.cpp>
            ${CMAKE_CURRENT_LIST_DIR}/../tools/platform_debug_helper.cpp)
    if (GFXRECON_ENCODE_ORACLE_TESTS AND GFXRECON_ENABLE_VULKAN)
        target_sources(gfxrecon_framework_test PRIVATE
                ${CMAKE_CURRENT_LIST_DIR}/test/encode_oracle/oracle_encoder.h
                ${CMAKE_CURRENT_LIST_DIR}/test/encode_oracle/encode_oracle_harness.h
                ${CMAKE_CURRENT_LIST_DIR}/generated/encode_oracles/generated_vulkan_encode_oracles.h
                ${CMAKE_CURRENT_LIST_DIR}/generated/encode_oracles/generated_vulkan_encode_oracles.cpp
                ${CMAKE_CURRENT_LIST_DIR}/generated/encode_oracles/generated_vulkan_encode_oracle_tests.cpp)
        if (MSVC)
            # One body per structure and one filled walk per structure exceed the default object section limit.
            set_source_files_properties(
                ${CMAKE_CURRENT_LIST_DIR}/generated/encode_oracles/generated_vulkan_encode_oracles.cpp
                ${CMAKE_CURRENT_LIST_DIR}/generated/encode_oracles/generated_vulkan_encode_oracle_tests.cpp
                PROPERTIES COMPILE_OPTIONS "/bigobj")
        endif()
    endif()
    target_link_libraries(gfxrecon_framework_test PRIVATE gfxrecon_encode gfxrecon_decode)
    if (MSVC)
        # Force inclusion of "gfxrecon_disable_popup_result" variable in linking.
        # On 32-bit windows, MSVC prefixes symbols with "_" but on 64-bit windows it doesn't.
        if(CMAKE_SIZEOF_VOID_P EQUAL 4)
            target_link_options(gfxrecon_framework_test PUBLIC "LINKER:/Include:_gfxrecon_disable_popup_result")
        else()
            target_link_options(gfxrecon_framework_test PUBLIC "LINKER:/Include:gfxrecon_disable_popup_result")
        endif()
    endif()
    common_build_directives(gfxrecon_framework_test)
    common_test_directives(gfxrecon_framework_test)
endif()

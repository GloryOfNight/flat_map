cmake_minimum_required(VERSION 3.28.0)

project(flat_map
        VERSION 1.0.0
        DESCRIPTION "std::flat_map implementation"
        HOMEPAGE_URL "https://github.com/GloryOfNight/flat_map"
        LANGUAGES CXX C)


add_library(${PROJECT_NAME} INTERFACE)

target_sources(${PROJECT_NAME} 
                PUBLIC
                    FILE_SET HEADERS
                    FILES
                    include/flat_map.hxx)

set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE CXX)

install(TARGETS ${PROJECT_NAME} EXPORT ${PROJECT_NAME}Targets 
        FILE_SET HEADERS DESTINATION ${CMAKE_INSTALL_PREFIX}
        FILE_SET CXX_MODULES DESTINATION ${CMAKE_INSTALL_PREFIX})
install(EXPORT ${PROJECT_NAME}Targets DESTINATION cmake)

option(FLAT_MAP_ENABLE_TESTING "Enable flat_map testing" ON)
if (FLAT_MAP_ENABLE_TESTING)
    include_directories(include)
    add_executable(test_at test/test_at.cxx)
    add_executable(test_compile test/test_compile.cxx)
    add_executable(test_emplace test/test_emplace.cxx)
    add_executable(test_erase test/test_erase.cxx)
    add_executable(test_erase_if test/test_erase_if.cxx)
    add_executable(test_insert test/test_insert.cxx)
    add_executable(test_insert_or_assign test/test_insert_or_assign.cxx)
    add_executable(test_operator_brackets test/test_operator_brackets.cxx)
    add_executable(test_sorted test/test_sorted.cxx)
    add_executable(test_try_emplace test/test_try_emplace.cxx)

    enable_testing()
    add_test(NAME test_at COMMAND $<TARGET_FILE:test_at>)
    add_test(NAME test_compile COMMAND $<TARGET_FILE:test_compile>)
    add_test(NAME test_emplace COMMAND $<TARGET_FILE:test_emplace>)
    add_test(NAME test_erase COMMAND $<TARGET_FILE:test_erase>)
    add_test(NAME test_erase_if COMMAND $<TARGET_FILE:test_erase_if>)
    add_test(NAME test_insert COMMAND $<TARGET_FILE:test_insert>)
    add_test(NAME test_insert_or_assign COMMAND $<TARGET_FILE:test_insert_or_assign>)
    add_test(NAME test_operator_brackets COMMAND $<TARGET_FILE:test_operator_brackets>)
    add_test(NAME test_try_emplace COMMAND $<TARGET_FILE:test_try_emplace>)
endif()
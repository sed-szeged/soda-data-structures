project(SoDALib)

include_directories(${SoDALib_SOURCE_DIR}/inc
                    ${Boost_INCLUDE_DIRS})

#Headers
file(GLOB_RECURSE headers ./inc/*.h)

#Sources
aux_source_directory(${SoDALib_SOURCE_DIR}/src/data data_src)
aux_source_directory(${SoDALib_SOURCE_DIR}/src/exception exception_src)
aux_source_directory(${SoDALib_SOURCE_DIR}/src/interface interface_src)
aux_source_directory(${SoDALib_SOURCE_DIR}/src/io io_src)
aux_source_directory(${SoDALib_SOURCE_DIR}/src src)

add_library(SoDA SHARED ${headers} ${data_src} ${exception_src} ${interface_src} ${io_src} ${util_src} ${src})
target_link_libraries(SoDA ${Boost_LIBRARIES})

install(TARGETS SoDA DESTINATION lib)
install(DIRECTORY ${SoDALib_SOURCE_DIR}/inc/data DESTINATION include)
install(DIRECTORY ${SoDALib_SOURCE_DIR}/inc/exception DESTINATION include)
install(DIRECTORY ${SoDALib_SOURCE_DIR}/inc/interface DESTINATION include)
install(DIRECTORY ${SoDALib_SOURCE_DIR}/inc/io DESTINATION include)



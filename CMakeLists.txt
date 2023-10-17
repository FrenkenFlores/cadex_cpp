# Set minimum required CMake version.
cmake_minimum_required(VERSION 3.10)
# Set project name.
project(cadex_cpp VERSION 1.0)


# Add the sourecs directory.
set(SOURCES_DIR "Source Files")


# Add the source files.
set(
    SOURCES
    ${SOURCES_DIR}/main.cpp
)

# Add the headers files.
set(
    HEADERS
    ${SOURCES_DIR}/Point.h
    ${SOURCES_DIR}/Curve.h
    ${SOURCES_DIR}/Circle.h
    ${SOURCES_DIR}/Ellipse.h
)


# Set the application name.
set(
    APP
    app
)

# Create an executable.
add_executable(
    ${APP}
    ${SOURCES}
    ${HEADERS}
)


# Set C++ version.
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

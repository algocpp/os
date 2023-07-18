
// algocpp/os/define.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

#ifndef ALGOCPP_OS_DEFINE
#define ALGOCPP_OS_DEFINE

#if defined(_WIN32) || defined(_WIN64)
#define WINDOWS_OS
#endif

#if defined(__unix__) || defined(__linux__)
#define LINUX_OS
#endif

#endif // ALGOCPP_OS_DEFINE
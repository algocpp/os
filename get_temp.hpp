
// algocpp/os/get_temp.hpp
//
// This file is part of algocpp and is copyrighted by algocpp.
// If used, it must comply with the MIT License.

#ifndef ALGOCPP_OS_GET_TEMP
#define ALGOCPP_OS_GET_TEMP

#if defined(_WIN32) || defined(_WIN64)
#include <windows.h>
#endif

#include <string>

namespace algocpp
{
	namespace os
	{
#if defined(_WIN32) || defined(_WIN64)
		inline std::string get_temp()
		{
			char szPath[1024];
			DWORD dwBuffSize;

			dwBuffSize = GetTempPath(
				sizeof(szPath) / sizeof(szPath[0]),
				szPath);

			return std::string{szPath};
		}
#else
		inline std::string get_temp()
		{
			return "/tmp";
		}
#endif
	}
}

#endif // ALGOCPP_OS_GET_TEMP

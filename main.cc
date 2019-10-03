#include <iostream>
#include <string>

#if defined(__FreeBSD__)
#include <sys/sysctl.h>
#elif defined(_WIN32)
#include <Windows.h>
#else
#include <unistd.h>
#endif

using std::string;

#define MAX_PATH 1024
static string getexename()
{
	char result[MAX_PATH];
#if defined(_WIN32)
	const string DELIM("\\");
#else
	const string DELIM("/");
#endif

#if defined(_WIN32)
	GetModuleFileName( NULL, result, MAX_PATH );
	const string s(result);
#elif defined(__linux__)
	const ssize_t count = readlink( "/proc/self/exe", result, MAX_PATH );
	const string s(result, result+count);
#elif defined(__FreeBSD__)
	const int mib[4] = { CTL_KERN , KERN_PROC , KERN_PROC_PATHNAME , -1 };
	size_t cb = sizeof(result);
	sysctl(mib, 4, result, &cb, NULL, 0);
	const string s(result);
#endif
	const size_t pos = s.find_last_of(DELIM);
	return s.substr( pos+1 );
}

int main()
{
	std::cout << "I am " << getexename() << ".\n";
	return 0;
}

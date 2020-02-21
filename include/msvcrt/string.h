/*
 * String definitions
 *
 * Derived from the mingw header written by Colin Peters.
 * Modified for Wine use by Jon Griffiths and Francois Gouget.
 * This file is in the public domain.
 */
#ifndef __WINE_STRING_H
#define __WINE_STRING_H

#include <corecrt.h>

#ifndef _NLSCMP_DEFINED
#define _NLSCMPERROR               ((unsigned int)0x7fffffff)
#define _NLSCMP_DEFINED
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifndef _CRT_MEMORY_DEFINED
#define _CRT_MEMORY_DEFINED
_ACRTIMP void*   __cdecl memchr(const void*,int,size_t);
_ACRTIMP int     __cdecl memcmp(const void*,const void*,size_t);
_ACRTIMP void*   __cdecl memcpy(void*,const void*,size_t);
_ACRTIMP errno_t __cdecl memcpy_s(void*,size_t,const void*,size_t);
_ACRTIMP void*   __cdecl memset(void*,int,size_t);
_ACRTIMP void*   __cdecl _memccpy(void*,const void*,int,unsigned int);
_ACRTIMP int     __cdecl _memicmp(const void*,const void*,unsigned int);

static inline int memicmp(const void* s1, const void* s2, size_t len) { return _memicmp(s1, s2, len); }
static inline void* memccpy(void *s1, const void *s2, int c, size_t n) { return _memccpy(s1, s2, c, n); }
#endif /* _CRT_MEMORY_DEFINED */

_ACRTIMP int   __cdecl _strcmpi(const char*,const char*);
_ACRTIMP int   __cdecl _strcoll_l(const char*, const char*, _locale_t);
_ACRTIMP char* __cdecl _strdup(const char*);
_ACRTIMP char* __cdecl _strerror(const char*);
_ACRTIMP errno_t __cdecl strerror_s(char*,size_t,int);
_ACRTIMP int   __cdecl _stricmp(const char*,const char*);
_ACRTIMP int   __cdecl _stricoll(const char*,const char*);
_ACRTIMP int   __cdecl _stricoll_l(const char*, const char*, _locale_t);
_ACRTIMP char* __cdecl _strlwr(char*);
_ACRTIMP errno_t __cdecl _strlwr_s(char*,size_t);
_ACRTIMP int   __cdecl _strncoll(const char*, const char*, size_t);
_ACRTIMP int   __cdecl _strncoll_l(const char*, const char*, size_t, _locale_t);
_ACRTIMP int   __cdecl _strnicmp(const char*,const char*,size_t);
_ACRTIMP int   __cdecl _strnicoll(const char*, const char*, size_t);
_ACRTIMP int   __cdecl _strnicoll_l(const char*, const char*, size_t, _locale_t);
_ACRTIMP char* __cdecl _strnset(char*,int,size_t);
_ACRTIMP char* __cdecl _strrev(char*);
_ACRTIMP char* __cdecl _strset(char*,int);
_ACRTIMP char* __cdecl _strupr(char*);
_ACRTIMP errno_t __cdecl _strupr_s(char *, size_t);

_ACRTIMP void*   __cdecl memmove(void*,const void*,size_t);
_ACRTIMP errno_t __cdecl memmove_s(void*,size_t,const void*,size_t);
_ACRTIMP char*   __cdecl strcat(char*,const char*);
_ACRTIMP errno_t __cdecl strcat_s(char*,size_t,const char*);
_ACRTIMP char*   __cdecl strchr(const char*,int);
_ACRTIMP int     __cdecl strcmp(const char*,const char*);
_ACRTIMP int     __cdecl strcoll(const char*,const char*);
_ACRTIMP char*   __cdecl strcpy(char*,const char*);
_ACRTIMP errno_t __cdecl strcpy_s(char*,size_t,const char*);
_ACRTIMP size_t  __cdecl strcspn(const char*,const char*);
_ACRTIMP char*   __cdecl strerror(int);
_ACRTIMP size_t  __cdecl strlen(const char*);
_ACRTIMP char*   __cdecl strncat(char*,const char*,size_t);
_ACRTIMP errno_t __cdecl strncat_s(char*,size_t,const char*,size_t);
_ACRTIMP int     __cdecl strncmp(const char*,const char*,size_t);
_ACRTIMP char*   __cdecl strncpy(char*,const char*,size_t);
_ACRTIMP errno_t __cdecl strncpy_s(char*,size_t,const char*,size_t);
_ACRTIMP size_t  __cdecl strnlen(const char*,size_t);
_ACRTIMP char*   __cdecl strpbrk(const char*,const char*);
_ACRTIMP char*   __cdecl strrchr(const char*,int);
_ACRTIMP size_t  __cdecl strspn(const char*,const char*);
_ACRTIMP char*   __cdecl strstr(const char*,const char*);
_ACRTIMP char*   __cdecl strtok(char*,const char*);
_ACRTIMP char*   __cdecl strtok_s(char*,const char*,char**);
_ACRTIMP size_t  __cdecl strxfrm(char*,const char*,size_t);

#ifndef _WSTRING_DEFINED
#define _WSTRING_DEFINED
_ACRTIMP wchar_t* __cdecl _wcsdup(const wchar_t*);
_ACRTIMP int      __cdecl _wcsicmp(const wchar_t*,const wchar_t*);
_ACRTIMP int      __cdecl _wcsicoll(const wchar_t*,const wchar_t*);
_ACRTIMP int      __cdecl _wcsicoll_l(const wchar_t*, const wchar_t*, _locale_t);
_ACRTIMP wchar_t* __cdecl _wcslwr(wchar_t*);
_ACRTIMP errno_t  __cdecl _wcslwr_s(wchar_t*, size_t);
_ACRTIMP int      __cdecl _wcscoll_l(const wchar_t*, const wchar_t*, _locale_t);
_ACRTIMP int      __cdecl _wcsncoll(const wchar_t*, const wchar_t*, size_t);
_ACRTIMP int      __cdecl _wcsncoll_l(const wchar_t*, const wchar_t*, size_t, _locale_t);
_ACRTIMP int      __cdecl _wcsnicmp(const wchar_t*,const wchar_t*,size_t);
_ACRTIMP int      __cdecl _wcsnicoll(const wchar_t*,const wchar_t*,size_t);
_ACRTIMP int      __cdecl _wcsnicoll_l(const wchar_t*, const wchar_t*, size_t, _locale_t);
_ACRTIMP size_t   __cdecl _wcsnlen(const wchar_t*,size_t);
_ACRTIMP wchar_t* __cdecl _wcsnset(wchar_t*,wchar_t,size_t);
_ACRTIMP wchar_t* __cdecl _wcsrev(wchar_t*);
_ACRTIMP wchar_t* __cdecl _wcsset(wchar_t*,wchar_t);
_ACRTIMP wchar_t* __cdecl _wcsupr(wchar_t*);
_ACRTIMP errno_t  __cdecl _wcsupr_s(wchar_t*, size_t);

_ACRTIMP wchar_t* __cdecl wcscat(wchar_t*,const wchar_t*);
_ACRTIMP errno_t  __cdecl wcscat_s(wchar_t*,size_t,const wchar_t*);
_ACRTIMP wchar_t* __cdecl wcschr(const wchar_t*,wchar_t);
_ACRTIMP int      __cdecl wcscmp(const wchar_t*,const wchar_t*);
_ACRTIMP int      __cdecl wcscoll(const wchar_t*,const wchar_t*);
_ACRTIMP wchar_t* __cdecl wcscpy(wchar_t*,const wchar_t*);
_ACRTIMP errno_t  __cdecl wcscpy_s(wchar_t*,size_t,const wchar_t*);
_ACRTIMP size_t   __cdecl wcscspn(const wchar_t*,const wchar_t*);
_ACRTIMP size_t   __cdecl wcslen(const wchar_t*);
_ACRTIMP wchar_t* __cdecl wcsncat(wchar_t*,const wchar_t*,size_t);
_ACRTIMP int      __cdecl wcsncmp(const wchar_t*,const wchar_t*,size_t);
_ACRTIMP wchar_t* __cdecl wcsncpy(wchar_t*,const wchar_t*,size_t);
_ACRTIMP errno_t  __cdecl wcsncpy_s(wchar_t*,size_t,const wchar_t*,size_t);
_ACRTIMP size_t   __cdecl wcsnlen(const wchar_t*,size_t);
_ACRTIMP wchar_t* __cdecl wcspbrk(const wchar_t*,const wchar_t*);
_ACRTIMP wchar_t* __cdecl wcsrchr(const wchar_t*,wchar_t wcFor);
_ACRTIMP size_t   __cdecl wcsspn(const wchar_t*,const wchar_t*);
_ACRTIMP wchar_t* __cdecl wcsstr(const wchar_t*,const wchar_t*);
_ACRTIMP wchar_t* __cdecl wcstok_s(wchar_t*,const wchar_t*,wchar_t**);
_ACRTIMP size_t   __cdecl wcsxfrm(wchar_t*,const wchar_t*,size_t);

#ifdef _UCRT
_ACRTIMP wchar_t* __cdecl wcstok(wchar_t*,const wchar_t*,wchar_t**);
static inline wchar_t* _wcstok(wchar_t* str, const wchar_t *delim) { return wcstok(str, delim, NULL); }
#  ifdef __cplusplus
extern "C++" inline wchar_t* wcstok(wchar_t* str, const wchar_t *delim) { return wcstok(str, delim, NULL); }
#  elif defined(_CRT_NON_CONFORMING_WCSTOK)
#    define wcstok _wcstok
#  endif
#else /* _UCRT */
_ACRTIMP wchar_t* __cdecl wcstok(wchar_t*,const wchar_t*);
#  define _wcstok wcstok
#endif /* _UCRT */

#endif /* _WSTRING_DEFINED */

#ifdef __cplusplus
}
#endif


static inline int strcasecmp(const char* s1, const char* s2) { return _stricmp(s1, s2); }
static inline int strcmpi(const char* s1, const char* s2) { return _strcmpi(s1, s2); }
static inline char* strdup(const char* buf) { return _strdup(buf); }
static inline int stricmp(const char* s1, const char* s2) { return _stricmp(s1, s2); }
static inline int stricoll(const char* s1, const char* s2) { return _stricoll(s1, s2); }
static inline char* strlwr(char* str) { return _strlwr(str); }
static inline int strncasecmp(const char *str1, const char *str2, size_t n) { return _strnicmp(str1, str2, n); }
static inline int strnicmp(const char* s1, const char* s2, size_t n) { return _strnicmp(s1, s2, n); }
static inline char* strnset(char* str, int value, unsigned int len) { return _strnset(str, value, len); }
static inline char* strrev(char* str) { return _strrev(str); }
static inline char* strset(char* str, int value) { return _strset(str, value); }
static inline char* strupr(char* str) { return _strupr(str); }

static inline wchar_t* wcsdup(const wchar_t* str) { return _wcsdup(str); }
static inline int wcsicoll(const wchar_t* str1, const wchar_t* str2) { return _wcsicoll(str1, str2); }
static inline wchar_t* wcslwr(wchar_t* str) { return _wcslwr(str); }
static inline int wcsicmp(const wchar_t* s1, const wchar_t* s2) { return _wcsicmp(s1, s2); }
static inline int wcsnicmp(const wchar_t* str1, const wchar_t* str2, size_t n) { return _wcsnicmp(str1, str2, n); }
static inline wchar_t* wcsnset(wchar_t* str, wchar_t c, size_t n) { return _wcsnset(str, c, n); }
static inline wchar_t* wcsrev(wchar_t* str) { return _wcsrev(str); }
static inline wchar_t* wcsset(wchar_t* str, wchar_t c) { return _wcsset(str, c); }
static inline wchar_t* wcsupr(wchar_t* str) { return _wcsupr(str); }

#endif /* __WINE_STRING_H */

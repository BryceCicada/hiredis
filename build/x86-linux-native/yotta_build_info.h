#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2016 // UTC year
#define YOTTA_BUILD_MONTH 8 // UTC month 1-12
#define YOTTA_BUILD_DAY 24 // UTC day 1-31
#define YOTTA_BUILD_HOUR 8 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 11 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 56 // UTC second 0-61
#define YOTTA_BUILD_UUID dcc94eec-615a-4035-8d44-339097de1dd5 // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID adef0f0415efe3a9895f142e3122fd91f30792f2 // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION v0.13.3-6-gadef0f0 // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__

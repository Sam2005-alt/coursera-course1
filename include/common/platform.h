#ifndef PLATFORM_H
#define PLATFORM_H

// Platform definitions

#ifdef DEBUG
#define PRINTF(fmt, ...) printf(fmt, ##__VA_ARGS__)
#else
#define PRINTF(fmt, ...)
#endif

#endif // PLATFORM_H

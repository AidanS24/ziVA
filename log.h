#include <mach/mach.h>
#import <Foundation/Foundation.h>

#ifndef __LOG_H_
#define __LOG_H_

#define LOG_LOG(tag, fmt, ...) NSLog((@"[%c] %s: " fmt), tag, __func__, ##__VA_ARGS__)
#define NSLog(FORMAT, ...) printf("%s\n", [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);

#define DEBUG_LOG(fmt, ...) LOG_LOG('+', fmt, ##__VA_ARGS__)
#define ERROR_LOG(fmt, ...) LOG_LOG('-', fmt, ##__VA_ARGS__)

#endif /* __LOG_H_ */

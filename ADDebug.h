//
//  ADDebug.h
//
//  Copyright © 2019 CROP.network. All rights reserved.
//

#ifndef ADDebug_h
#define ADDebug_h

#ifndef NDEBUG
#define ADDLog(fmt, ...) NSLog(fmt, ##__VA_ARGS__)
#define ADAssert(condition, failure_msg_format, ...)
#else
#define ADDLog(fmt, ...)
#define ADAssert(condition, failure_msg_format, ...)
#endif

#endif /* ADDebug_h */

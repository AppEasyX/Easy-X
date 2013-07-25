//
//  EXDebug.h
//  EasyX
//
//  Created by feng lu on 12-12-6.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>




#ifdef __cplusplus
extern "C" {
#endif

    void EXDisplayLogForDevice(const char * name, NSString * content);
    
#ifdef __cplusplus
}
#endif



#ifdef DEBUG
//#define DLog(...) NSLog(@"%s %@", __PRETTY_FUNCTION__, [NSString stringWithFormat:__VA_ARGS__])
#define DLog(...) EXDisplayLogForDevice(__PRETTY_FUNCTION__, [NSString stringWithFormat:__VA_ARGS__]);
#define ALog(...) [[NSAssertionHandler currentHandler] handleFailureInFunction:[NSString stringWithCString:__PRETTY_FUNCTION__ encoding:NSUTF8StringEncoding] file:[NSString stringWithCString:__FILE__ encoding:NSUTF8StringEncoding] lineNumber:__LINE__ description:__VA_ARGS__]
#define FDPRINT(xx, ...)  NSLog(@"%s(%d): " xx, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define DLog(...) do { } while (0)
#define ALog(...)  NSLog(@"%s %@", __PRETTY_FUNCTION__, [NSString stringWithFormat:__VA_ARGS__])
#define TTDPRINT(xx, ...)  ((void)0)
#endif


#ifdef DEBUG
#define MLog(...) NSLog(@"%s %@", __PRETTY_FUNCTION__, [NSString stringWithFormat:__VA_ARGS__]) 
#else
#define MLog(...) do {} while (0)
#endif


#ifdef DEBUG
//#define FLog(...) NSLog(@"%s %@", __PRETTY_FUNCTION__, [NSString stringWithFormat:__VA_ARGS__])
#define FLog(...) EXDisplayLogForDevice(__PRETTY_FUNCTION__, [NSString stringWithFormat:__VA_ARGS__]);
#else
#define FLog(...) ((void)0)
#endif
//
//  FDeviceDebugging.h
//  EasyX
//
//  Created by feng lu on 13-1-11.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>

#define EXDebugRecordKeyPath    (@"EXDebugRecordKeyPath/")

@class EXDisplayLogging;
@interface EXDeviceDebugging : NSObject
{
@private
    NSMutableArray* _ftz_logCombination;
    NSCondition* _ftz_Condition;
    EXDisplayLogging* _ftz_logView;
    
    NSDateFormatter* _ftz_dateFormat;
}

+ (EXDeviceDebugging*)currentDeviceDebug;

- (void)setLog:(NSString*)log;

@end

//
//  NSDate+WBHelper.h
//  App58ForIphone
//
//  Created by fenglu on 11-10-24.
//  Copyright (c) 2011年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (WBHelper)

+ (NSString *)curDateWithFormat:(NSString *)formater;
+ (NSString *)curTimeWithFormat:(NSString *)formater;
- (NSString *)dateWithFormat:(NSString *)formater;
- (NSString *)timeWithFormat:(NSString *)formater;

@end

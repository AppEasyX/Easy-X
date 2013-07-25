//
//  UIDevice+WBHelper.h
//  App58ForIphone
//
//  Created by fenglu on 11-10-24.
//  Copyright (c) 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIDevice (WBHelper)

+ (NSString *)ua;
+ (NSString*)version;
+ (NSUInteger)machine;
+ (NSString *)OSVer;
+ (NSString *)deviceName;
+ (NSString *)platformString:(NSUInteger)platform;
+ (NSString *)imei;

+ (CGSize)screenResolution;
+ (BOOL)isRetinaDisplay;

+ (BOOL)isMultitaskingCapable;
// 是否支持陀螺仪
+ (BOOL)isGyroscopeAvailable;

//+ (BOOL)canSendEmail;
//+ (BOOL)canSendSMS;

@end

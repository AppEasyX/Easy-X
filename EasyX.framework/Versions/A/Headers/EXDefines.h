//
//  EXDefines.h
//  EasyX
//
//  Created by jf4444 on 12-11-19.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

/**
 * 安全释放
 */
#define EX_RELEASE_SAFELY(__POINTER) { if(__POINTER){[__POINTER release]; __POINTER = nil;} }

/**
 * 检测屏幕是否为iPhone5及以后的屏幕
 */
#define DEVICE_LATER_IPHONE5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640.0f, 1136.0f), [[UIScreen mainScreen] currentMode].size) : NO)

/**
 * iPhone5和之前型号屏幕分辨率的差值
 */
#define DEVICE_5_DIFFERENCE (88.0f)


/**
 * 检测StatusBar是否隐藏
*/
#define STATUS_BAR_HIDDEN_DIFFERENCE ([[UIApplication sharedApplication] isStatusBarHidden] ? 20.0f : 0.0f)





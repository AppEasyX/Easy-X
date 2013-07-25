//
//  EXNetStatus.h
//  Four20
//
//  Created by jf4444 on 13-7-17.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  判断网络连接方式以及是否连接的工具类
 */

@interface EXNetStatus : NSObject {
@private
    
}

/**
 *	@brief	检测网络是否连接
 */
+ (BOOL)isNetConnect;

/**
 *	@brief	网络连接方式（@"WIFI"）（@"WWAN"）
 */
+ (NSString *)netPattern;

@end

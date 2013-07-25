//
//  NSString+arc4random.h
//  SunNote
//
//  Created by jf4444 on 13-3-26.
//  Copyright (c) 2013年 __SUN__. All rights reserved.
//

/**
 *  生成key的方法
 */

#import <Foundation/Foundation.h>

@interface NSString (arc4random)

/**
 *	@brief	生成key的方法
 *
 *  @return  key
 */
+ (NSString *)arc4random;

@end

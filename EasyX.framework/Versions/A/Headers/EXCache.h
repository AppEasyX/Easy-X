//
//  FCache.h
//  SunNote
//
//  Created by jf4444 on 12-8-24.
//  Copyright (c) 2012年 __SUN__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EXCache : NSObject

/**
 初始化
 */
+ (EXCache*)currentCache;
/**
 获取image
 */
- (UIImage*)imageForKey:(NSString*)key;
/**
 遍历
 */
- (BOOL)hasCacheForKey:(NSString*)key;
/**
 添加图片数据
 */
- (void)setData:(NSData*)data forKey:(NSString*)key;

@end

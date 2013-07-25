//
//  FImageMan.h
//  SunNote
//
//  Created by jf4444 on 12-8-22.
//  Copyright (c) 2012年 __SUN__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EXImageLoadUnit.h"
#import "EXImageManDelegate.h"

//默认缓存时间是7天
#define kDefineAvtivityTime     86400*7


@interface EXImageMan : NSObject <EXimageDownloadUnitDelegate> {
@private
    
}

/**
 avtivityEndTime 的单位是秒，具结束还有多少秒
 */
-(void) loadImgWithUrl:(NSString*)url avtivityEndTime:(NSInteger) avtivityEndTime
target:(id<EXImageManDelegate>)tar imgIndex:(id)index;

- (UIImage*) loadLocalImgWithUrl:(NSString*)url;

- (BOOL) imgIsLocalWithUrl:(NSString*)url;
- (void)cancelAllOperation;
@end

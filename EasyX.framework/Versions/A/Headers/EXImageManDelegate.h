//
//  FImageManDelegate.h
//  SunNote
//
//  Created by jf4444 on 12-8-23.
//  Copyright (c) 2012年 __SUN__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EXImageDownIndex.h"

@protocol EXImageManDelegate <NSObject>

- (void)imgLoadFinished:(UIImage *)image imgIndex:(id)index;
- (void)imgLoadFail:(id)index;

@end

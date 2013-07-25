//
//  FAnimationBlowAndShinking.h
//  JFImageCacheLoad
//
//  Created by jf4444 on 13-5-7.
//  Copyright (c) 2013年 贾 飞. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EXAnimationBlowAndShinking : NSObject {
@private
    UIView *_targetAnimationView;
}

@property (nonatomic, retain) UIView *targetAnimationView;

- (void)startShrinking;
- (void)startBlowing;

- (void)stopShrinking;
- (void)stopBlowing;

@end

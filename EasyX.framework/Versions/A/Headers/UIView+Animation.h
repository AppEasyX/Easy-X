//
//  UIView+Animation.h
//  AppForSPAolai
//
//  Created by 唐彬琪 on 12-8-24.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Animation)
// 渐渐显示
- (void)addAnimationGraduallyDisplay:(NSString *)animationType;
//改变alpha
- (void)addAlpaDisplayAnimation;
- (void)removeHiddenAlpaAnimation;
@end


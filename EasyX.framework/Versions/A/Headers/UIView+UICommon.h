//
//  UIView+UICommon.h
//  EasyX
//
//  Created by feng lu on 12-11-5.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import <UIKit/UIKit.h>

@class EXTabBarController;
typedef enum {
    FUIViewAnimation    //还未补全
} FUIViewAnimationTransition;

@interface UIView (FUICommon)

- (UIViewController*) EXOpenURL:(NSString*) URL;
- (UIImage*) truncationScreen;
@end



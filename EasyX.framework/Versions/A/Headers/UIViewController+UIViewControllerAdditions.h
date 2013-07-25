//
//  UIViewController+UIViewControllerAdditions.h
//  EasyX
//
//  Created by feng lu on 12-11-1.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import <UIKit/UIKit.h>

@class EXTabBarController;
@class EXSlideViewController;
@class EXNavigationController;

@interface UIViewController (FCategory)


- (void)addSubcontroller:(UIViewController*)controller animated:(BOOL)animated
              transition:(UIViewAnimationTransition)transition;


- (void)setTabBarHidden:(BOOL)hidden animated:(BOOL)animated;

@property (nonatomic) EXSlideViewController *sildeController;
@property (nonatomic) EXTabBarController *tabBarController;
@property (nonatomic) EXNavigationController *onlyNavgationController;
@property (nonatomic) EXNavigationController *onlyPresentNavgationController;

@end

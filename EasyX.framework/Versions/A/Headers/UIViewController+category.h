//
//  UIViewController+category.h
//  EasyX
//
//  Created by feng lu on 12-11-27.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (category)
- (BOOL)canContainControllers;
- (UIViewController*)topSubcontroller;

@end


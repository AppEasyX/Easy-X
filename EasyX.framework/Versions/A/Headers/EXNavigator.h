//
//  EXNavigator.h
//  EasyX
//
//  Created by feng lu on 12-11-5.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import "EXBaseNavigator.h"

UIViewController* EXOpenURLFromView(NSString* URL, UIView* view, id obj);

/**
 *  向注册器发送一条指令，指令的内容为暂时只能是注册过的控制器代号
 *  @return 指令指向的控制器
 */
UIViewController* EXOpenURL(NSString* URL);

/**
 *  向注册器发送一条指令，指令的内容为暂时只能是注册过的控制器代号
 *  @return 指令指向的控制器
 */
UIViewController* EXPresentOpenURL(NSString* URL);

void    EXDismissPresen(BOOL animate);

@interface EXNavigator : EXBaseNavigator

/**
 *  向注册器发送一条指令，指令的内容为暂时只能是注册过的控制器代号
 *  @return 指令指向的控制器
 */
+ (EXNavigator*)navigator;

- (UIViewController*)viewControllerForURL:(NSString*)URL;


@end

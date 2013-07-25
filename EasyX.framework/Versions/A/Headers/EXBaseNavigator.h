//
//  EXBaseNavigator.h
//  EasyX
//
//  Created by feng lu on 12-11-5.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@protocol EXNavigatorDelegate;
@class EXRegistrationToole;
@class FURLPattern;
@class EXURLAction;

@interface EXBaseNavigator : NSObject
{
    EXRegistrationToole*            _regToole;
    
    UIWindow*                       _window;
    
    UIViewController*               _rootViewController;
    
    id<EXNavigatorDelegate>         _delegate;
    
    UIViewController*               _presentContrller;
}

/**
 * 用于映射管理器与代号
 *
 * @see EXRegistrationToole
 */
@property (nonatomic, readonly) EXRegistrationToole* regToole;

@property (nonatomic, retain) UIWindow* window;

@property (nonatomic, readonly) UIViewController* rootViewController;

//@property (nonatomic, assign) id<EXNavigatorDelegate> delegate;


+ (EXBaseNavigator*)globalNavigator;

/**
 * 
 *
 * @return rootViewController
 */
- (UIViewController*)restoreViewControllers;
- (UIViewController*)openURLAction:(EXURLAction*)action;
@end

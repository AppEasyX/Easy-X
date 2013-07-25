//
//  EXNavigationViewController.h
//  EasyX
//
//  Created by feng lu on 12-11-1.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

/**
 * 自定义的navgationController（此处只为一个容器，包含系统的navigationController和custom的navigationBar），处理navBar的高度和显示以及push和navigationBar高度改变的动画
 */

#import "EXBaseNavigationViewController.h"
#import "EXBaseViewController.h"
#import "EXNavigationBar.h"
#import "EXNavigationController.h"

@class EXViewController;
@interface EXNavigationViewController : EXBaseViewController {
@private
    EXNavigationBar *_exNavigationBar;
    int _preNavControllerCount;
    BOOL _navBarHidden;
@public
    EXNavigationController *_navigationStackController;
    EXViewController *_currentController;
}

/**
 * 真正push的navigationController
 */
@property (nonatomic, retain, readonly) EXNavigationController *navigationStackController;

/**
 * 当前显示的EXViewController
 */
@property (nonatomic, assign, readonly) EXViewController *currentController;


/**
 *	@brief	设置navigationController的rootViewController
 *
 *	@param 	controllerName 	rootController的className
 *	@param 	animated 	是否需要过渡动画
 */
- (void)setNavigationStackRootControllerName:(NSString *)controllerName withAnimated:(BOOL)animated;

/**
 *	@brief	设置navgationBar的隐藏和显示，并决定是否需要过渡动画
 *
 *	@param 	hidden 	是否隐藏
 *	@param 	animated 	是否需要过渡动画
 */
- (void)setNavigationBarHidden:(BOOL)hidden animated:(BOOL)animated;

@end

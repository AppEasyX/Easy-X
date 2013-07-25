//
//  EXTabBarController.h
//  EasyX
//
//  Created by feng lu on 12-11-26.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import "EXModelViewController.h"
#import "EXTabDelegate.h"

@class EXTabStrip;

@interface EXTabBarController : EXModelViewController <EXTabDelegate>
{
    EXTabStrip* _tabBarStrip;       //tabbar模块
    
    UIViewController* _selectController;    //被选中的viewcontroller
    NSArray* _viewControllers;      //tabbarController管理的controller数组
     
    BOOL   _tabBarHidden;            //tabbar是否隐藏
}

@property(nonatomic, retain) EXTabStrip* tabBarStrip;
@property(nonatomic, retain) UIViewController* selectController;
@property(nonatomic, copy) NSArray *viewControllers;
@property(nonatomic, assign, readonly) BOOL    tabBarHidden;


/**
 *	@brief	设置被选择的tab的index
 *
 *	@param 	selectedTabIndex 	被选中的tab的index值
 */
- (void)setSelectedTabIndex:(NSInteger)selectedTabIndex;


/**
 *	@brief	设置tabbar的隐藏和显示
 *
 *	@param 	hidden 	是否隐藏
 */
- (void)setTabBarHidden:(BOOL)hidden;


/**
 *	@brief	设置tabbar的隐藏和显示，并决定是否需要过渡动画
 *
 *	@param 	hidden 	是否隐藏
 *	@param 	animated 	是否需要过渡动画
 */
- (void)setTabBarHidden:(BOOL)hidden animated:(BOOL)animated;


@end

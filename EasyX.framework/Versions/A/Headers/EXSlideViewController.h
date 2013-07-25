//
//  EXSlideViewController.h
//  EasyX
//
//  Created by feng lu on 12-11-29.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

/**
 * 类似于path的滑动controller，可以方便快捷的实现类似path的效果。
 * 提供了滑动中，打开后，关上后的各种回调方法
 */

#import "EXTableViewController.h"

@protocol EXSlideViewDelegate;

@interface EXSlideViewController : EXTableViewController {
@private
    NSArray* _slideItems;
    
    NSMutableDictionary* _viewControllers;
    UIViewController* _selectController;
    
    UIPanGestureRecognizer *_panGesture;
    
    // previousLocation;
    CGPoint _previousLocation;
    
    id<EXSlideViewDelegate> _delegate;
    
}

/**
 *  当前正在显示的controller
 */
@property(nonatomic, retain) UIViewController* selectController;

/**
 *  所有的items，存储实体的class为EXSlideItem
 */
@property(nonatomic, retain) NSArray* slideItems;

/**
 *  所有的item对应controller
 */
@property(nonatomic, retain) NSMutableDictionary* viewControllers;

/**
 *  回调哪个实体
 */
@property(nonatomic, assign) id<EXSlideViewDelegate> delegate;


/**
 *  @brief 调用者显示左边的遮盖区域
 */
- (void)showLeftViewController:(id)sender;

/**
 *  @brief 返回主界面
 */
- (void)showMainViewController:(id)sender;

/**
 *  @brief 开发者可以通过这个函数使滑动手势生效或者禁用
 */
- (void)slideGestureValid:(BOOL)valid;

@end


@protocol EXSlideViewDelegate<NSObject>

@optional
/**
 *  @brief slide正在滑动
 */
- (void)slideViewDidScroll:(EXSlideViewController *)controller;

/**
 *  @brief slide回到合并状态
 */
- (void)slideViewDidReturn:(EXSlideViewController *)controller;

/**
 *  @brief slide打开
 */
- (void)slideViewDidOpen:(EXSlideViewController *)controller;
@end



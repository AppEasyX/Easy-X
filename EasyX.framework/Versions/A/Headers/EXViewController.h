//
//  EXViewController.h
//  EasyX
//
//  Created by feng lu on 12-11-1.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

/**
 *  自定义ViewController，支持一种默认的提示，和显示reload按钮
 *  exNavigationBarHeight为设置navBar高度的参数，默认为44.0f，要是想改变navgigationBar的高度，就设置此属性
 */

#import "EXNavigationItemViewController.h"

@class FTip;
@class FTipView;

@interface EXViewController : EXNavigationItemViewController {
@private
    UIButton *_reloadButton;
@protected
    FTipView *_tipView;
}

/**
 *  tip消失方法
 */
- (void)dismissTip;

/**
 *  @brief 显示不带activityIndicatorView的tip
 *  @param showTipStatic: aStr 需要显示的text 
 *  @param blackBg: blackBg 需要不需要显示提示的背景
 */
- (void)showTipStatic:(NSString *)aStr blackBg:(BOOL)blackBg;

/**
 *  @brief 显示不带activityIndicatorView的tip
 *  @param showTipStatic: aStr 需要显示的text
 *  @param blackBg: blackBg 需要不需要显示提示的背景
 *  @param parentView: aParentView 需要显示在哪个父视图上 
 */
- (void)showTipStatic:(NSString *)aStr blackBg:(BOOL)blackBg parentView:(UIView*)aParentView;

/**
 *  @brief 显示不带activityIndicatorView的tip
 *  @param showTipStatic: aStr 需要显示的text
 *  @param blackBg: blackBg 需要不需要显示提示的背景
 *  @param duration: dur 多长时间后自动消失
 */
- (void)showTipStatic:(NSString *)aStr blackBg:(BOOL)blackBg duration:(NSTimeInterval)dur;

/**
 *  @brief tip消失方法
 *  @param dismissTipWithTimer: aTimer 多长时间后消失
 */
- (void)dismissTipWithTimer:(NSTimer *)aTimer;

/**
 *  @brief 显示带activityIndicatorView的tip
 *  @param showTipProgress: aStr 需要显示的text
 *  @param blackBg: blackBg 需要不需要显示提示的背景
 */
- (void)showTipProgress:(NSString *)aStr blackBg:(BOOL)blackBg;

/**
 *  @brief 显示带activityIndicatorView的tip
 *  @param showTipProgress: aStr 需要显示的text
 *  @param blackBg: blackBg 需要不需要显示提示的背景
 *  @param parentView: aParentView 需要显示在哪个父视图上
 */
- (void)showTipProgress:(NSString *)aStr blackBg:(BOOL)blackBg parentView:(UIView*)aParentView;

/**
 *  @brief 显示重新加载的按钮
 *  @param showReloadButtonWithShowText: text 按钮显示的text
 */
- (void)showReloadButtonWithShowText:(NSString *)text;

@end

/**
 *  push或者pop动画完成后的回调，比如可以在动画完成后去执行tabBar和navBar的隐藏
 */
@interface EXViewController (pushOrPopAnimationDone)
/**
 *  @brief 在被push的controller中被调用
 */
- (void)pushAnimationDone;

/**
 *  @brief 在pop到的controller中被调用
 */
- (void)popAnimationDone;
@end

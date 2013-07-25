//
//  EXNavigationItem.h
//  EasyX
//
//  Created by jf4444 on 12-11-27.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  自定义的navigationItem
 *  -和开发者设置controller的navbar的一系列属性方式相同，尊重开发者的开发习惯
 */

@class EXNavigationBar;
@interface EXNavigationItem : NSObject {
@private
    UILabel *_exTitleLabel;
    NSString *_exTitle;
    UIFont *_exTitleFont;
    UIColor *_exTitleColor;
    UIColor *_exDefalutBacButtonTitleColor;
    UIView *_exLeftBarButtonView;
    UIView *_exRightBarButtonView;
    UIView *_exTitleView;
    UIImage *_exNavigationBarBacgoundImage;
    EXNavigationBar *_exNavigationBar;
    BOOL _exHideDefalutBacButton;
}

/**
 * 读取当前navigationViewControoler 的 NavigationBar
 */
@property (nonatomic, retain, readonly) EXNavigationBar *exNavigationBar;

/**
 * 读取当前NavigationBar 的 exTitleLabel,切可以直接更改lable的属性设置，达到业务需要
 */
@property (nonatomic, retain,readonly) UILabel *exTitleLabel;

/**
 * 读取或着设置当前NavigationBar 的 exTitle
 */
@property (nonatomic, copy) NSString *exTitle;

/**
 * 读取或着设置当前NavigationBar 的 exTitleFont
 */
@property (nonatomic, retain) UIFont *exTitleFont;

/**
 * 读取或着设置当前NavigationBar 的 exTitleColor
 */
@property (nonatomic, retain) UIColor *exTitleColor;

/**
 * 读取或着设置当前exDefalutBacButton 的 titleColor;
 */
@property (nonatomic, retain) UIColor *exDefalutBacButtonTitleColor;

/**
 * 读取或着设置当前NavigationBar 的 exLeftBarButtonView
 */
@property (nonatomic, retain) UIView *exLeftBarButtonView;

/**
 * 读取或着设置当前NavigationBar 的 exRightBarButtonView
 */
@property (nonatomic, retain) UIView *exRightBarButtonView;

/**
 * 读取或着设置当前NavigationBar 的 exTitleView
 */
@property (nonatomic, retain) UIView *exTitleView;

/**
 * 读取或着设置当前NavigationBar 的 exNavigationBarBacgoundImage
 */
@property (nonatomic, retain) UIImage *exNavigationBarBacgoundImage;

/**
 * 读取或着设置当前NavigationBar是否隐藏默认的返回按钮
 */
@property (nonatomic, assign) BOOL exHideDefalutBacButton;

/**
 *	@brief	初始化navigationItem
 *
 *  @return  navigationItem
 */
- (id)init;

@end

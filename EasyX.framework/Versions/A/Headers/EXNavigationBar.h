//
//  EXNavigationBar.h
//  EasyX
//
//  Created by feng lu on 12-11-20.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

/**
 *  自定义的navigationBar
 *  -使换背景图片变的简单（系统navbar的背景颜色在不同版本SDK中背景贴图方法处理不同）
 *  -默认按钮的默认调用方法为popToPrevViewController，若想在返回时做业务逻辑处理，请复写这个方法。活着可以自己写个exLeftView替换默认的返回按钮
 */

#import "EXView.h"

@class EXBaseNavigationViewController;
@interface EXNavigationBar : EXView {
    UILabel *_exTitleLabel;
    EXBaseNavigationViewController *_exNavigationViewController;
@private
    UIView *_exLeftView;
    UIView *_exRightView;
    UIView *_exTitleVeiw;
    UIImageView *_exBackGroundImageView;
    UIImage *_exBackGroundImage;
}

/**
 * 读取当前NavigationBar的背景图片
 */
@property (nonatomic, assign, readonly) UIImage *exBackGroundImage;

@end

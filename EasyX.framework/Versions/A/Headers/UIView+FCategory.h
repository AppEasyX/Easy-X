////
////  UIView+FCategory.h
////  EasyX
////
////  Created by 贾 飞 on 12-12-4.
////  Copyright (c) 2012年 feng lu. All rights reserved.
////
//
//#import <Foundation/Foundation.h>
//
//@interface UIView (addSubView)
//- (void)didAddSubview:(UIView *)subview;
//- (void)insertSubview:(UIView *)view atIndex:(NSInteger)index;
//- (void)exchangeSubviewAtIndex:(NSInteger)index1 withSubviewAtIndex:(NSInteger)index2;
//- (void)insertSubview:(UIView *)view belowSubview:(UIView *)siblingSubview;
//- (void)insertSubview:(UIView *)view aboveSubview:(UIView *)siblingSubview;
//- (void)bringSubviewToFront:(UIView *)view;
//- (void)sendSubviewToBack:(UIView *)view;
//- (UIView *)viewWithTag:(NSInteger)tag; 
//@end

#import <UIKit/UIKit.h>

@interface UIView(getResourceBundle)
- (NSString *)getMyBundlePath:(NSString *)fileName;
@end

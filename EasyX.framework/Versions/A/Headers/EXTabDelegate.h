//
//  EXTabDelegate.h
//  EasyX
//
//  Created by feng lu on 12-11-26.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>

@class EXTabBar;

@protocol EXTabDelegate <NSObject>

- (void)tabSelected:(NSInteger)selectedIndex;

- (void)setMoreViewBacView:(UIView *)bacView;
- (void)setMoreView:(UIView*)moreView;

- (void)openMoreView;

- (void)closeMoreView;
@end

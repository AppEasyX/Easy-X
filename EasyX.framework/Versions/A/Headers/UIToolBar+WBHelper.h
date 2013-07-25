//
//  UIToolBar+WBHelper.h
//  App58ForIphone
//
//  Created by feijia on 12-2-23.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIToolbar(WBAdditions)

+ (UIToolbar *)toolBarWithTarget:(id)target preAction:(SEL)preAction finishAction:(SEL)finishAction forControEvents:(UIControlEvents)controlEvents;

@end
